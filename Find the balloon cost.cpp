#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int cost1,cost2,t,n,q1,q2,count1=0,count2=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>cost1>>cost2;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>q1>>q2;
            if(q1 ==1){
                count1++;
            }
            if(q2==1){
                count2++;
            }
        }
        cout<<std::max(count1,count2)*std::min(cost1,cost2) + std::min(count1,count2)*std::max(cost1,cost2)<<endl;
        count1=0,count2=0;
    }
   
    return 0;
}
