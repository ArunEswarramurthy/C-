
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n , int target)
 {
    int left = 0 ;
    int right = n-1;
    while(left<=right){
        int mid = left + (right-left);
            if(arr[mid]==target){
                return mid;
            }
        else if(arr[mid]<target){
            left = mid+1;
        }
        else{
            right = mid -1;
        }
        
    }
    return -1;
 }


int main(){

    int n ;
    cin>> n;
    int arr[n];
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }
int target = 22;


    int result = binarysearch(arr,n,target);
    if(result != -1){
        cout<< "Found ! "<< arr[result] << endl;
    } else{
                cout<< "Found not "<< result << endl;

    }

    return 0;
}