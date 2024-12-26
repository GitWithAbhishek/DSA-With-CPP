#include<iostream>
using namespace std;

double temp_conv_celc(int temp){
    double celc=temp+273.15;
    return celc;
}
double temp_conv_fer(int temp){
    double fer=temp*1.80+32.88;
    return fer;
}
int main(){
    int temp,result;
    cout<<"Enter the temperature = ";
    cin>>temp;
    cout<<temp_conv_celc(temp)<<endl;
    cout<<temp_conv_fer(temp);

}