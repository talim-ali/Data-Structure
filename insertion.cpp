#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n;
    cout<<"enter the number of element:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pos;
    cout<<"enter the position where you want to insert:";
    cin>>pos;
    int value;
    cout<<"enter the value you want to insert:";
    cin>>value;
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}