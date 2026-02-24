#include <string>
#include <vector>
#include <cctype>
using namespace std;

int solution(string s) {
    vector<string> words = {
        "zero","one","two","three","four",
        "five","six","seven","eight","nine"
    };

    string out;
    for (int i = 0; i < (int)s.size(); ) {
        if (isdigit((unsigned char)s[i])) {
            out.push_back(s[i]);
            i++;
            continue;
        }

        for (int d = 0; d <= 9; d++) {
            const string &w = words[d];
            if (i + (int)w.size() <= (int)s.size() && s.compare(i, w.size(), w) == 0) {
                out.push_back(char('0' + d));
                i += (int)w.size();
                break;
            }
        }
    }
    return stoi(out);
}