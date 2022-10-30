#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,s; cin >> n >> s;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            sum1 += a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = n-1; j > i; j--){
            sum2 += a[i][j];
        }
    }
    if(abs(sum1-sum2) <= s){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}