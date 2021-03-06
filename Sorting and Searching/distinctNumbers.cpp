#include <bits/stdc++.h> 
using namespace std; 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define ll long long 
#define ld long double 
#define le length
#define rep(i , j , n) for(ll i = j ; i <= n ; i++) 
#define per(i , j , n) for(ll i = j ; i >= n ; i--)  

int main() { 
    SPEED; 
    cout.precision(8); 
    cout << fixed;
    
    ll n, distinctsCounter = 0;
    cin >> n;
    vector<ll> numbersCounter(n, 0);
    for (ll i = 0; i < n ; i++) {
        cin >> numbersCounter[i];
    }
    sort(numbersCounter.begin(), numbersCounter.end());
    ll lastNumber = 0;
    for (ll i = 0; i < n; i++) {
        if (numbersCounter[i] != lastNumber) {
            lastNumber = numbersCounter[i];
            distinctsCounter++;
        }
    }
    cout << distinctsCounter;
 
    return 0; 
}  