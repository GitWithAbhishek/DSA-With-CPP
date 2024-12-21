#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter The Length = ";
    cin>>len;
    //half hollow pyramid
    for(int i=0;i<len;i++){
        //outter space
        for(int k=len-1;k>i;k--){
            cout<<" ";
        }
        if(i==0){
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
        }
        else{
            cout<<"*";
            for(int k=0;k<i*2-1;k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    //inverted hollow diamond
    for(int i=len;i>0;i--){
        //outter space 
        for(int k=len;k>i;k--){
            cout<<" ";
        }
        if(i==1){
            cout<<"*";
        }
        else{
            cout<<"*";
            for(int j=1;j<i*2-2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;

    }

    }