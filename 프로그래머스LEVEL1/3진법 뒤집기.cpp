//문제 설명
//자연수 n이 매개변수로 주어집니다. n을 3진법 상에서 앞뒤로 뒤집은 후, 
//이를 다시 10진법으로 표현한 수를 return 하도록 solution 함수를 완성해주세요.

//제한사항
//n은 1 이상 100,000,000 이하인 자연수입니다.

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    vector<long int> array;
    int j = 0;
    long int answer = 0;
    while(n!=1)
    {
        array.push_back(n%3);
        n=n/3;
    }
    array.push_back(1);
    for(int i = array.size()-1 ; i >= 0 ; i--)
    {
        answer = answer + (array[i]*pow(3,j));
        j++;
    }
    
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.02ms, 3.93MB)
테스트 2 〉	실패 (메모리 초과)
테스트 3 〉	통과 (0.02ms, 3.84MB)
테스트 4 〉	실패 (메모리 초과)
테스트 5 〉	실패 (메모리 초과)
테스트 6 〉	실패 (메모리 초과)
테스트 7 〉	통과 (0.02ms, 3.94MB)
테스트 8 〉	실패 (메모리 초과)
테스트 9 〉	실패 (메모리 초과)
테스트 10 〉통과 (0.02ms, 3.94MB)*/

<정답 풀이>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    vector<int> array;
    int answer = 0;
    while(n) //while을 n이 참 일때 까지 하여 마지막 1까지 저장한다.
    {
        array.push_back(n%3); //3진법을 반대로 저장
        n=n/3;
    }
    reverse(array.begin(), array.end()); //10진수로 바꾸기 쉽게 하기 위해 반대로 정렬

    for(int i = 0 ; i < array.size() ; i++)
    {
        answer = answer + array[i]*pow(3,i); //첫번째 부터 10진수로 바꾸고 answer에 저장
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.02ms, 3.9MB)
테스트 2 〉	통과 (0.02ms, 3.93MB)
테스트 3 〉	통과 (0.02ms, 3.98MB)
테스트 4 〉	통과 (0.02ms, 3.99MB)
테스트 5 〉	통과 (0.03ms, 3.94MB)
테스트 6 〉	통과 (0.02ms, 3.98MB)
테스트 7 〉	통과 (0.03ms, 3.99MB)
테스트 8 〉	통과 (0.02ms, 3.94MB)
테스트 9 〉	통과 (0.02ms, 3.97MB)
테스트 10 〉통과 (0.02ms, 3.98MB)*/