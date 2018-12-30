#include <iostream>
#include "iclient.h"
#include "ipostoffice.h"
#include <assert.h>
using namespace std;

int main()
{
    auto post_office = IPostOffice::create(5);

    auto client0 = post_office->getClient("96052791812");
    client0->setFullName("Jan Kowalski");
    auto client1 = post_office->getClient("69100839677");
    client1->setFullName("Adam Nowak");
    client1->updatePriority(1);

    post_office->enqueueClient(client0);
    post_office->enqueueClient(client1);

    post_office->gateReady(3);
    auto status = post_office->getStatus();
    assert(status[3] == "Adam Nowak");

    post_office->gateReady(3);
    status = post_office->getStatus();
    assert(status[3] == "Jan Kowalski");

    client0->updateBiometricData("CTGA");
    return 0;
}

