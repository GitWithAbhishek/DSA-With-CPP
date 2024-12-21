#include<iostream>
using namespace std;
int main(){
    cout<<"Hallow Reactangle"<<endl;
    int length,breadth;
    cout<<"Enter the length -> ";
    cin>>length;
    cout<<"Enter the breadth -> ";
    cin>>breadth;
    for(int i=0;i<breadth;i++){
        if(i==0||i==breadth-1){
           for(int j=0;j<length;j++){
            cout<<"* ";
           }
        }
        else{
            cout<<"* ";
            for(int j=0;j<length-2;j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}