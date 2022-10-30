#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    map <int,int> ma;
    int res = 0;
    while(n--){
        int x ; cin >> x;
        ma[x]++;
        res = max(res,ma[x]);
    }
    for(auto x : ma){
        if(x.second == res){
            cout << x.first << ' ';
        }
    }
    return 0;
}