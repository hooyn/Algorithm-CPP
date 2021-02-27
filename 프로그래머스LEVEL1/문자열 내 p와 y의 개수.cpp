//문제 설명
//대문자와 소문자가 섞여있는 문자열 s가 주어집니다. s에 'p'의 개수와 'y'의 개수를 비교해 같으면 True, 
//다르면 False를 return 하는 solution를 완성하세요. 'p', 'y' 모두 하나도 없는 경우는 항상 True를 리턴합니다. 
//단, 개수를 비교할 때 대문자와 소문자는 구별하지 않습니다.

//예를 들어 s가 pPoooyY면 true를 return하고 Pyy라면 false를 return합니다.

//제한사항
//문자열 s의 길이 : 50 이하의 자연수
//문자열 s는 알파벳으로만 이루어져 있습니다.

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_count=0;
    int y_count=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='p'||s[i]=='P'){
            p_count++;
        }
        else if(s[i]=='y'||s[i]=='Y'){
            y_count++;
        }
    }
    if(p_count==y_count)
        answer=true;
    else
        answer=false;

    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.98MB)
테스트 2 〉	통과 (0.01ms, 3.96MB)
테스트 3 〉	통과 (0.01ms, 3.93MB)
테스트 4 〉	통과 (0.01ms, 3.97MB)
테스트 5 〉	통과 (0.01ms, 3.96MB)
테스트 6 〉	통과 (0.01ms, 3.93MB)
테스트 7 〉	통과 (0.01ms, 3.84MB)
테스트 8 〉	통과 (0.01ms, 3.83MB)
테스트 9 〉	통과 (0.01ms, 3.93MB)
테스트 10 〉통과 (0.01ms, 3.96MB)
테스트 11 〉통과 (0.01ms, 3.95MB)
테스트 12 〉통과 (0.01ms, 3.94MB)
테스트 13 〉통과 (0.01ms, 3.96MB)
테스트 14 〉통과 (0.01ms, 3.95MB)
테스트 15 〉통과 (0.01ms, 3.97MB)
테스트 16 〉통과 (0.01ms, 3.94MB)
테스트 17 〉통과 (0.01ms, 3.97MB)
테스트 18 〉통과 (0.01ms, 3.95MB)
테스트 19 〉통과 (0.01ms, 3.95MB)
테스트 20 〉통과 (0.01ms, 3.83MB)
테스트 21 〉통과 (0.01ms, 3.96MB)
테스트 22 〉통과 (0.01ms, 3.97MB)
테스트 23 〉통과 (0.01ms, 3.84MB)
테스트 24 〉통과 (0.01ms, 3.96MB)
테스트 25 〉통과 (0.01ms, 3.96MB)
테스트 26 〉통과 (0.01ms, 3.96MB)
테스트 27 〉통과 (0.02ms, 3.97MB)
테스트 28 〉통과 (0.01ms, 3.96MB)*/