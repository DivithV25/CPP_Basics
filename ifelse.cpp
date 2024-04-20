#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age>=18 && age<500){
        cout<<"you can vote"<<endl;
    }
    else if(age>=500){
        cout<<"Invalid entry";
    }
    else{
        cout<<"no you can't vote";
    }
}