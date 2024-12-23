#include<iostream>
using namespace std;
int main(){
    cout<<"Enter The Length -> ";
    int len;
    cin>>len;
    for(int i=0;i<len;i++){
        //space outside
        for(int k=len-1;k>i;k--){
            cout<<" ";
        }
        if(i==0||i==len-1){
            //inside space 
            for(int j=0;j<i+1;j++){
                cout<<j+1<<" ";
            }        
        }
        else{
            cout<<"1";
            for(int k=0;k<i*2-1;k++){
                cout<<" ";
            }
            cout<<i+1;

            }
            cout<<endl;
    }
}