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
const int MAX_T = 100; 

int main() {
    int T;
    cin >> T; 

    int entering[MAX_T];
    int leaving[MAX_T];
    for (int i = 0; i < T; ++i) {
        cin >> entering[i];
    }
    for (int i = 0; i < T; ++i) {
        cin >> leaving[i];
    }
    int cumulative[MAX_T];
    cumulative[0] = entering[0] - leaving[0];
    for (int i = 1; i < T; ++i) {
        cumulative[i] = cumulative[i - 1] + entering[i] - leaving[i];
    }
    int maxStudents = cumulative[0];
    for (int i = 1; i < T; ++i) {
        maxStudents = max(maxStudents, cumulative[i]);
    }

    cout << maxStudents <<endl;

    return 0;
}
