#include<iostream>
#include<cmath>
using namespace std;
int bin_to_decimal(int n){
    int rem,decinum=0,i=0;
    while(n>0){
        rem=n%10;
        decinum=decinum+rem*pow(2,i++);
        n=n/10;

    }
    return decinum;
}
int main(){
    int bin,result;
    cout<<"Enter the binary number = ";
    cin>>bin;
    result=bin_to_decimal(bin);
    cout<<"The Result is "<<result;

}