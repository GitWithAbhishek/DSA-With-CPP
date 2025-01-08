#include<iostream>
using namespace std;
int main(){
    cout<<"Binary Search In Nearly Sorted Array"<<endl;
    int arr[]={10,3,40,20,50,80,70};
    cout<<"Enter The Key Value To Be Searched ";
    int key;
    cin>>key;
    int start=0,end=6;
    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid-1]==key){
            cout<<"Found At "<<mid;
            break;
        } 
        else if(arr[mid]==key){
            cout<<"Found At "<<mid-1;
            break;
        }
        else if(arr[mid+1]==key){
            cout<<"Found At "<<mid+1;
            break;
        }
        else if(arr[mid]<key){
            start=mid+2;
        }
        else{
            end=mid-2;
        }
    }

}