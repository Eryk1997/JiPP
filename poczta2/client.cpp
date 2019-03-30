#include "client.h"
#include <iostream>

int similarityScore(char a, char b)
{
    int result;
    if(a==b)
    {
        result=3;
    }
    else
    {
        result=-3;
    }
    return result;
}


int findMax(int array[], int length)
{
    int max = array[0];

    for(int i=1; i<length; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}




Client::Client(const std::string &identificationNumber)
{
    this->idNumber = identificationNumber;
    this->priority = 0;
}

std::string Client::getIdNumber()
{
    return this->idNumber;
}

std::string Client::getFullName()
{
    return this->fullName;
}

void Client::setFullName(const std::string &fullName)
{
    this->fullName = fullName;
}

int Client::getPriority()
{
    return this->priority;
}

void Client::updatePriority(int priority)
{
    this->priority = priority;
}

const std::string& Client::getBiometricData()
{
    return this->biometricData;
}

void Client::updateBiometricData(const std::string& biometricData)
{
    std::string message="Niedozwolone znaki DNA";
    int sizeBiometricData = biometricData.length();
    char tab[]={"ACTG"};
    for(unsigned i=0;i<sizeBiometricData;i++)
    {
        if(biometricData.at(i)!=tab[0] && biometricData.at(i)!=tab[1] && biometricData.at(i)!=tab[2] && biometricData.at(i)!=tab[3])
        throw IncorrectBiometricDataException(message);
        }
    this->biometricData = biometricData;
}

bool Client::verifyBiometricData(const std::string& biometricData, double threshold)
{

    std::string message="Niedozwolone znaki DNA";
    size_t sizeBiometricData = biometricData.length();
    char tabACTG[]={"ACTG"};
    for(unsigned i=0;i<sizeBiometricData;i++)
    {
        if(biometricData.at(i)!=tabACTG[0] && biometricData.at(i)!=tabACTG[1] && biometricData.at(i)!=tabACTG[2] && biometricData.at(i)!=tabACTG[3])
        throw IncorrectBiometricDataException(message);
        }

    int penalty=-2;
    int pom[4];
    int max=0;


    size_t size_thisBiometicData = this->biometricData.size();
    size_t  size_newBiometricData = biometricData.size();
/*
    char wiersz[size_thisBiometicData];
    char kolumna[size_newBiometricData];

    for(int i=0;i<size_thisBiometicData;i++)
        wiersz[i] = this->biometricData.at(i);

    for(int i=0;i<size_newBiometricData;i++)
        kolumna[i] = biometricData.at(i);
*/
   // int tab[size_newBiometricData+1][size_thisBiometicData+1];
    int **tab = new int*[size_newBiometricData+1];
    for(size_t i=0;i<size_newBiometricData+1;i++)
        tab[i]= new int[size_thisBiometicData+1];

    for(size_t i=0;i<size_thisBiometicData;i++)
        for(size_t j=0;j<=size_newBiometricData;j++)
            tab[i][j]=0;


    for(size_t i=1;i<size_newBiometricData+1;i++){
        for(size_t j=1;j<size_thisBiometicData+1;j++)
            {
                pom[0] = tab[i-1][j-1]+similarityScore(this->biometricData[j-1],biometricData[i-1]);
                pom[1] = tab[i-1][j]+penalty;
                pom[2] = tab[i][j-1]+penalty;
                pom[3] = 0;
                tab[i][j]= findMax(pom,4);

            }
    }

    for(int i=0;i<size_newBiometricData+1;i++){
        for(int j=0;j<size_thisBiometicData+1;j++)
            std::cout << tab[i][j] << " ";
        std::cout << std::endl;
    }

    for(int i=0;i<size_newBiometricData+1;i++){
        for(int j=0;j<size_thisBiometicData+1;j++){
            if(max<tab[i][j])
            {
                max=tab[i][j];
            }
        }
    }

    if(this->biometricData.size() > biometricData.size())
        max/=biometricData.size();
    else
        max/=this->biometricData.size();


    for (int i = 0; i<size_thisBiometicData+1; i++)
       delete [] tab[i];
    delete[] tab;

    if(max > threshold)
        return true;
    else
        return false;

}

void Client::newPackage(const std::string& packageId)
{
    std::string message="Paczka o podobnym ID istnieje";
    std::vector<std::string>::iterator wsk=package.begin();

    while(wsk!=package.end())
    {
        if((*wsk) == packageId)
            throw PackageExistsException(message);
        wsk++;
    }
    this->package.push_back(packageId);

}

std::vector<std::string> Client::awaitingPackages()
{
    return this->package;
}

void Client::packagesCollected()
{
    this->package.clear();
}

