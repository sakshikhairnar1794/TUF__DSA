#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setZeroes(vector<vector<int>> &arr, int m, int n){
    int col[n] = {0};
    int row[m] = {0};


    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(row[i] ==1 || col[j] == 1){
            arr[i][j] = 0;
            }
        }
    }
    return arr;
}

int main(){
    int m, n;
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    setZeroes(arr, m , n);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}