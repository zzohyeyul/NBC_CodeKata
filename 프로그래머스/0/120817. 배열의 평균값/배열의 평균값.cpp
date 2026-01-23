#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    int sum = 0;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }

    return static_cast<double>(sum) / numbers.size();
}