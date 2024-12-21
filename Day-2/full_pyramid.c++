#include<iostream>
using namespace std;
int main(){
    cout<<"Full Pyramid"<<endl;
    int len;
    cout<<"Enter The Length -> ";
    cin>>len;
    for(int i=0;i<len;i++){
        for(int k=i;k<len-1;k++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
         //Taking too many space acc to desired output
            cout<<"*   ";
        }
    cout<<endl;
    }
}