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
//function to calculate a factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate the number of permutations
int calculatePermutations(int n, int r) {
    // P(n, r) = n! / (n-r)!
    return factorial(n) / factorial(n - r);
}
int main() {
    int n, r;
    cin >> n >> r;
    
    if (n > r) {
        cout << "Cannot adjust " << n << " people on " << r << " seats" << endl;
    } 
    else {
        int permutations = calculatePermutations(r, n);
        cout << permutations << endl;
    }
    return 0;
}
