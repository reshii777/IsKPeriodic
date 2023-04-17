#include <iostream>
#include <string>

using namespace std;

bool IsKPeriodic(const string& str, int k) {
    if (str.length() % k != 0) {
        // Если длина строки не кратна K, то она не может быть K-периодической
        return false;
    }
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != str[i % k]) {
            // Если символы не равны, то строка не является K-периодической
            return false;
        }
    }
    // Если все символы равны, то строка является K-периодической
    return true;
}

int main() {
    string str1 = "abcabcabc";
    int k1 = 3;
    cout << str1 << " is " << (IsKPeriodic(str1, k1) ? "" : "not ") << "K-periodic" << endl;

    string str2 = "abcab";
    int k2 = 3;
    cout << str2 << " is " << (IsKPeriodic(str2, k2) ? "" : "not ") << "K-periodic" << endl;

    string str3 = "aaa";
    int k3 = 2;
    cout << str3 << " is " << (IsKPeriodic(str3, k3) ? "" : "not ") << "K-periodic" << endl;

    return 0;
}
