#include <cmath>
using namespace std;

int solution(int left, int right) {
    int ans = 0;
    for (int x = left; x <= right; x++) {
        int r = (int)sqrt(x);
        if (r * r == x) ans -= x;
        else            ans += x;
    }
    return ans;
}