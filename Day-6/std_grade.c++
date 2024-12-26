#include<iostream>
using namespace std;
char std_grade(int marks){
    if(marks>90){
        return 'A';
    }
    else if(marks>80 && marks <90){
        return 'B';
    }
    else if(marks>70 && marks <80){
    return 'C';
    }
    else{
        return 'D';
    }
}
int main(){
int marks;
char result;
cout<<"Enter Your Marks = ";
cin>>marks;
result=std_grade(marks);
cout<<"Your Grade Is "<<result;
}