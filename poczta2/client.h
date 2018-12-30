#ifndef CLIENT_H
#define CLIENT_H

#include "iclient.h"
#include "exceptions.h"

class Client : public IClient
{
private:
    std::string fullName;
    std::string idNumber;
    int priority;
    std::string biometricData;
    std::vector<std::string> package;
public:
    Client(const std::string &identificationNumber);
    virtual ~Client() = default;
    std::string getIdNumber();
    std::string getFullName();
    void setFullName(const std::string& fullName);
    int getPriority();
    void updatePriority(int priority);
    const std::string& getBiometricData();
    void updateBiometricData(const std::string& biometricData);
    bool verifyBiometricData(const std::string& biometricData, double threshold);
    void newPackage(const std::string& packageId);
    std::vector<std::string> awaitingPackages();
    void packagesCollected();
    //int similarityScore(char,char);
    //int findMax(int,int);

};

#endif // CLIENT_H
