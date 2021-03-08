//문제 설명
//임의의 양의 정수 n에 대해, n이 어떤 양의 정수 x의 제곱인지 아닌지 
//판단하려 합니다.
//n이 양의 정수 x의 제곱이라면 x+1의 제곱을 리턴하고, 
//n이 양의 정수 x의 제곱이 아니라면 -1을 리턴하는 함수를 완성하세요.

//제한 사항
//n은 1이상, 50000000000000 이하인 양의 정수입니다.

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long root = sqrt(n);
    if(n == root*root){
        answer = (root+1)*(root+1);
    }
    else
        return -1;
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.95MB)
테스트 2 〉	통과 (0.01ms, 3.96MB)
테스트 3 〉	통과 (0.01ms, 3.96MB)
테스트 4 〉	통과 (0.01ms, 3.94MB)
테스트 5 〉	통과 (0.01ms, 3.94MB)
테스트 6 〉	통과 (0.01ms, 3.85MB)
테스트 7 〉	통과 (0.01ms, 3.98MB)
테스트 8 〉	통과 (0.01ms, 3.94MB)
테스트 9 〉	통과 (0.01ms, 3.91MB)
테스트 10 〉통과 (0.01ms, 3.72MB)
테스트 11 〉통과 (0.01ms, 3.94MB)
테스트 12 〉통과 (0.01ms, 3.97MB)
테스트 13 〉통과 (0.01ms, 3.95MB)
테스트 14 〉통과 (0.01ms, 3.94MB)
테스트 15 〉통과 (0.01ms, 3.94MB)
테스트 16 〉통과 (0.01ms, 3.94MB)
테스트 17 〉통과 (0.01ms, 3.92MB)
테스트 18 〉통과 (0.01ms, 3.97MB)*/