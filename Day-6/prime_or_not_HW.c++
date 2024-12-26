#include<iostream>
using namespace std;
void prime_or_not(int num){
    int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count>0){
        cout<<"Not Prime";
    }
    else{
        cout<<"Yes Prime";
    }
}
int main(){
    int num;
    cout<<"Enter The Number = ";
    cin>>num;
    prime_or_not(num);
}
