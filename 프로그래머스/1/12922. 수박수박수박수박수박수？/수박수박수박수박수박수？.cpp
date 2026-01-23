#include <string>
using namespace std;

string solution(int n) {
    string answer;
    answer.reserve(n);
    for (int i = 0; i < n; i++) {
        answer += (i % 2 == 0) ? "수" : "박";
    }
    return answer;
}