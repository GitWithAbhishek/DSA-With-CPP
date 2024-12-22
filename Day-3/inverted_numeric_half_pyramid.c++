#include<iostream>
using namespace std;
int main(){
    cout<<"Printing Inverted Half Numeric Pyramid"<<endl;
    int len;
    cout<<"Enter The Length -> ";
    cin>>len;
    for(int i=len;i>0;i--){
        for(int j=1;j<i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}