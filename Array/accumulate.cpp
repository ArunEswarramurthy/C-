#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int sum = accumulate(arr,arr + n, 0);
    cout<<sum << endl;
    int product = accumulate(arr,arr+n,1,multiplies<int>());
    cout<<product << endl;
 
        return 0;
}