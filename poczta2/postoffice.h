#ifndef POSTOFFICE_H
#define POSTOFFICE_H

#include "ipostoffice.h"
#include "exceptions.h"
#include <map>
#include"client.h"

class PostOffice : public IPostOffice
{
private:
    std::vector<std::string> gate;
    std::vector<std::shared_ptr<IClient>> _client;
    std::multimap <int,std::shared_ptr<IClient>,std::greater<int>> queue;


public:
    PostOffice(unsigned gate_count);
    static std::shared_ptr<IPostOffice> create(unsigned gate_count);
    virtual ~PostOffice() = default;
    std::shared_ptr<IClient> getClient(const std::string& identificationNumber);
    void enqueueClient(const std::shared_ptr<IClient>& client);
    std::vector<std::string> getStatus();
    void gateReady(unsigned gateIndex);
    void collectPackages(unsigned gateIndex);
};

#endif // POSTOFFICE_H
