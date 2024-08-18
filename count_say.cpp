//  count and say
#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n) {
    if (n == 1) {
        return "1";
    }
    string result = "";
    string prev = countAndSay(n - 1);
    int count = 1;
    for (int i = 0; i < prev.length(); i++) {
        if (i < prev.length() - 1 && prev[i] == prev[i + 1]) {
            count++;
        } else {
            result += to_string(count) + prev[i];
            count = 1;
        }
    }
    return result;
}

int main() {
    int n = 4;
    string result = countAndSay(n);
    cout << "countAndSay(" << n << ") = " << result << endl;
    return 0;
}