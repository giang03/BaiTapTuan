#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int n){
    string t = to_string(n);
    bool ok;
    int a = t[0] - '0', b = t.back() - '0';
    if(a * 2 == b || b * 2 == a){
        ok = 1;
    }
    else ok = 0;
    string res = t;
    reverse(res.begin() + 1, res.end() - 1);
    return (res == t && ok);
}

int main(){
    int n; cin >> n;
    bool ok = 1;
    for(int i = 100; i <= n; i++){
        if(check(i)){
            cout << i << ' ';
            ok = 0;
        }
    }
    if(ok) cout << "NOT FOUND" << endl;
    return 0;
}