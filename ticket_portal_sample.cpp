#include <iostream>
#include <string>
#include <ctime>
class Aadhar {
protected:
    std::string aadharNumber;
public:
    Aadhar(const std::string& aadhar) : aadharNumber(aadhar) {}
    std::string getAadharNumber() const { return aadharNumber; }
};

class Timestamp {
protected:
    std::time_t timestamp;
public:
    Timestamp() { timestamp = std::time(nullptr); }
    std::time_t getTimestamp() const { return timestamp; }
};

class ServiceTicket : public Aadhar, public Timestamp {
private:
    std::string ticketID;
    std::string issueDescription;
public:
    ServiceTicket(const std::string& aadhar, const std::string& issue)
        : Aadhar(aadhar), issueDescription(issue) {
        ticketID = "TICKET" + std::to_string(timestamp);
    }

    void displayTicket() const {
        std::cout << "Ticket ID: " << ticketID << std::endl;
        std::cout << "Aadhar Number: " << getAadharNumber() << std::endl;
        std::cout << "Timestamp: " << std::ctime(&timestamp);
        std::cout << "Issue Description: " << issueDescription << std::endl;
    }
};

int main() {
    ServiceTicket ticket("1234-5678-9012", "Internet connectivity issue");
    ticket.displayTicket();
    return 0;
    
}