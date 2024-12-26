#include<iostream>
using namespace std;
int prime_from_range(int upper_range,int lower_range){
    int count=0;
    for(int i=lower_range;i<=upper_range;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            cout<<i<<",";
        }
        count=0;
    }
}
int main(){
    int upper_range,lower_range;
    cout<<"Enter The Range"<<endl;
    cout<<"Upper Range = ";
    cin>>upper_range;
    cout<<"Lower Range = ";
    cin>>lower_range;
    prime_from_range(upper_range,lower_range);


}
