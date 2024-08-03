#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> obj;
    obj[1001] = "abc";
    obj[1002] = "def";

    for(int i = 0; i < 5; i++) {
        int roll;
        string name;
        cout << "Enter roll no.: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        obj[roll] = name;
    }

    for(auto i = obj.begin(); i != obj.end(); i++) {
        cout << i->first << " " << i->second << endl;
    }

    return 0;
}
