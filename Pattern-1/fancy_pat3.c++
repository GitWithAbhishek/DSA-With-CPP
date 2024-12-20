#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter The Length = ";
    cin>>len;
    for(int i=1;i<len+1;i++){
        int c=1;
        for(int j=1;j<=i;j++){
            cout<<i;
            if(i>1&&c<i){
                cout<<"*";
                c++;
            }
        }
        cout<<endl;
    }
    for(int i=len;i>0;i--){
        int c=1;
        for(int j=1;j<=i;j++){
            cout<<i;
            if(i>1 && c<i){
                cout<<"*";
                c++;
            }
        }
        cout<<endl;

    }
}