#include <iostream>

// The Interface of the Dependency 
class IService {
public:
    virtual void doSomething() = 0;
};

// The Implementation of the Dependency
class Service : public IService {
public:
    void doSomething() {
        std::cout << "Doing something..." << std::endl;
    }
};

// Client class that depends on IService
class Client {
private:
    IService* service;
public:
    // Dependency is injected through constructor
    Client(IService* service) : service(service) {}

    void useService() {
        service->doSomething();
    }
};

int main() {
    // Creating a service instance
    Service service;

    // Creating a client instance and injecting the service dependency
    Client client(&service);

    // Using the service through the client
    client.useService();
    
    return 0;
}
