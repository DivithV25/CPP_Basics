#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int empid;
    int salary;

    void displaydetails()
    {
        cout << "Emp id:" << this->empid << endl;
        cout << "Emp Name:" << this->name << endl;
        cout << "Salary:" << this->salary << endl;
    }
};
int main()
{
    Employee one;
    one.name = "Varun";
    one.empid = 1;
    one.salary = 100000000;
    //  cout<<one.name<<endl; Directly printing

    one.displaydetails();
    cout << endl;
    Employee two;
    two.name = "Divith";
    two.empid = 2;
    two.salary = 200000000;
    two.displaydetails();
}