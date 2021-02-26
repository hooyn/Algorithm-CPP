//문제 설명
//초 단위로 기록된 주식가격이 담긴 배열 prices가 매개변수로 주어질 때, 가격이 떨어지지 않은 기간은 몇 초인지를 
//return 하도록 solution 함수를 완성하세요.
//제한사항
//prices의 각 가격은 1 이상 10,000 이하인 자연수입니다.
//prices의 길이는 2 이상 100,000 이하입니다.

#include <string>
#include <vector>

using namespace std;
    
vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for(int i=0;i<prices.size();i++)
    {
        int count=0;
        for(int j=i;j<prices.size();j++)
        {
            if(prices[i]>prices[j])
            {
                answer.push_back(count);
                break;
            }
            else if(j==prices.size()-1)
            {
                answer.push_back(count);
                break;
            }
            count++;
        }
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.94MB)
테스트 2 〉	통과 (0.03ms, 3.96MB)
테스트 3 〉	통과 (0.17ms, 3.96MB)
테스트 4 〉	통과 (0.21ms, 3.97MB)
테스트 5 〉	통과 (0.23ms, 3.95MB)
테스트 6 〉	통과 (0.02ms, 3.94MB)
테스트 7 〉	통과 (0.13ms, 3.93MB)
테스트 8 〉	통과 (0.15ms, 3.94MB)
테스트 9 〉	통과 (0.02ms, 3.95MB)
테스트 10 〉통과 (0.22ms, 3.94MB)
효율성  테스트
테스트 1 〉	통과 (26.52ms, 24.4MB)
테스트 2 〉	통과 (19.21ms, 18.8MB)
테스트 3 〉	통과 (29.93ms, 26.7MB)
테스트 4 〉	통과 (22.36ms, 21.4MB)
테스트 5 〉	통과 (14.91ms, 16.3MB)*/