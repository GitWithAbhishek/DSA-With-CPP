#include<iostream>
#include<cmath>
using namespace std;

int fun(int n,int shift)
{
int val=1<<shift;
int result=n|val;
return result;
}

int main(){
    int n,result,shift;
    cout<<"Enter The Number = ";
    cin>>n;
    cout<<"Enter The Shift = ";
    cin>>shift;
    result=fun(n,shift);
    cout<<"The Result is "<<result;
}