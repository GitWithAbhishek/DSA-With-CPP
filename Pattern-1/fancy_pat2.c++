#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter The Length = ";
    cin>>len;
    for(int i=1;i<=len;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
            if(i>1){
                cout<<"*"<<i;
                j++;
            }
        }
        cout<<endl;
    }
}