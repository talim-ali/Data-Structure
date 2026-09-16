#include <iostream>
using namespace std;
int main() {
    int arr[]={10,12,15,25,37,56,63};
     int n=7;
    int st=0;
    int end=n-1;
    int target=56;
     while(st<=end){
      int mid=st+(end-st)/2;
         if(arr[mid]<target){
             st=mid+1;
         }else if(arr[mid]>target){
             end=end-1;
         }else{
          cout<<"target is found at indices:"<<mid; 
             break;
         }
     }
    return 0;
}