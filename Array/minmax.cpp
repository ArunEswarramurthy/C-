#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {3, 7, 1, 9, 4, 2, 8};
    int n = 7;

int *max = max_element(arr,arr +n);
int *min = min_element(arr, arr+n);
cout<<min << " " << max;


    return 0;
}