#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;  // 마지막 자릿수 더하기
        n /= 10;        // 한 자리 제거
    }

    return sum;
}