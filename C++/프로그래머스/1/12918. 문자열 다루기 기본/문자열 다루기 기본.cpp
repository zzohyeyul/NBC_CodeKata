#include <string>
#include <cctype>
using namespace std;

bool solution(string s) {
    int n = (int)s.size();
    if (!(n == 4 || n == 6)) return false;

    for (char c : s) {
        if (!isdigit((unsigned char)c)) return false;
    }
    return true;
}