/*
 * @Author: YUFENG CHEN  
 * @Date: 2020-06-16 21:36:17 
 * @Last Modified by: YUFENG CHEN, simple83815@hotmail.com
 * @Last Modified time: 2020-06-16 21:49:34
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    string s;
    cin >> s;
    int ans=1, c=0;
    char l='A';
    for(char d : s){
        if(d==l){
            ++c;
            ans = max(ans, c);
        } else{
            l=d;
            c=1;
        }
    }
    cout << ans;
}