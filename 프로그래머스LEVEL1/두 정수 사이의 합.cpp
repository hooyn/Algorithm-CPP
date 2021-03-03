//문제 설명
//두 정수 a, b가 주어졌을 때 a와 b 사이에 속한 모든 정수의 합을 
//리턴하는 함수, solution을 완성하세요.
//예를 들어 a = 3, b = 5인 경우, 3 + 4 + 5 = 12이므로 12를 리턴합니다.

//제한 조건
//a와 b가 같은 경우는 둘 중 아무 수나 리턴하세요.
//a와 b는 -10,000,000 이상 10,000,000 이하인 정수입니다.
//a와 b의 대소관계는 정해져있지 않습니다.

#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int up;
    int down;
    (a>b)?(up=a,down=b):(up=b,down=a);
    cout<<a<<b<<endl;
    if(a==b) return a;
    else
    {
        for(int i = down ; i <= up ; i++)
        {
            answer+=i;
        }
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.03ms, 3.97MB)
테스트 2 〉	통과 (0.04ms, 3.95MB)
테스트 3 〉	통과 (0.03ms, 3.99MB)
테스트 4 〉	통과 (0.04ms, 3.98MB)
테스트 5 〉	통과 (0.03ms, 3.95MB)
테스트 6 〉	통과 (0.03ms, 3.99MB)
테스트 7 〉	통과 (0.03ms, 3.99MB)
테스트 8 〉	통과 (0.03ms, 3.99MB)
테스트 9 〉	통과 (0.03ms, 3.97MB)
테스트 10 〉통과 (0.03ms, 3.99MB)
테스트 11 〉통과 (0.03ms, 3.97MB)
테스트 12 〉통과 (0.03ms, 3.8MB)
테스트 13 〉통과 (0.03ms, 3.85MB)
테스트 14 〉통과 (0.03ms, 3.99MB)
테스트 15 〉통과 (0.03ms, 3.78MB)
테스트 16 〉통과 (0.03ms, 3.96MB)*/

<다른 풀이>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    return (long long)(a + b) * (abs(a - b) + 1) / 2;
}
//a와 b의 사이 값의 합을 구하는 공식!!