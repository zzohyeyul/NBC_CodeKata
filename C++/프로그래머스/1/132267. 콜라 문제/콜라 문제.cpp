#include <string>
#include <vector>
using namespace std;

int solution(int a, int b, int n) {
    long long total = 0;

    while (n >= a) {
        int q = n / a;
        total += 1LL * q * b;
        n = q * b + (n % a);
    }

    return (int)total;
}