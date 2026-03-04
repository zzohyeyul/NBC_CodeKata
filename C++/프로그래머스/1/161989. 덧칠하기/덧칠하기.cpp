#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int paintedEnd = 0;

    for (int x : section)
    {
        if (x > paintedEnd)
        {
            answer++;
            paintedEnd = x + m - 1;
        }
    }
    return answer;
}