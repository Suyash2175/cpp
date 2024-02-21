#include <bits/stdc++.h>
struct data
{
    std::string firstName;
    std::string lastname;
    std::string email;
    unsigned long number;
};

class ContactManager
{
public:
    // constructor
    ContactManager();
    // ContactManager(std::string, std::string, unsigned long, std::string);
    // member funtion to add,edit,  delete
    void Add(std::string, std::string, unsigned long, std::string);
    void ListAllContacts();

    void Display();
    // std::string firstName;
    // std::string lastname;
    // std::string email;
    // unsigned long number;
    // struct data info;
    std::vector<struct data> info;
};
