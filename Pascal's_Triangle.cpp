#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ob(n);
  for(int i=0; i<n; i++){
    for (int j=0; j<=i; j++) {
      if (j==0 || i==j)
         ob[i].push_back(1);
       else{
         int s = ob[i-1][j] + ob[i-1][j-1];
         ob[i].push_back(s);
       }  
    }
  }
  return ob;
}
