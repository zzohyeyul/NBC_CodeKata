#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    bool seen[10] = {false};

    for (int x : numbers) seen[x] = true;

    int sum = 0;
    for (int d = 0; d <= 9; d++) {
        if (!seen[d]) sum += d;
    }
    return sum;
}