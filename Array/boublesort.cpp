
#include<bits/stdc++.h>
using namespace std;
void  bubblesort(int arr[],int n )
 {
for(int i =0 ;  i<n-1; i++){
bool swaping = false;
for( int j  = 0 ; j < i - i-n ;j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swaping = true;
    }
      
}
if(!swaping){
    break;
}
}
 }


int main(){

    int n ;
    cin>> n;
    int arr[n];
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }
 bubblesort(arr,n);
cout << "After sorting: ";


    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;

   

    return 0;
}