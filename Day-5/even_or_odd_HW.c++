#include<iostream>
using namespace std;
void even_or_odd(int num){
    if(num%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}
int main(){
    int num;
    cout<<"Enter The Number = ";
    cin>>num;
    even_or_odd(num);
}
