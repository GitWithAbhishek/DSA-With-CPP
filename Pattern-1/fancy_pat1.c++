#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter The Length = ";
    cin>>len;
    for(int i=0;i<len;i++){
        for(int j=3+i;j>2;j--){
            cout<<i+3;
        }
        cout<<endl;
    }
    for(int i=len+1;i>2;i--){
        for(int j=i;j>2;j--){
            cout<<i;
        }
        cout<<endl;
    }
}