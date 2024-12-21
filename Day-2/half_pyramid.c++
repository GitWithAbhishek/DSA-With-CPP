#include<iostream>
using namespace std;
int main(){
    cout<<"Printing The Half Pyramid :)"<<endl;
    int len;
    cout<<"Enter The Length -> ";
    cin>>len;
    for(int i=1;i<len+1;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}