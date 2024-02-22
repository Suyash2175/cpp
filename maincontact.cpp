#include "ContactManager.hpp"
using namespace std;
int main()
{
    // default constructor called
    ContactManager cm;
    // ContactManager c1("Shubhada", "kunde", 4684656, "tsdgW@bjvmn");
    cm.Add("Rutuja", "Tate", 15487050, "rutu@gmail.com");
    cm.Add("Shubhada", "Kunde", 51760154, "Shiubhyu@gmail.com");
    cm.Add("Suyash", "Sonwane", 68414687, "suyash@.com");
    cm.ListAllContacts();
    // cm.Display();
    // c1.Display();
    return 0;
}
