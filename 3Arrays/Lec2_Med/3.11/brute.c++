#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &arr, int row){
    int n = arr[0].size();

    for(int j = 0; j < n; j++){
        if(arr[row][j] != 0){
            arr[row][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &arr, int col){
    int m = arr.size();

    for(int i = 0; i < m; i++){
        if(arr[i][col] != 0){
            arr[i][col] = -1;
        }
    }
}

void setZeroes(vector<vector<int>> &arr){
    int m = arr.size();
    int n = arr[0].size();

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0){
                markRow(arr, i);
                markCol(arr, j);
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }
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

    setZeroes(arr);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}