#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
    
    unordered_map<int, int> mp;

 

    for(int i = 0; i < n; i++){

 

        mp[arr[i]]++;

    }

    int ans = -1;

 

    for(auto ele : mp){

        if (ele.second > n / 2) {

          ans = ele.first;
        }
    }
    return ans;
}
