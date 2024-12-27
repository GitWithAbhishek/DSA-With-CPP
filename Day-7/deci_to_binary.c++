#include<iostream>
#include<cmath>
using namespace std;

int decimal_to_binary(int n){
    int i=0,binno=0,rem;
    while(n>0){
        rem=n%2;
        binno= rem*pow(10,i++)+binno;
        n=n/2;
    }
    return binno;

}
int main(){
    int n,result;
    cout<<"Enter The Number = ";
    cin>>n;
    result=decimal_to_binary(n);
    cout<<"The Result is = "<<result;

}