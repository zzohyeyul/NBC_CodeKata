#include <vector>
using namespace std;

int solution(vector<int> a, vector<int> b) {
    int sum = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        sum += a[i] * b[i];
    }
    return sum;
}