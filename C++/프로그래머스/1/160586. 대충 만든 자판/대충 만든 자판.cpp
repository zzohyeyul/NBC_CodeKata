#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    vector<int> minPress(26, 1e9);
    
    for (const string& key : keymap) {
        for (int i = 0; i < key.size(); i++) {
            int idx = key[i] - 'A';
            minPress[idx] = min(minPress[idx], i + 1);
        }
    }
    
    for (const string& target : targets) {
        int sum = 0;
        bool possible = true;
        
        for (char ch : target) {
            int idx = ch - 'A';
            
            if (minPress[idx] == 1e9) {
                possible = false;
                break;
            }
            
            sum += minPress[idx];
        }
        
        if (possible) answer.push_back(sum);
        else answer.push_back(-1);
    }
    
    return answer;
}