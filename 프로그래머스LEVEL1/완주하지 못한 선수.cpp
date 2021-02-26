//문제 설명
//수많은 마라톤 선수들이 마라톤에 참여하였습니다. 단 한 명의 선수를 제외하고는 모든 선수가 마라톤을 완주하였습니다.
//마라톤에 참여한 선수들의 이름이 담긴 배열 participant와 완주한 선수들의 이름이 담긴 배열 completion이 주어질 때, 
//완주하지 못한 선수의 이름을 return 하도록 solution 함수를 작성해주세요.
//제한사항
//마라톤 경기에 참여한 선수의 수는 1명 이상 100,000명 이하입니다.
//completion의 길이는 participant의 길이보다 1 작습니다.
//참가자의 이름은 1개 이상 20개 이하의 알파벳 소문자로 이루어져 있습니다.
//참가자 중에는 동명이인이 있을 수 있습니다.

//나의 풀이

#include <string>
#include <vector>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    bool b[] = {true};
    for(int i=0;i<participant.size();i++)
    {
        for(int j=0;j<completion.size();j++)
        {
            if(participant[i]==completion[j]&&b[j]==true)
            {
                completion[j]=false;
                break; 
            }
            else if(j==completion.size()-1&&participant[i]!=completion[j])
            {
                answer=participant[i];
            }                
            
        }
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.96MB)
테스트 2 〉	통과 (0.01ms, 3.95MB)
테스트 3 〉	통과 (0.68ms, 3.96MB)
테스트 4 〉	통과 (1.43ms, 3.96MB)
테스트 5 〉	통과 (1.41ms, 3.9MB)
효율성  테스트
테스트 1 〉	실패 (시간 초과)
테스트 2 〉	실패 (시간 초과)
테스트 3 〉	실패 (시간 초과)
테스트 4 〉	실패 (시간 초과)
테스트 5 〉	실패 (시간 초과)*/

/*-----------------------------------------------------------------------------------*/

//다른 풀이

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unsigned long int sizeP, sizeC;
    sizeP=participant.size();
    sizeC=sizeP-1;
    sort(participant.begin(),participant.end());
    sort(completion.begin(), completion.end());
    
    for(int i=0;i<sizeP;i++)
    {
        if(participant[i]!=completion[i])
        {
            answer=participant[i];
            break;
        }
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.83MB)
테스트 2 〉	통과 (0.01ms, 3.97MB)
테스트 3 〉	통과 (0.29ms, 3.92MB)
테스트 4 〉	통과 (0.57ms, 3.72MB)
테스트 5 〉	통과 (0.69ms, 3.98MB)
효율성  테스트
테스트 1 〉	통과 (33.09ms, 14.2MB)
테스트 2 〉	통과 (56.73ms, 19.7MB)
테스트 3 〉	통과 (70.17ms, 23.3MB)
테스트 4 〉	통과 (135.64ms, 25.4MB)
테스트 5 〉	통과 (69.80ms, 25.4MB)*/

/*-----------------------------------------------------------------------------------*/

//다른 풀이

#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_multiset<string> names;

    for(int i = 0; i < participant.size(); i++)
    {
        names.insert(participant[i]);
    }

    for(int i = 0; i < completion.size(); i++)
    {
        unordered_multiset<string>::iterator itr = names.find(completion[i]);
        names.erase(itr);
    }

    return *names.begin();
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.96MB)
테스트 2 〉	통과 (0.01ms, 3.95MB)
테스트 3 〉	통과 (0.17ms, 3.93MB)
테스트 4 〉	통과 (0.33ms, 3.95MB)
테스트 5 〉	통과 (0.34ms, 3.92MB)
효율성  테스트
테스트 1 〉	통과 (18.47ms, 18.2MB)
테스트 2 〉	통과 (28.50ms, 25.7MB)
테스트 3 〉	통과 (47.42ms, 30.5MB)
테스트 4 〉	통과 (54.65ms, 33.2MB)
테스트 5 〉	통과 (38.00ms, 33.2MB)*/