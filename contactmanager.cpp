#include "ContactManager.hpp"
using namespace std;
ContactManager::ContactManager()
{
    cout << "\n default const....\n";
    // firstName = "rutuja";
    // lastname = "tate";
    // number = 0;
    // email = "";
}
// ContactManager::ContactManager(string firstname, string lastname, unsigned long number, string email)
// {
//     this->firstName = firstname;
//     this->lastname = lastname;
//     this->number = number;
//     this->email = email;
// }
void ContactManager::Display()
{
    // cout<< "\n First name::" << firstName << "\t last name::" << lastname << "\t number::" << number << "\t email::" << email << endl;
}
void ContactManager::Add(string firstname, string lastname, unsigned long number, string email)
{
    struct data temp;
    temp.firstName = firstname;
    temp.lastname = lastname;
    temp.number = number;
    temp.email = email;
    info.push_back(temp);
}
void ContactManager::ListAllContacts()
{
    for (int i = 0; i < info.size(); ++i)
    {
        cout << "first name::" << info[i].firstName << "\t last name::" << info[i].lastname << "\t number::" << info[i].number << "\t email::" << info[i].email << endl;
    }
}
