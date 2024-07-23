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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int r,c,val,cnt=0,lMax=0,gMax=0,R;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>val;
            if(val ==1){
                cnt++;
            }
        }
        lMax = max(lMax,cnt);
        if (lMax > gMax){
            gMax = lMax;
            R = i+1;
        } 
        cnt=0;
    }
    cout<<R;
    return 0;
}
