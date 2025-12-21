#include<bits/stdc++.h>
using namespace std;
int main(){
     int k ;
     cout<<"Enter the size of array"<<endl;
     cin>> k ;
     int arr[k];
     cout<<"Enter the Value of array"<<endl;
     for(int i = 0 ;  i <k ; i++){
        cin>> arr[i];
     }
     cout<< endl;

cout<<"Enter the values are  of array"<<endl;
       for(int i = 0 ;  i <k ; i++){
        cout<<  arr[i] << " ";
     }
          cout<< endl;

     cout<<"Enter the Sorting are  of array"<<endl;


     sort(arr,arr+k);
     for(int i = 0 ;  i <k ; i++){
        cout<< arr[i] << " ";
     }
     cout<< endl;
      sort(arr,arr+k ,greater<int>());
           cout<<"Enter the Decenting are  of array"<<endl;

     for(int i = 0 ;  i <k ; i++){
        cout<< arr[i] << " ";
     }
     cout<< endl;
    return 0;
}