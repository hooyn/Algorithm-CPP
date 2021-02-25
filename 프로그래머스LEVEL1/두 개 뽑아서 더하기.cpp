//정수 배열 numbers가 주어집니다. numbers에서 서로 다른 인덱스에 있는 두 개의 수를 뽑아 더해서 만들 수 있는
//모든 수를 배열에 오름차순으로 담아 return 하도록 solution 함수를 완성해주세요.
//제한사항

//numbers의 길이는 2 이상 100 이하입니다.
//numbers의 모든 수는 0 이상 100 이하입니다.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i=0;i<numbers.size();i++)
    {
        for(int j=i+1;j<numbers.size();j++)
        {
            int value=numbers[i]+numbers[j];
            answer.push_back(value);
        }
    }
    sort(answer.begin(),answer.end());
    answer.erase(unique(answer.begin(),answer.end()), answer.end());
    return answer;
}

/*테스트 1 〉	통과 (0.02ms, 3.71MB)
테스트 2 〉	통과 (0.02ms, 3.95MB)
테스트 3 〉	통과 (0.02ms, 3.96MB)
테스트 4 〉	통과 (0.02ms, 3.93MB)
테스트 5 〉	통과 (0.02ms, 3.96MB)
테스트 6 〉	통과 (0.02ms, 3.84MB)
테스트 7 〉	통과 (0.02ms, 3.95MB)
테스트 8 〉	통과 (0.03ms, 3.93MB)
테스트 9 〉	통과 (0.02ms, 3.93MB)
테스트 10 〉	통과 (0.02ms, 3.96MB)
테스트 11 〉	통과 (0.02ms, 3.95MB)
테스트 12 〉	통과 (0.02ms, 3.93MB)
테스트 13 〉	통과 (0.02ms, 3.95MB)
테스트 14 〉	통과 (0.02ms, 3.94MB)*/