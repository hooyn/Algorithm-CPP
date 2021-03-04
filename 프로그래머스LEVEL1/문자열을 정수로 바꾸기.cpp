//문제 설명
//문자열 s를 숫자로 변환한 결과를 반환하는 함수, solution을 완성하세요.

//제한 조건
//s의 길이는 1 이상 5이하입니다.
//s의 맨앞에는 부호(+, -)가 올 수 있습니다.
//s는 부호와 숫자로만 이루어져있습니다.
//s는 0으로 시작하지 않습니다.

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    reverse(s.begin(), s.end());
    int end = s.size();
    for(int i = 0 ; i < end ; i++)
    {
        if(s[i]=='-')
        {
            answer = -(answer);
            break;
        }
        char c = s[i]; //string을 int로 바꾸는 과정이 문제!!
        int j = (int)c;
        answer += j*pow(10,i);
    }
    return answer;
}

<두번째 시도>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>

using namespace std;
int str2int (const string &str) {
  stringstream ss(str);
  int num;
  if((ss >> num).fail())
  { 
      /* 에러 */
  }
  return num;
}
int solution(string s) {
    int answer = 0;
    answer=str2int(s);
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.02ms, 3.99MB)
테스트 2 〉	통과 (0.03ms, 3.97MB)
테스트 3 〉	통과 (0.40ms, 3.96MB)
테스트 4 〉	통과 (0.02ms, 3.83MB)
테스트 5 〉	통과 (0.02ms, 3.93MB)
테스트 6 〉	통과 (0.40ms, 3.96MB)
테스트 7 〉	통과 (0.02ms, 3.98MB)
테스트 8 〉	통과 (0.02ms, 3.95MB)
테스트 9 〉	통과 (0.41ms, 3.84MB)
테스트 10 〉통과 (0.02ms, 3.97MB)
테스트 11 〉통과 (0.02ms, 3.96MB)
테스트 12 〉통과 (0.02ms, 3.95MB)
테스트 13 〉통과 (0.02ms, 3.99MB)
테스트 14 〉통과 (0.02ms, 3.97MB)
테스트 15 〉통과 (0.02ms, 3.98MB)*/

<다른 풀이>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = stoi(s); //stoi(str)은 str을 int로 변환해주는 함수
    return answer;
}