#include <string>

using namespace std;

string solution(string phone_number) {
    int n = (int)phone_number.size();
    for (int i = 0; i < n - 4; i++) {
        phone_number[i] = '*';
    }
    return phone_number;
}