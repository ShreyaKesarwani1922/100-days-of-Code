#include <iostream>
#include <string>
#include <climits>
using namespace std;

int reqmoves(int n, int m, const string& s, const string& k) {
    int minMoves = INT_MAX;

    for (int i = 0; i <= n - m; ++i) {
        int moves = 0;
        for (int j = 0; j < m; ++j) {
            int diff1 = (k[j] - s[i + j] + 10) % 10;
            int diff2 = (s[i + j] - k[j] + 10) % 10;
            moves += min(diff1, diff2);
        }
        minMoves = min(minMoves, moves);
    }

    return minMoves;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        string s, k;
        cin >> s >> k;

        int result = reqmoves(n, m, s, k);
        cout << result << endl;
    }

    return 0;
}