#include<iostream>
using namespace std;

int rev_num(int n){
    int new_num=0,rem;
    while(n>0){
        rem=n%10;
        new_num=new_num*10+rem;
        n=n/10;
    }
    return new_num;
}

int main(){
    int n,result;
    cout<<"Enter the number = ";
    cin>>n;
    result = rev_num(n);
    cout<<"The Reverse Number Is "<<result;

}