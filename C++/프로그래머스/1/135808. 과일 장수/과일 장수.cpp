#include <bits/stdc++.h>
using namespace std;

long long solution(int k, int m, vector<int> score) {
    vector<int> cnt(k + 1, 0);
    for (int s : score) cnt[s]++;

    long long profit = 0;
    int boxSize = 0;

    for (int s = k; s >= 1; --s) {
        int c = cnt[s];
        while (c--) {
            boxSize++;
            if (boxSize == m) {
                profit += 1LL * s * m;
                boxSize = 0;
            }
        }
    }
    return profit;
}