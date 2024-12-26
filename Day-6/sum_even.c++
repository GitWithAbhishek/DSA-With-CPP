#include<iostream>
using namespace std;
int sum_even(int length){
    int sum=0;
    for(int i=0;i<=length;i+=2){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int length,result;
    cout<<"Enter the length = ";
    cin>>length;
    result=sum_even(length);
    cout<<"The Sum Is "<<result;

}