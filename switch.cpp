#include<iostream>
using namespace std;
int main(){
   int age;
   cout<<"enter your age"<<endl;
   cin>>age; 
   switch (age)
   {
   case /* constant-expression */12:
    /* code */cout<<"your age is 12";
    break;
   case /* constant-expression */18:
    /* code */cout<<"your age is 18";
    break;
   
   default:
   cout<<"your age is neither 12 nor 18";

    break;
   }

}