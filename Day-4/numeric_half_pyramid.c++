#include<iostream>
using namespace std;
int main(){
    cout<<"Printing the numeric half pyramid"<<endl;
    int len;
    cout<<"Enter The Length -> ";
    cin>>len;
    for(int i=1;i<len+1;i++){
        for(int j=1;j<i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}