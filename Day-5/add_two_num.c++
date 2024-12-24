#include<iostream>
using namespace std;
void sum_two_num(int num1,int num2){
    int sum = num1 +num2;
    cout<<"Sum Of Two Number Is = "<<sum;
}
int main(){
    int num1,num2;
    cout<<"Enter The Two Numbers = ";
    cin>>num1>>num2;
    sum_two_num(num1,num2);
}