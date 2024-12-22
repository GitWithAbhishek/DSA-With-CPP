#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter The Length = ";
    cin>>len;
    int line_count=1;
    for(int i=1;i<=len;i++){
        cout<<i<<" ";
        for(int j=i+1;j<=len;j++){
            if(i==len||i==1){
                cout<<j<<" ";
            }
            else{
                for(int k=(len-i)*2-2;k>0;k--){
                    cout<<" ";
                }
                cout<<len;
                break;
            }
        }
        cout<<endl;
    }
}