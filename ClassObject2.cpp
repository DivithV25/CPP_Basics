#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int empid;
    int salary;

    Employee(string n, int eid, int s)
    {
        this->name = n;
        this->empid = eid;
        this->salary = s;
    }

    void displaydetails()
    {
        cout << "Emp id:" << this->empid << endl;
        cout << "Emp Name:" << this->name << endl;
        cout << "Salary:" << this->salary << endl;
    }
};
int main()
{

    cout << endl<< "Constructor" << endl;

    Employee one("Varun", 1, 100000000);

    //    one.name="Varun";
    //    one.empid=1;
    //    one.salary=100000000;
    one.displaydetails();
    cout << endl;
    Employee two("Divith", 2, 20000000);
    //    two.name="Divith";
    //    two.empid=2;
    //    two.salary=200000000;
    two.displaydetails();
}