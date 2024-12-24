#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=num;i>0;i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num,result;
    cout<<"Enter The Number = ";
    cin>>num;
    result=factorial(num);
    cout<<"The Factorial is "<<result;
}
