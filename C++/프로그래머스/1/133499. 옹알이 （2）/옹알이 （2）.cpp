#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
    vector<string> words = {"aya", "ye", "woo", "ma"};
    int answer = 0;

    for (const string& s : babbling) {
        int i = 0;
        int prev = -1;
        bool ok = true;

        while (i < (int)s.size()) {
            bool matched = false;

            for (int k = 0; k < 4; ++k) {
                const string& w = words[k];
                int len = (int)w.size();

                if (k == prev) continue;

                if (i + len <= (int)s.size() && s.compare(i, len, w) == 0) {
                    matched = true;
                    prev = k;
                    i += len;
                    break;
                }
            }

            if (!matched) {
                ok = false;
                break;
            }
        }

        if (ok) answer++;
    }

    return answer;
}