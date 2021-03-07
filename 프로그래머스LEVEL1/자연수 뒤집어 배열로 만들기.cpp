//문제 설명
//자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 
//리턴해주세요. 예를들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다.

//제한 조건
//n은 10,000,000,000이하인 자연수입니다.

#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int num;
    while(n!=0){
        num=n%10;
        answer.push_back(num);
        n=n/10;
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.95MB)
테스트 2 〉	통과 (0.01ms, 3.94MB)
테스트 3 〉	통과 (0.01ms, 3.93MB)
테스트 4 〉	통과 (0.01ms, 3.9MB)
테스트 5 〉	통과 (0.01ms, 3.96MB)
테스트 6 〉	통과 (0.01ms, 3.93MB)
테스트 7 〉	통과 (0.01ms, 3.96MB)
테스트 8 〉	통과 (0.01ms, 3.94MB)
테스트 9 〉	통과 (0.01ms, 3.89MB)
테스트 10 〉통과 (0.01ms, 3.95MB)
테스트 11 〉통과 (0.01ms, 3.94MB)
테스트 12 〉통과 (0.01ms, 3.95MB)
테스트 13 〉통과 (0.01ms, 3.95MB)*/