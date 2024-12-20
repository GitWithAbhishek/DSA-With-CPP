#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the length = ";
    cin>>len;
    for(int i=1;i<=len;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=(len-i)*2;k>=0;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        for(int i=len;i>0;i--){
            for(int j=i;j>0;j--){
                cout<<"*";
            }
            for(int k=(len-i)*2;k>=0;k--){
                cout<<" ";
            }
            for(int j=i;j>0;j--){
                cout<<"*";
            }
            cout<<endl;
        }
    }
