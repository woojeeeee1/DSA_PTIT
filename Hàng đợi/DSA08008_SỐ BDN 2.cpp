#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        queue<string> q;
        q.push("1");        
        while(1){
            string top = q.front(); q.pop();
            ll x = stoll(top);
            if(x % n == 0){
                cout << x << endl;
                break;
            }
            q.push(top + "0");
            q.push(top + "1");
        }
    }
}
/*

*/