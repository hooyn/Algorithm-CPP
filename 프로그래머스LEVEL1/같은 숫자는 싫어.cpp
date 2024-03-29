//문제 설명
//배열 arr가 주어집니다. 배열 arr의 각 원소는 숫자 0부터 9까지로 이루어져 있습니다. 
//이때, 배열 arr에서 연속적으로 나타나는 숫자는 하나만 남기고 전부 제거하려고 합니다. 
//단, 제거된 후 남은 수들을 반환할 때는 배열 arr의 원소들의 순서를 유지해야 합니다. 
//예를 들면, arr = [1, 1, 3, 3, 0, 1, 1] 이면 [1, 3, 0, 1] 을 return 합니다.
//arr = [4, 4, 4, 3, 3] 이면 [4, 3] 을 return 합니다.
//배열 arr에서 연속적으로 나타나는 숫자는 제거하고 남은 수들을 return 하는 
//solution 함수를 완성해 주세요.

//제한사항
//배열 arr의 크기 : 1,000,000 이하의 자연수
//배열 arr의 원소의 크기 : 0보다 크거나 같고 9보다 작거나 같은 정수

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer=arr;
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    //unique함수는 순서대로 중복된 모든 수값을 맨 뒤로
    //unique함수의 return은 중복된 모든 값을 뒤로 이동시키고 
    //unique함수 반환 값은 쓰레기 값들의 첫번째 index를 반환한다.
    //unique가 맨 뒤로 보낸 값들의 첫번째 index부터 answer의 맨뒤 index까지 삭제
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.93MB)
테스트 2 〉	통과 (0.02ms, 3.94MB)
테스트 3 〉	통과 (0.02ms, 3.94MB)
테스트 4 〉	통과 (0.02ms, 3.89MB)
테스트 5 〉	통과 (0.02ms, 3.88MB)
테스트 6 〉	통과 (0.02ms, 3.92MB)
테스트 7 〉	통과 (0.02ms, 3.94MB)
테스트 8 〉	통과 (0.02ms, 3.92MB)
테스트 9 〉	통과 (0.03ms, 3.93MB)
테스트 10 〉통과 (0.02ms, 3.95MB)
테스트 11 〉통과 (0.03ms, 3.89MB)
테스트 12 〉통과 (0.02ms, 3.93MB)
테스트 13 〉통과 (0.02ms, 3.93MB)
테스트 14 〉통과 (0.02ms, 3.93MB)
테스트 15 〉통과 (0.02ms, 3.93MB)
테스트 16 〉통과 (0.03ms, 3.93MB)
테스트 17 〉통과 (0.01ms, 3.94MB)
효율성  테스트
테스트 1 〉	통과 (112.70ms, 105MB)
테스트 2 〉	통과 (118.88ms, 105MB)
테스트 3 〉	통과 (119.86ms, 105MB)
테스트 4 〉	통과 (118.82ms, 105MB)
*/