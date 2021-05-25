#include <iostream>
#include <string>
#include <stdlib.h>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MxN = 1e3;
int t;
ll g;
int A[501][501];
int B[501][501];
int p[MxN];

int M = 1e9+7;
ll answer;

int solve(){
    cin >> g;
    ll ans = 0;
    ll d = 1;
    while (d*(d+1) < 2*g){
        d++;
    }
    for (ll x = 1; x <= d; x++){
        if ((2*g)%x!=0){
             continue;
        }
        ll a =2*g/x-x+1;
        if ((a%2!=0) || (a<2)){
            continue;
        }
        ans++;   
    }

    return ans;
}

int main(){
    cin >> t ;
    for (int i = 0; i < t; i++){
        answer = solve();
        cout << "Case #" << i+1 <<": " << answer <<endl;
    }
    return 0;    
}
