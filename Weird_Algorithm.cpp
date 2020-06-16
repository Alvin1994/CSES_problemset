/*
 * @Author: YUFENG CHEN  
 * @Date: 2020-06-16 21:36:09 
 * @Last Modified by:   YUFENG CHEN, simple83815@hotmail.com 
 * @Last Modified time: 2020-06-16 21:36:09 
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    cout << n;
    while(n>1){
        if(n%2==0)
            n /= 2;
        else
            n = 3*n+1;;
        cout << " " << n;
    }   
}