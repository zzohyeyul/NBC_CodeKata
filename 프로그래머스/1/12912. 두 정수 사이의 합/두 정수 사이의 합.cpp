#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int a, int b) {
    long long lo = min(a, b);
    long long hi = max(a, b);

    long long n = hi - lo + 1;
    return n * (lo + hi) / 2;
}