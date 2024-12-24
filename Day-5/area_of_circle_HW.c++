#include<iostream>
using namespace std;
float area_of_circle(int rad){
    return (3.14*rad*rad);
} 
int main(){
    float rad,result;
    cout<<"Enter The Radius = ";
    cin>>rad;
    result=area_of_circle(rad);
    cout<<"Area of the circle is = "<<result;
}
