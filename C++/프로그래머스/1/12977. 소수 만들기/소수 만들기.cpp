#include <vector>
using namespace std;

static bool isPrime(int x) {
    if (x < 2) return false;
    for (int d = 2; d * d <= x; ++d) {
        if (x % d == 0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int n = (int)nums.size();
    int cnt = 0;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (isPrime(sum)) cnt++;
            }
        }
    }
    return cnt;
}