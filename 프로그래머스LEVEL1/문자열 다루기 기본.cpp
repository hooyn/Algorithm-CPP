//문제 설명
//문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 예를 들어 s가 a234이면 False를 리턴하고 1234라면 True를 리턴하면 됩니다.

//제한 사항
//s는 길이 1 이상, 길이 8 이하인 문자열입니다.

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i]>=48&&s[i]<=57)
        {
            answer=true;
        }
        else
        {
            answer=false;
            break;
        }
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.93MB)
테스트 2 〉	통과 (0.01ms, 3.93MB)
테스트 3 〉	통과 (0.01ms, 3.94MB)
테스트 4 〉	통과 (0.01ms, 3.96MB)
테스트 5 〉	실패 (0.01ms, 3.96MB) //실패
테스트 6 〉	실패 (0.01ms, 3.89MB) //실패
테스트 7 〉	통과 (0.01ms, 3.95MB)
테스트 8 〉	통과 (0.01ms, 3.94MB)
테스트 9 〉	통과 (0.01ms, 3.98MB)
테스트 10 〉통과 (0.01ms, 3.97MB)
테스트 11 〉통과 (0.01ms, 3.94MB)
테스트 12 〉통과 (0.01ms, 3.7MB)
테스트 13 〉통과 (0.01ms, 3.96MB)
테스트 14 〉통과 (0.01ms, 3.94MB)
테스트 15 〉통과 (0.01ms, 3.95MB)
테스트 16 〉통과 (0.01ms, 3.96MB)*/

<두번째 시도>
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size()!=4&&s.size()!=6) return false; //문제설명 s.length()가 4or6
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i]>=48&&s[i]<=57) //48대신 '0', 57대신 '9'입력 가능
        {
            answer=true;
        }
        else
        {
            answer=false;
            break;
        }
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.96MB)
테스트 2 〉	통과 (0.01ms, 3.95MB)
테스트 3 〉	통과 (0.01ms, 3.95MB)
테스트 4 〉	통과 (0.01ms, 3.96MB)
테스트 5 〉	통과 (0.01ms, 3.95MB)
테스트 6 〉	통과 (0.01ms, 3.96MB)
테스트 7 〉	통과 (0.01ms, 3.93MB)
테스트 8 〉	통과 (0.01ms, 3.76MB)
테스트 9 〉	통과 (0.01ms, 3.96MB)
테스트 10 〉통과 (0.01ms, 3.78MB)
테스트 11 〉통과 (0.01ms, 4MB)
테스트 12 〉통과 (0.01ms, 3.96MB)
테스트 13 〉통과 (0.01ms, 3.95MB)
테스트 14 〉통과 (0.01ms, 3.94MB)
테스트 15 〉통과 (0.01ms, 3.96MB)
테스트 16 〉통과 (0.01ms, 3.96MB)*/

<다른 풀이>
#include <string>
#include <vector>
using namespace std;

bool solution(string s) {
    bool answer = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i])) // !isdigit( ) 함수 사용 (숫자판별함수)
            answer = false;
    }

    return s.size() == 4 || s.size() == 6 ? answer : false;
}