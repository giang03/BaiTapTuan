#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int binary_search(int a[],int n,int i ,int j,int x){
    int l = 0, r = n-1;
    int pos = -1;
    while(l < r){
        int m = (l+r)/2;
        if(a[m] > x && m != i && m != j){
            pos = m;
            r--;
        }
        else if(a[m] > x && (m == i || m == j)){
            r--;
        }
        else l++;
    }
    return pos;
}

int main(){
    int n,s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    int cnt = 0;
    itn i = 0, j = n-1;
    while(i < j){
        int tmp = a[i] + a[j];
        int x = binary_search(a,n,i,j,s-tmp);
        if(x != -1 && a[x] + tmp > s){
            cnt += n - x;
            if(x < j) cnt--;
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}