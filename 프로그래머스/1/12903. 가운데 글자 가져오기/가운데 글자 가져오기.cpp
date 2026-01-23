#include <string>
using namespace std;

string solution(string s) {
    int n = (int)s.size();
    if (n % 2 == 1) return s.substr(n / 2, 1);
    else           return s.substr(n / 2 - 1, 2);
}