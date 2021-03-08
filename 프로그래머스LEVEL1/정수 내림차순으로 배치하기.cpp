//문제 설명 
//함수 solution은 정수 n을 매개변수로 입력받습니다. n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 리턴해주세요.
//예를들어 n이 118372면 873211을 리턴하면 됩니다.

//제한 조건
//n은 1이상 8000000000 이하인 자연수입니다.

#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> num;
    string numS = "";
    while(n!=0){
        num.push_back(n%10);
        n=n/10;
    }
    sort(num.begin(),num.end());
    for(int i = 0 ; i < num.size() ; i++)
    {
        cout<<num[i];
        answer += num[i]*pow(10,i);
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.03ms, 3.94MB)
테스트 2 〉	통과 (0.04ms, 3.96MB)
테스트 3 〉	통과 (0.04ms, 3.89MB)
테스트 4 〉	통과 (0.04ms, 3.96MB)
테스트 5 〉	통과 (0.03ms, 3.93MB)
테스트 6 〉	통과 (0.04ms, 3.94MB)
테스트 7 〉	통과 (0.03ms, 3.85MB)
테스트 8 〉	통과 (0.03ms, 3.94MB)
테스트 9 〉	통과 (0.04ms, 3.96MB)
테스트 10 〉통과 (0.03ms, 3.95MB)
테스트 11 〉통과 (0.04ms, 3.93MB)
테스트 12 〉통과 (0.03ms, 3.77MB)
테스트 13 〉통과 (0.06ms, 3.94MB)
테스트 14 〉통과 (0.03ms, 3.95MB)
테스트 15 〉통과 (0.03ms, 3.95MB)
테스트 16 〉통과 (0.04ms, 3.95MB)*/

<다른 풀이>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    string str = to_string(n);
    sort(str.begin(), str.end(), greater<char>());
//greater : 첫번째 인자가 두번째 인자보다 크면 true 반환 (bool)
    answer = stoll(str); //sting to long long

    return answer;
}
//atoi, atol, atoll : 널 종료 문자열을 정수로 바꾼다.
//stoul, stoull : 문자열을 부호 없는 정수로 바꾼다.
//stof, stod, stold : 문자열을 부동 소수점 값으로 바꾼다.
//to_string : 정수나 부동 소수점 값을 문자열로 바꾼다.
// stoi 함수
//int stoi(const std::string& str, std::size_t* pos = 0, int base = 10);
//int stoi(const std::wstring& str, std::size_t* pos = 0, int base = 10);
// stol 함수
//long stol(const std::string& str, std::size_t* pos = 0, int base = 10);
//long stol(const std::wstring& str, std::size_t* pos = 0, int base = 10);
// stoll 함수
//long long stoll(const std::string& str, std::size_t* pos = 0, int base = 10);
//long long stoll(const std::wstring& str, std::size_t* pos = 0, int base = 10);