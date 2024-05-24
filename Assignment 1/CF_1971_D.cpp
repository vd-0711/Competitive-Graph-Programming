#include <bits/stdc++.h>
using namespace std;

int binaryCuts(string s) {
    int n = s.length();
    vector<int> arr(n + 1, INT_MAX);
    int ct = 0;
    for (int i = 0; i <n; ++i) {
        if (s[i] == '1' && s[i+1] =='0') {
                ct++;
            }
        }
    return ct;
}

int main() {
    string s;
    int t;
    cin >> t ;
    while(t--){
        cin >> s ;
        int result = binaryCuts(s);
        cout << result +1 << endl;
    }
    return 0;
}
