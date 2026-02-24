#include <string>
using namespace std;

string solution(string s, int n) {
    n %= 26;
    for (char &c : s) {
        if (c == ' ') continue;

        if ('A' <= c && c <= 'Z') {
            c = char('A' + (c - 'A' + n) % 26);
        } else if ('a' <= c && c <= 'z') {
            c = char('a' + (c - 'a' + n) % 26);
        }
    }
    return s;
}