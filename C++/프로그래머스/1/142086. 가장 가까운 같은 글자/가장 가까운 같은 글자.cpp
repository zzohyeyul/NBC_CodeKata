#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
    vector<int> ans;
    ans.reserve(s.size());

    vector<int> last(26, -1);

    for (int i = 0; i < (int)s.size(); i++) {
        int c = s[i] - 'a';
        if (last[c] == -1) ans.push_back(-1);
        else ans.push_back(i - last[c]);
        last[c] = i;
    }
    return ans;
}