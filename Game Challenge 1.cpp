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
    int n;
    cin>>n;
    int maxlead = 0;
    int winner = 0;
    int cumulativePlayer1 = 0;
    int cumulativePlayer2 = 0;
    for(int i=0; i<n; i++){
        int Si, Ti;
        cin>>Si>>Ti;
        
        cumulativePlayer1 +=Si;
        cumulativePlayer2 +=Ti;
        
        int currentLead = abs(cumulativePlayer1 - cumulativePlayer2);
        int currentLeader = (cumulativePlayer1 >  cumulativePlayer2) ? 1 : 2;
        
        if(currentLead > maxlead){
            maxlead = currentLead;
            winner = currentLeader;
        }
    }
    
    cout<<winner<<" "<<maxlead<<endl;
    return 0;
}
