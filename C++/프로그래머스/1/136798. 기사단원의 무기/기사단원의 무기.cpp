#include <vector>
using namespace std;

int solution(int number, int limit, int power) {
    vector<int> divCnt(number + 1, 0);

    for (int i = 1; i <= number; ++i) {
        for (int j = i; j <= number; j += i) {
            divCnt[j]++;
        }
    }

    long long sum = 0;
    for (int i = 1; i <= number; ++i) {
        sum += (divCnt[i] > limit) ? power : divCnt[i];
    }

    return (int)sum;
}