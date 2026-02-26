#include <string>
#include <vector>
using namespace std;

string solution(vector<int> food) {
    string left;
    for (int i = 1; i < (int)food.size(); i++) {
        int cnt = food[i] / 2;
        left.append(cnt, char('0' + i));
    }

    string right(left.rbegin(), left.rend());
    return left + "0" + right;
}