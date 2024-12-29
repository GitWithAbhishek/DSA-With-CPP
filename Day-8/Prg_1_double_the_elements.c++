#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter The Elements into the array "<<endl;
    /*Taking Input In Array*/
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Elements in the array "<<endl;
    /*Displaying Array Content*/
    for(int i=0;i<5;i++){
        cout<<arr[i]*2<<" ";
    }
}