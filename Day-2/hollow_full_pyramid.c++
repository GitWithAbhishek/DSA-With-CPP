#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter The Length = ";
    cin>>len;
    for(int i=0;i<len;i++){
        //outter space
        for(int k=len;k>i;k--){
            cout<<" ";
        }
        if(i==0||i==len-1){
            for(int j=0;j<i+1;j++){
                cout<<"* ";
            }

        }
        else{
            cout<<"*";
            //inner spaces
            for(int k =0;k<i*2-1;k++){
                cout<<" ";
            }
            cout<<"*";

        }
        cout<<endl;
    }
}