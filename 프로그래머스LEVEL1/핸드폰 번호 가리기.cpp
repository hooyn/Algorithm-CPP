//문제 설명
//프로그래머스 모바일은 개인정보 보호를 위해 고지서를 보낼 때 
//고객들의 전화번호의 일부를 가립니다.
//전화번호가 문자열 phone_number로 주어졌을 때, 
//전화번호의 뒷 4자리를 제외한 나머지 숫자를 전부 *으로 가린 문자열을 
//리턴하는 함수, solution을 완성해주세요.

//제한 조건
//s는 길이 4 이상, 20이하인 문자열입니다.

#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int size = phone_number.size();
    for(int i = 0 ; i < size-4 ; i++)
    {
        phone_number[i]='*';
    }
    answer=phone_number;
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.92MB)
테스트 2 〉	통과 (0.01ms, 3.98MB)
테스트 3 〉	통과 (0.01ms, 3.98MB)
테스트 4 〉	통과 (0.01ms, 3.96MB)
테스트 5 〉	통과 (0.01ms, 3.96MB)
테스트 6 〉	통과 (0.01ms, 3.98MB)
테스트 7 〉	통과 (0.01ms, 3.84MB)
테스트 8 〉	통과 (0.01ms, 3.98MB)
테스트 9 〉	통과 (0.01ms, 3.97MB)
테스트 10 〉통과 (0.01ms, 3.98MB)
테스트 11 〉통과 (0.01ms, 3.98MB)
테스트 12 〉통과 (0.01ms, 3.91MB)
테스트 13 〉통과 (0.01ms, 3.96MB)*/