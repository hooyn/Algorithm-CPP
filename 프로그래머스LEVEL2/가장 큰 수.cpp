//문제 설명
//0 또는 양의 정수가 주어졌을 때, 정수를 이어 붙여 만들 수 있는 가장 큰 수를 알아내 주세요.
//예를 들어, 주어진 정수가 [6, 10, 2]라면 [6102, 6210, 1062, 1026, 2610, 2106]를 만들 수 있고, 이중 가장 큰 수는 6210입니다.
//0 또는 양의 정수가 담긴 배열 numbers가 매개변수로 주어질 때, 순서를 재배치하여 만들 수 있는 가장 큰 수를 문자열로 바꾸어
//return 하도록 solution 함수를 작성해주세요.
//제한 사항
//numbers의 길이는 1 이상 100,000 이하입니다.
//numbers의 원소는 0 이상 1,000 이하입니다.
//정답이 너무 클 수 있으니 문자열로 바꾸어 return 합니다.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool comp  (const string &a, const string &b) // const와 &필수!!
{
    return (a+b) > (b+a); //중요***
}

string solution(vector<int> numbers) {

    string answer = "";
    
    vector<string> number;
    for(int i = 0; i < numbers.size(); i++)
        number.push_back(to_string(numbers[i]));

    sort(number.begin(), number.end(), comp);
    if(number.front()=="0")return "0";

    for(int i = 0; i < number.size(); i++)
        answer += number[i];
    
    //string answers = to_string(stoi(answer));
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (46.92ms, 10MB)
테스트 2 〉	통과 (26.11ms, 6.8MB)
테스트 3 〉	통과 (62.53ms, 10.8MB)
테스트 4 〉	통과 (1.43ms, 3.96MB)
테스트 5 〉	통과 (39.07ms, 7.83MB)
테스트 6 〉	통과 (36.19ms, 7.34MB)
테스트 7 〉	통과 (0.03ms, 3.97MB)
테스트 8 〉	통과 (0.02ms, 3.95MB)
테스트 9 〉	통과 (0.03ms, 3.96MB)
테스트 10 〉통과 (0.02ms, 3.93MB)
테스트 11 〉통과 (0.02ms, 3.95MB)*/