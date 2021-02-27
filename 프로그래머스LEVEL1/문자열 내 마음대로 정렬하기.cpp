//문제 설명
//문자열로 구성된 리스트 strings와, 정수 n이 주어졌을 때, 
//각 문자열의 인덱스 n번째 글자를 기준으로 오름차순 정렬하려 합니다. 
//예를 들어 strings가 [sun, bed, car]이고 n이 1이면 
//각 단어의 인덱스 1의 문자 u, e, a로 strings를 정렬합니다.

//제한 조건
//strings는 길이 1 이상, 50이하인 배열입니다.
//strings의 원소는 소문자 알파벳으로 이루어져 있습니다.
//strings의 원소는 길이 1 이상, 100이하인 문자열입니다.
//모든 strings의 원소의 길이는 n보다 큽니다.
//인덱스 1의 문자가 같은 문자열이 여럿 일 경우, 
//사전순으로 앞선 문자열이 앞쪽에 위치합니다.

#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int k;
bool cmp (string a, string b) { 
    if (a[k] != b[k]) return a[k] < b[k]; //string a와b가 같지 않다면 문자하나를 
				//사전순서대로
    else return a < b; //string a와b가 같다면 문자열 전체를 사전순서대로
}
 
vector<string> solution(vector<string> strings, int n) {
    k = n;
    sort(strings.begin(), strings.end(), cmp);
    return strings;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.97MB)
테스트 2 〉	통과 (0.01ms, 3.94MB)
테스트 3 〉	통과 (0.05ms, 3.96MB)
테스트 4 〉	통과 (0.03ms, 3.93MB)
테스트 5 〉	통과 (0.01ms, 3.94MB)
테스트 6 〉	통과 (0.05ms, 3.98MB)
테스트 7 〉	통과 (0.02ms, 3.97MB)
테스트 8 〉	통과 (0.02ms, 3.94MB)
테스트 9 〉	통과 (0.01ms, 3.71MB)
테스트 10 〉통과 (0.05ms, 3.96MB)
테스트 11 〉통과 (0.01ms, 3.97MB)
테스트 12 〉통과 (0.06ms, 3.89MB)*/