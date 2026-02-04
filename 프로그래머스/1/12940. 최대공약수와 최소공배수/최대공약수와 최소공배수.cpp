#include <string>
#include <vector>

using namespace std;

static int GCD(int a, int b)
{
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

vector<int> solution(int n, int m) {
    int g = GCD(n, m);

    long long l = (static_cast<long long>(n) / g) * m;
    return { g, static_cast<int>(l) };
}