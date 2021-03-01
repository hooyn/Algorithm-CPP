//문제 설명
//단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 
//단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

//제한사항
//s는 길이가 1 이상, 100이하인 스트링입니다.

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.size();
    if(size%2==0)
    {
        int i = size/2;
        answer=s.at(i-1);
        answer.push_back(s.at(i));
    }
    else
    {
        int i = size/2;
        answer=s.at(i);
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.83MB)
테스트 2 〉	통과 (0.01ms, 3.93MB)
테스트 3 〉	통과 (0.01ms, 3.93MB)
테스트 4 〉	통과 (0.01ms, 3.93MB)
테스트 5 〉	통과 (0.01ms, 3.93MB)
테스트 6 〉	통과 (0.01ms, 3.94MB)
테스트 7 〉	통과 (0.01ms, 3.95MB)
테스트 8 〉	통과 (0.01ms, 3.94MB)
테스트 9 〉	통과 (0.01ms, 3.89MB)
테스트 10 〉통과 (0.01ms, 3.71MB)
테스트 11 〉통과 (0.01ms, 3.94MB)
테스트 12 〉통과 (0.01ms, 3.75MB)
테스트 13 〉통과 (0.01ms, 3.93MB)
테스트 14 〉통과 (0.01ms, 3.93MB)
테스트 15 〉통과 (0.01ms, 3.75MB)
테스트 16 〉통과 (0.01ms, 3.94MB)*/

<다른 풀이>
#include <string>
using namespace std;

string solution(string s) {
    return s.length()&1 ? s.substr(s.length()*0.5,1) : s.substr(s.length()*0.5-1,2);
// s.length()&1(스트링의 길이가 홀수 이면) 길이의 2분의 1을 한 후 한개의 문자열을 반환
// 스트링의 길이가 짝수이면 길이의 2분의 1을 한 후 두개의 문자열을 반환
}


string substr(size_t index = 0, size_t len = npos) const;
//string을 index 에서부터 len만큼 잘라서 반환하는 함수입니다.
함수 예시 : str1.substr();          
//"BlockDMask" 그대로 반환합니다.
함수 예시 : str1.substr(5);        
// "DMask"를 반환합니다. 0부터 세기 시작해서 "5" 번째 인자부터 끝까지의 문자열을 반환합니다.
함수 예시 : str1.substr(5, 1);     
// "D"를 반환합니다. 5번째 인자부터, 1의 길이만큼 문자열을 반환합니다.