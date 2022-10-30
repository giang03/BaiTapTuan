#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool fibo[1000001];

void sangfibo(){
    int f1 = 1, f2 = 1, fn;
    fibo[1] = 1;
    for(int i = 0; i < 20; i++){
        fn = f1 + f2;
        fibo[fn] = 1;
        f1 = f2;
        f2 = fn;
    }
}

int tn(int n){
    int tmp = n;
    int res = 0,sum = 0;
    bool ck = 0;
    while(n){
        if(n%10 == 8 || n%10 == 2){
            ck = 1;
        }
        sum += n%10;
        res = res *10 + n%10;
        n/=10;
    }
    if (res == tmp && ck == 1){
        return sum;
    }
    return 0;
}

int main(){
    sangfibo();
    int n; cin >> n;
    bool ok = 1;
    for(int i = 1; i <= n; i++){
        if(fibo[tn(i)] && tn(i)){
            cout << i << ' ';
            ok = 0;
        }
    }
    if(ok) cout << "NOT FOUND" << endl;
    return 0;
}