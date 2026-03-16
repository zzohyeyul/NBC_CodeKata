#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) 
{
    string answer = "";

    for(char c : s)
    {
        char cur = c;
        int cnt = 0;

        while(cnt < index)
        {
            cur++;

            if(cur > 'z')
                cur = 'a';

            if(skip.find(cur) != string::npos)
                continue;

            cnt++;
        }

        answer += cur;
    }

    return answer;
}