#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n , int target){
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;  
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
    int result = linearsearch(arr,n,target);
    if(result != -1){
        cout<< "Found ! "<< result << endl;
    } else{
                cout<< "Found not "<< result << endl;

    }

    return 0;
}