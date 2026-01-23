#include <cmath>
using namespace std;

long long solution(long long n) {
    long long x = (long long) sqrt((long double)n);

    while (x * x < n) x++;
    while (x * x > n) x--;

    if (x * x == n) {
        long long y = x + 1;
        return y * y;
    }
    return -1;
}
