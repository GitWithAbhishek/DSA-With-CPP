#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter The Length ";
    cin>>len;
    for(int i=0;i<len;i++){
        for(int k=len-1;k>i;k--){
            cout<<"  ";
        }
            for(int val=i+1;val<i*2+2;val++){
                cout<<val<<" ";
            }
            for(int val =i*2 ; val>i;val--){
                cout<<val<<" ";
            }
        cout<<endl;

    }

}