#include <vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> has(n + 1, 1);

    for (int x : lost) has[x]--;
    for (int x : reserve) has[x]++;

    for (int i = 1; i <= n; ++i) {
        if (has[i] == 0) {
            if (i - 1 >= 1 && has[i - 1] == 2) {
                has[i - 1]--;
                has[i]++;
            } else if (i + 1 <= n && has[i + 1] == 2) {
                has[i + 1]--;
                has[i]++;
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (has[i] >= 1) cnt++;
    }
    return cnt;
}