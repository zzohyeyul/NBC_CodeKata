#include <string>
#include <vector>
using namespace std;

string solution(string X, string Y) {
    int cntX[10] = {0}, cntY[10] = {0};

    for (char c : X) cntX[c - '0']++;
    for (char c : Y) cntY[c - '0']++;

    string ans;
    ans.reserve(min(X.size(), Y.size()));

    for (int d = 9; d >= 0; --d) {
        int k = min(cntX[d], cntY[d]);
        ans.append(k, char('0' + d));
    }

    if (ans.empty()) return "-1";
    if (ans[0] == '0') return "0";
    return ans;
}