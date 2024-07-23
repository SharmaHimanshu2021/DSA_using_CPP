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
    int n1,n2,n3;
    char comma;
    cin>>n1>>comma>>n2>>comma>>n3;
    
    if(n1>n2){
        if(n1>n3){
            if(n2>n3){
                cout<<n2;
            }
            else{
                cout<<n3;
             }
        }
        else{
            cout<<n1;
        }
    }
    else{
        if(n2>n3){
            if(n1>n3){
                cout<<n1;
            }
            else{
                cout<<n3;
            }
        }
        else{
            cout<<n2;
        }
    }
   
    return 0;
}
