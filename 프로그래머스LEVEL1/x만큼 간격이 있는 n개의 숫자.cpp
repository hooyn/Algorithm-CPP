//문제 설명
//함수 solution은 정수 x와 자연수 n을 입력 받아, x부터 시작해 
//x씩 증가하는 숫자를 n개 지니는 리스트를 리턴해야 합니다. 
//다음 제한 조건을 보고, 조건을 만족하는 함수, solution을 완성해주세요.

//제한 조건
//x는 -10000000 이상, 10000000 이하인 정수입니다.
//n은 1000 이하인 자연수입니다.

#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int num = 0;
    int i = x;
    while(num<n){
        answer.push_back(i);
        i = i+x;
        num++;
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.96MB)
테스트 2 〉	통과 (0.05ms, 3.89MB)
테스트 3 〉	통과 (0.11ms, 3.9MB)
테스트 4 〉	통과 (0.11ms, 3.93MB)
테스트 5 〉	통과 (0.10ms, 3.77MB)
테스트 6 〉	통과 (0.03ms, 3.96MB)
테스트 7 〉	통과 (0.17ms, 3.94MB)
테스트 8 〉	통과 (0.08ms, 3.89MB)
테스트 9 〉	통과 (0.21ms, 3.94MB)
테스트 10 〉통과 (0.01ms, 3.96MB)
테스트 11 〉통과 (0.11ms, 3.95MB)
테스트 12 〉통과 (0.25ms, 3.94MB)
테스트 13 〉통과 (0.23ms, 3.96MB)
테스트 14 〉통과 (0.23ms, 3.96MB)*/

<다른 풀이>
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer(n, x); //리스트 개수와 초기값 설정

    for (int i = 1; i < n; i++)
        answer[i] = answer[i - 1] + x; //x만큼 증감되는 리스트 값 설정

    return answer;
}