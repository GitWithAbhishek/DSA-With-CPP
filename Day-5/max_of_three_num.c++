#include<iostream>
using namespace std;
void max_of_three_num(int a,int b,int c){
    if(a>b && a>c){
        cout<<a<<" Is The max";
    }
    else if (b>a && b>c)
    {
        cout<<b<<" Is The max";
    }
    else{
        cout<<c<<" Is The max";
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the three numbers";
    cin>>a>>b>>c;
    max_of_three_num(a,b,c);
}

