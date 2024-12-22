#include<iostream>
using namespace std;
int main(){
    cout<<"Printing Inverted Half Pyramid"<<endl;
    int len;
    cout<<"Enter The Length -> ";
    cin>>len;
    for(int i=len;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}