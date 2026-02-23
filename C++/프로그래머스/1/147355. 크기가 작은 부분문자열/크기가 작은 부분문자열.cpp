#include <string>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = p.length();
    
    long long target = stoll(p);
    
    for (int i = 0; i <= t.length() - len; i++) {
        string sub = t.substr(i, len);
        long long value = stoll(sub);
        
        if (value <= target) {
            answer++;
        }
    }
    
    return answer;
}