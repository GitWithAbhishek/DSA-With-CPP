#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the length = ";
    cin>>len;
    for(int i=1;i<=len;i++){
        int c=1;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c=c*(i-j)/j;
        }
        cout<<endl;
    }
}