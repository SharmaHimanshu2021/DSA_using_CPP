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
    string n;
    cin >> n;

    string result = "";

    for (char digit : n) {
        // Check if the digit is odd
        if ((digit - '0') % 2 != 0) {
            result += digit;
        }
    }

    if (result == "") {
        cout << 0 << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}#include <map>
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
    string n;
    cin >> n;

    string result = "";

    for (char digit : n) {
        // Check if the digit is odd
        if ((digit - '0') % 2 != 0) {
            result += digit;
        }
    }

    if (result == "") {
        cout << 0 << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
