#include<iostream>
using namespace std;
int main(){
int arr[5]={2,3,4,5,6};
for(int i=0;i<5;i++){
    cout<<arr[i]<<" " ;
}
int arr2[5];
cout<<endl<<"enter the elments in the array"<<endl;
for(int i=0;i<5;i++){
    cin>>arr2[i];
}
cout<<endl<<"Displaying the enterd array"<<endl;
for(int i=0;i<5;i++){
    cout<<arr2[i]<<" ";
}
// 2d array
int arr2d[2][3]={
    {1,2,3},
    {4,5,6}
    };
    cout<<endl;
    cout<<"Displaying 2D array"<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){

       cout<<arr2d[i][j]<<" "; 
    }
    cout<<endl;
}

}