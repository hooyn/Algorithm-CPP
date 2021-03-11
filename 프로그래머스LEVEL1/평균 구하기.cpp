//문제 설명
//정수를 담고 있는 배열 arr의 평균값을 return하는 함수, solution을 완성해보세요.

//제한사항
//arr은 길이 1 이상, 100 이하인 배열입니다.
//arr의 원소는 -10,000 이상 10,000 이하인 정수입니다.

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double size = arr.size();
    for(int i = 0 ; i < arr.size() ; i++)
    {
        answer+=arr[i];
    }
    answer = answer/size;
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.98MB)
테스트 2 〉	통과 (0.01ms, 3.91MB)
테스트 3 〉	통과 (0.01ms, 3.96MB)
테스트 4 〉	통과 (0.01ms, 3.97MB)
테스트 5 〉	통과 (0.01ms, 3.96MB)
테스트 6 〉	통과 (0.01ms, 3.91MB)
테스트 7 〉	통과 (0.01ms, 3.98MB)
테스트 8 〉	통과 (0.01ms, 3.96MB)
테스트 9 〉	통과 (0.01ms, 3.98MB)
테스트 10 〉통과 (0.01ms, 3.98MB)
테스트 11 〉통과 (0.01ms, 3.78MB)
테스트 12 〉통과 (0.01ms, 3.91MB)
테스트 13 〉통과 (0.01ms, 3.96MB)
테스트 14 〉통과 (0.01ms, 3.96MB)
테스트 15 〉통과 (0.01ms, 3.91MB)
테스트 16 〉통과 (0.01ms, 3.73MB)*/