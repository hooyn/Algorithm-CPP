//문제 설명
//길이가 n이고, 수박수박수박수....와 같은 패턴을 유지하는 문자열을 리턴하는 함수, 
//solution을 완성하세요. 예를들어 n이 4이면 수박수박을 리턴하고 3이라면 수박수를 리턴하면 됩니다.

//제한 조건
//n은 길이 10,000이하인 자연수입니다.

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
            answer+="수";
        }
        else if(i%2==1){
            answer+="박";
        }
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.02ms, 3.9MB)
테스트 2 〉	통과 (0.05ms, 3.94MB)
테스트 3 〉	통과 (0.04ms, 3.83MB)
테스트 4 〉	통과 (0.06ms, 3.97MB)
테스트 5 〉	통과 (0.04ms, 3.96MB)
테스트 6 〉	통과 (0.01ms, 3.94MB)
테스트 7 〉	통과 (0.01ms, 3.94MB)
테스트 8 〉	통과 (0.01ms, 3.9MB)
테스트 9 〉	통과 (0.01ms, 3.97MB)
테스트 10 〉통과 (0.01ms, 3.94MB)
테스트 11 〉통과 (0.01ms, 3.89MB)
테스트 12 〉통과 (0.01ms, 3.68MB)
테스트 13 〉통과 (0.01ms, 3.93MB)
테스트 14 〉통과 (0.01ms, 3.95MB)
테스트 15 〉통과 (0.12ms, 3.95MB)
테스트 16 〉통과 (0.01ms, 3.97MB)*/

/*<다른 풀이>*/
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    for(int i = 0; i < n; i++)
        i & 1 ? answer += "박" : answer += "수";

    return answer;
}
//->비트연산자중 AND 연산자이고 홀수인지를 판단하는 식입니다. 
//1은 이진수로 0000....0001 이고, 홀수의 이진수는 항상 xxxx...xxx1 이 됩니다. 
//1과 홀수를 AND 연산하면 1이 리턴되고 1은 조건식에서 참을 의미합니다.