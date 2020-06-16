/*
 * @Author: YUFENG CHEN  
 * @Date: 2020-06-16 21:36:17 
 * @Last Modified by: YUFENG CHEN, simple83815@hotmail.com
 * @Last Modified time: 2020-06-16 22:19:18
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    
    if(n==1){
        cout << 1;
        return 0;
    }
    if(n==2||n==3){
        cout << "NO SOLUTION";
        return 0;
    }
    // 2 4 1 3 5
    for(int i=2; i<=n; i+=2){
        cout << i <<" ";
    }
    for(int i=1; i<=n; i+=2){
        cout << i << " ";
    }
    return 0;
}