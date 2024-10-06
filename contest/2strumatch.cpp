#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    
    int n1 = S.length();
    int n2 = T.length();
    
    for (int i = 0; i < min(n1, n2); i++) {
        if (S[i] != T[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    if (n1 != n2) {
        cout << min(n1, n2) + 1 << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}
