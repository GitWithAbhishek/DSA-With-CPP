#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Dividing Two Numbers Using Binary Serach"<<endl;
    cout<<"Enter The Dividend - ";
    int dividend;
    cin>>dividend;
    cout<<"Enter The Divisor - ";
    int divisor;
    cin>>divisor;
    int quitiont;
    int start=0,end=dividend,in_ans;
    while(start<=end){
        int pre_ans=(start+end)/2;
        if(pre_ans*divisor==dividend){
            in_ans=pre_ans;
            break;
        }
        else if(pre_ans*divisor<dividend){
            in_ans=pre_ans;
            start=pre_ans+1;
        }
        else{
            end=pre_ans-1;
        }
    }
    long double final_ans =in_ans;
    int precision;
    cout<<"Enter The Precision ";
    cin>>precision;
    long double step=0.1;
    for(int i=1;i<=precision;i++){
        for(long double j=in_ans;j*divisor<=dividend;j=j+step){
            final_ans=j;

        }
        step=step/10;
    }
    cout<<"The Square Root Is "<<final_ans;

}