#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the length = ";
    cin>>len;
    for(int i=0;i<len;i++){
        for(int j=len;j>i;j--){
            cout<<"* ";
        }
        for(int k=0;k<i*2;k++){
            cout<<"  ";
        }
        for(int j=len;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
         for(int i=1;i<len+1;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int k=(len-i)*2;k>0;k--){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}