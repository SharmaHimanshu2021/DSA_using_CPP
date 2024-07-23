#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int maxProfit(int price[],int n){
    if(n < 2)
        return 0;
    int minPrice = INT_MAX;
    int maxProfit = 0;
     for (int i = 0; i < n; i++){
         if(price[i]<minPrice){
             minPrice = price[i];
         }
         else if(price[i]-minPrice > maxProfit){
             maxProfit = price[i] - minPrice;
         }
     }
    return maxProfit;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int n;
     cin >> n;
    int price[n];
    
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    cout << maxProfit(price, n) << endl;
    return 0;
}
