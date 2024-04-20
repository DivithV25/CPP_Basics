#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int empid;
    int salary;

    Employee(string n, int eid, int s, int pass)
    {
        this->name = n;
        this->empid = eid;
        this->salary = s;
        this->password = pass;
    }

    void displaydetails()
    {
        cout << "Emp id:" << this->empid << endl;
        cout << "Emp Name:" << this->name << endl;
        cout << "Salary:" << this->salary << endl;
    }
    void displaypass()
    {
        cout << "The password is " << this->password << endl;
    }

private:
    int password; // this key can be accessed only in this class not in main 
};
int main() 
{

    cout << endl
         << "Constructor" << endl;

    Employee one("Varun", 1, 100000000, 1234);

    one.displaydetails();
    one.displaypass();
    cout << endl;
    Employee two("Divith", 2, 20000000, 5678);
    two.displaydetails();
    two.displaypass();
}