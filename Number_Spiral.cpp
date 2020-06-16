/*
 * @Author: YUFENG CHEN  
 * @Date: 2020-06-16 21:36:17 
 * @Last Modified by: YUFENG CHEN, simple83815@hotmail.com
 * @Last Modified time: 2020-06-16 23:53:44
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int x, y;
        cin >> y >> x;
        ll z = max(y,x);
        ll z2 = (z-1)*(z-1);
        ll ans;
        if(z%2){
            if(z==y)
                ans = z2+x;
            else
                ans = z2+2*z-y;
        } else {
            if(z==x)
                ans = z2+y;
            else
                ans = z2+2*z-x;
        }
        cout << ans << "\n";
    }
    
}