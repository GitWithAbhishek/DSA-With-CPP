#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int m=4,n=4;
    int target,flag=-1;
    cout<<"Enter The Target Value ";
    cin>>target;
    int total_len=m*n;
    int start=0,end=total_len-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        int row_index=mid/n;
        int col_index=mid%n;
        if(arr[row_index][col_index]==target){
            cout<<"Found At Row "<<row_index+1<<" Column "<<col_index+1;
            flag=1;
            break;
        }
        else if(arr[row_index][col_index]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    if(flag==-1){
        cout<<"Element Doesn't Exist";
    }


}