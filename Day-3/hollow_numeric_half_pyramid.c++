#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter Teh Length = ";
    cin>>len;
    for(int i= 1;i<=len;i++){
        for(int j=1;j<=i;j++){
            if(i==1||i==len){
                cout<<j<<" ";
            }
            else{
                cout<<"1 ";
                for(int k=2;k<i;k++){
                    cout<<"  ";
                }
                cout<<i;
                break;
            }
        }
        cout<<endl;
    }
}