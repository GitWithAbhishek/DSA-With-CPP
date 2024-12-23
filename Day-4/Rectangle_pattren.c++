#include<iostream>
using namespace std;
int main(){
    cout<<"Rectangle Pattern"<<endl;
    int bre,leng;
    cout<<"Enter the breadth - ";
    cin>>bre;
    cout<<"Enter the length - ";
    cin>>leng;
    for(int i=0;i<bre;i++){
        for(int j=0;j<leng;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}