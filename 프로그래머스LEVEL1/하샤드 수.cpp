//문제 설명
//양의 정수 x가 하샤드 수이려면 x의 자릿수의 합으로 x가 나누어져야 합니다. 
//예를 들어 18의 자릿수 합은 1+8=9이고, 18은 9로 나누어 떨어지므로 
//18은 하샤드 수입니다. 자연수 x를 입력받아 x가 하샤드 수인지 아닌지 
//검사하는 함수, solution을 완성해주세요.

//제한 조건
//x는 1 이상, 10000 이하인 정수입니다.

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int temp = x;
    int count=0;
    bool answer = true;
    while(x!=0){
        count = count + (x%10);
        x = x/10;
    }
    if(temp%count==0){
        return true;
    }
    else
        return false;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.8MB)
테스트 2 〉	통과 (0.01ms, 3.79MB)
테스트 3 〉	통과 (0.01ms, 3.9MB)
테스트 4 〉	통과 (0.01ms, 3.96MB)
테스트 5 〉	통과 (0.01ms, 3.98MB)
테스트 6 〉	통과 (0.01ms, 3.96MB)
테스트 7 〉	통과 (0.01ms, 3.92MB)
테스트 8 〉	통과 (0.01ms, 3.97MB)
테스트 9 〉	통과 (0.01ms, 3.96MB)
테스트 10 〉통과 (0.01ms, 3.98MB)
테스트 11 〉통과 (0.01ms, 3.92MB)
테스트 12 〉통과 (0.01ms, 3.97MB)
테스트 13 〉통과 (0.02ms, 3.98MB)
테스트 14 〉통과 (0.01ms, 3.97MB)
테스트 15 〉통과 (0.01ms, 3.91MB)
테스트 16 〉통과 (0.01ms, 3.96MB)
테스트 17 〉통과 (0.01ms, 3.98MB)*/