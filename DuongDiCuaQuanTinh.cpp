#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair <int,int> path[4] = {{-1,-1}, {-1,1} ,{1,-1}, {1,1}};

int n; 
int a[101][101];
int cnt = 1;


void Try(int i, int j){
    a[i][j] = 1;
    for(int l = 0; l < 4; l++){
        int x = i + path[l].first;
        int y = j + path[l].second;
        if(a[x][y] == 0 && x > 0 && x <= n && y > 0 && y <= n){
            cnt++;
            Try(x,y);
        }
    }
}

int main(){
    int s,t;
    cin >> n >> s >> t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    Try(s,t);
    cout << cnt << endl;
    return 0;
}