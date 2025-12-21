#include<bits/stdc++.h>
using namespace std;
int main(){
    int l , m , n;
    cin>> l >> m>> n;
    int arr[l][m][n];
    for(int i = 0 ; i < l ; i++){
        for(int j = 0 ; j < m ; j++){
            for(int k = 0 ; k<n ;k++){
               cin>>arr[i][j][k];
            }
        }
    }

cout << "3D Array:" << endl;
    for(int i = 0; i < l; i++) {
        cout << "\nBlock " << i << ":" << endl;
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < n; k++) {
                cout << arr[i][j][k] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}
//g++ array3.cpp -o array3