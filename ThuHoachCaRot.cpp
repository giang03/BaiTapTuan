#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a[1001][1001];
int pre[1001][1001];

int main(){
    int n,m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];
        }
    }
    int q; cin >> q;
    while(q--){
        int x1,x2,y1,y2;
        cin >> x1 >> x2 >> y1 >> y2;
        ll tmp = pre[x2][y2] - pre[x1-1][y2] - pre[x2][y1-1] + pre[x1-1][y1-1];
        cout << tmp << endl;
    }
    return 0;
}