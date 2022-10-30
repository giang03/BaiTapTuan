#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n; 
int a[101][101];
int res = 0, sum = 0;


void Try(int i, int j){
    if(i == n - 1){
        res = max(res,sum);
        return;
    }
    for(int l = -1; l <= 1; l++){
        if(j + l >= 0 && j + l < n){
            sum += a[i+1][l+j];
            Try(i+1,j+l);
            sum -= a[i+1][j+l];
        }
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    for(int i = 0; i < n; i++){
        sum = a[0][i];
        Try(0,i);
    }
    cout << res << endl;
    return 0;
}