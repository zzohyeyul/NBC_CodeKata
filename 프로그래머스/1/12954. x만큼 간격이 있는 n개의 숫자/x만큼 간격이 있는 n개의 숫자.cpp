#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> ans;
    ans.reserve(n);

    long long step = x;
    for (int i = 1; i <= n; i++) {
        ans.push_back(step * i);
    }
    return ans;
}