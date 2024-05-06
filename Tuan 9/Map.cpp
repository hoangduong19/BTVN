#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, long int> directory;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string key;
        long int value;
        cin >> key >> value;
        directory[key] = value;
    }

    string query;
    while (cin >> query) {
        if (directory.find(query) != directory.end()) {
            cout << query << "=" << directory[query] << "\n";
        }
        else {
            cout << "Not found" << "\n";
        }
    }

    return 0;
}
