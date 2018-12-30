#include "postoffice.h"

PostOffice::PostOffice(unsigned gate_count)
{
    for(unsigned i=0;i<gate_count;i++)
    {
        gate.push_back("");
        _client.push_back(nullptr);
    }
}


std::shared_ptr<IClient> PostOffice::getClient(const std::string& identificationNumber){
    std::shared_ptr <IClient> ptrr(new Client(identificationNumber));
    return ptrr;
}

void PostOffice::enqueueClient(const std::shared_ptr<IClient>& client){
    queue.insert(std::pair<int,std::shared_ptr<IClient>>(client->getPriority(),client));
}


std::vector<std::string> PostOffice::getStatus(){
    return this->gate;
}

void PostOffice::gateReady(unsigned gateIndex){
    std::string message="Nie istnieje taki index";
    if(gateIndex > gate.size())
        throw IncorrectGateException(message);
    std::multimap <int,std::shared_ptr<IClient>,std::greater<int>>::iterator wsk=queue.begin();
    gate[gateIndex]=wsk->second->getFullName();
    _client[gateIndex]=wsk->second;
    queue.erase(wsk);
}
void PostOffice::collectPackages(unsigned gateIndex){

}
