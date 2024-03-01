#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    str1.erase(remove_if(str1.begin(), str1.end(), ::isspace), str1.end());
    str2.erase(remove_if(str2.begin(), str2.end(), ::isspace), str2.end());

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2) {
        cout << "Anagram";
    } else {
        cout << "Not Anagram";
    }

    return 0;
}