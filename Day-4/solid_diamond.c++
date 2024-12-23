#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter The Length = ";
    cin>>len;
    //half solid pyramid
    for(int i=1;i<len+1;i++){
        //outter space
        for(int k=len;k>i;k--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //half inverted solid pyramid
    for(int i=len;i>0;i--){
        //outter space
        for(int k=len;k>i;k--){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}