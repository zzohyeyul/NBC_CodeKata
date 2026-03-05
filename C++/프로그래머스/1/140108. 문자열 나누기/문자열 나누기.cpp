#include <string>
using namespace std;

int solution(string s) {
    int answer = 0;
    char x = 0;
    int cx = 0, co = 0;

    for (char c : s) {
        if (cx == 0 && co == 0) {
            x = c;
            cx = 1;
            continue;
        }

        if (c == x) cx++;
        else co++;

        if (cx == co) {
            answer++;
            cx = 0;
            co = 0;
        }
    }

    if (cx != 0 || co != 0) answer++;
    return answer;
}