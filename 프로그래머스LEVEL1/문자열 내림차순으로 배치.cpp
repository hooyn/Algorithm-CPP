//문제 설명
//문자열 s에 나타나는 문자를 큰것부터 작은 순으로 정렬해 새로운 문자열을 
//리턴하는 함수, solution을 완성해주세요.
//s는 영문 대소문자로만 구성되어 있으며, 대문자는 소문자보다 작은 것으로 
//간주합니다.

//제한 사항
//str은 길이 1 이상인 문자열입니다.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool comp(int i, int j)
{
    return i > j;
}

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end(), comp);
    answer=s;
    
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.93MB)
테스트 2 〉	통과 (0.01ms, 3.94MB)
테스트 3 〉	통과 (0.01ms, 3.96MB)
테스트 4 〉	통과 (0.01ms, 3.94MB)
테스트 5 〉	통과 (0.03ms, 3.8MB)
테스트 6 〉	통과 (0.02ms, 3.94MB)
테스트 7 〉	통과 (0.01ms, 3.94MB)
테스트 8 〉	통과 (0.01ms, 3.94MB)
테스트 9 〉	통과 (0.01ms, 3.93MB)
테스트 10 〉통과 (0.01ms, 3.93MB)
테스트 11 〉통과 (0.01ms, 3.94MB)
테스트 12 〉통과 (0.01ms, 3.96MB)
테스트 13 〉통과 (0.01ms, 3.94MB)
테스트 14 〉통과 (0.01ms, 3.94MB)
테스트 15 〉통과 (0.01ms, 3.83MB)
테스트 16 〉통과 (0.02ms, 3.93MB)*/