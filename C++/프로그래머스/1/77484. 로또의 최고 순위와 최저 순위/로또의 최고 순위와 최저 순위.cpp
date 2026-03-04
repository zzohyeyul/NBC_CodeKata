#include <vector>
#include <unordered_set>
using namespace std;

static int toRank(int cnt) {
    if (cnt <= 1) return 6;
    return 7 - cnt; // 2->5, 3->4, 4->3, 5->2, 6->1
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    unordered_set<int> win(win_nums.begin(), win_nums.end());

    int zero = 0;
    int match = 0;

    for (int x : lottos) {
        if (x == 0) {
            zero++;
        } else if (win.count(x)) {
            match++;
        }
    }

    int best = toRank(match + zero);
    int worst = toRank(match);

    return {best, worst};
}