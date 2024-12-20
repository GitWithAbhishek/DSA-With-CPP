#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter The Length = ";
    cin>>len;
    for ( int i = 1; i <= len; i++)
    {
        char a='A';
        for(int j=1;j<=i;j++){
        cout<<a<<" ";
        a++;
        }
        a=a-2;
        for(int c=2;c<=i;c++){
            cout<<a<<" ";
            a--;

        }
        cout<<endl;
    }  
}