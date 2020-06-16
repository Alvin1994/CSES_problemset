/*
 * @Author: YUFENG CHEN  
 * @Date: 2020-06-16 21:36:17 
 * @Last Modified by: YUFENG CHEN, simple83815@hotmail.com
 * @Last Modified time: 2020-06-16 21:40:05
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, s=0;
    cin >> n;

    for(int i=1; i<n; ++i){
        int a;
        cin >> a;
        s += a;
    }
    cout << n*(1+n)/2-s;
}