//문제 설명
//array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을 
//반환하는 함수, solution을 작성해주세요.
//divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하세요.

//제한사항
//arr은 자연수를 담은 배열입니다.
//정수 i, j에 대해 i ≠ j 이면 arr[i] ≠ arr[j] 입니다.
//divisor는 자연수입니다.
//array는 길이 1 이상인 배열입니다.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int count=0;
    for(int i =0 ;i<arr.size();i++)
    {
        if(arr[i]%divisor==0)
        {
            answer.push_back(arr[i]);
            count++;
        }
    }
    sort(answer.begin(),answer.end());
    if(count==0)
        answer.push_back(-1);
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.93MB)
테스트 2 〉	통과 (0.01ms, 3.71MB)
테스트 3 〉	통과 (0.02ms, 3.93MB)
테스트 4 〉	통과 (0.02ms, 3.84MB)
테스트 5 〉	통과 (0.03ms, 3.77MB)
테스트 6 〉	통과 (0.37ms, 6.06MB)
테스트 7 〉	통과 (0.03ms, 3.78MB)
테스트 8 〉	통과 (0.01ms, 3.94MB)
테스트 9 〉	통과 (0.02ms, 3.94MB)
테스트 10 〉통과 (0.06ms, 3.95MB)
테스트 11 〉통과 (0.02ms, 3.96MB)
테스트 12 〉통과 (0.02ms, 3.96MB)
테스트 13 〉통과 (0.04ms, 3.87MB)
테스트 14 〉통과 (0.04ms, 3.93MB)
테스트 15 〉통과 (0.03ms, 3.94MB)
테스트 16 〉통과 (0.02ms, 3.96MB)*/

<다른 풀이>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int i =0; i <arr.size() ; i++){
        if(arr[i]%divisor==0) answer.push_back(arr[i]);
    }
    if(!answer.size()) answer.push_back(-1); //if문 구성이 조금 다름 !연산자를 사용
    sort(answer.begin(), answer.end());
    return answer;
}