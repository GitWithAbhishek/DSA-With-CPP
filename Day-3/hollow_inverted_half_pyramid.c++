#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter The Length = ";
    cin>>len;
    for(int i=len;i>0;i--){
        for(int j=i;j>0;j--){
            if(i==len||i==1){
                cout<<"* ";
            }
            else{
                cout<<"* ";
                for(int k=i-2;k>0;k--){
                    cout<<"  ";
                }
                cout<<"* ";
                break;
            }
        }
        cout<<endl;
    }
}