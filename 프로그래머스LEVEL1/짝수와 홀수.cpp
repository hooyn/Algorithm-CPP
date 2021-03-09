//문제 설명
//정수 num이 짝수일 경우 Even을 반환하고 홀수인 경우 
//Odd를 반환하는 함수, solution을 완성해주세요.

//제한 조건
//num은 int 범위의 정수입니다.
//0은 짝수입니다.

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if(num%2==0)
        return answer="Even";
    else
        return answer="Odd";
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.95MB)
테스트 2 〉	통과 (0.01ms, 3.94MB)
테스트 3 〉	통과 (0.01ms, 3.93MB)
테스트 4 〉	통과 (0.01ms, 3.95MB)
테스트 5 〉	통과 (0.01ms, 3.94MB)
테스트 6 〉	통과 (0.01ms, 3.95MB)
테스트 7 〉	통과 (0.01ms, 3.96MB)
테스트 8 〉	통과 (0.01ms, 3.93MB)
테스트 9 〉	통과 (0.01ms, 3.94MB)
테스트 10 〉통과 (0.01ms, 3.95MB)
테스트 11 〉통과 (0.01ms, 3.96MB)
테스트 12 〉통과 (0.01ms, 3.95MB)
테스트 13 〉통과 (0.01ms, 3.93MB)
테스트 14 〉통과 (0.01ms, 3.95MB)
테스트 15 〉통과 (0.01ms, 3.96MB)
테스트 16 〉통과 (0.01ms, 3.95MB)*/