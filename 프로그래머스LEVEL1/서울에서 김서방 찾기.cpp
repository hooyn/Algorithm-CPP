//문제 설명
//String형 배열 seoul의 element중 Kim의 위치 x를 찾아, 
//김서방은 x에 있다는 String을 반환하는 함수, solution을 완성하세요. 
//seoul에 Kim은 오직 한 번만 나타나며 잘못된 값이 입력되는 경우는 없습니다.

//제한 사항
//seoul은 길이 1 이상, 1000 이하인 배열입니다.
//seoul의 원소는 길이 1 이상, 20 이하인 문자열입니다.
//Kim은 반드시 seoul 안에 포함되어 있습니다.

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string x;
    int ans;
    for(int i = 0 ; i<seoul.size() ; i++)
    {
        ans = seoul[i].compare("Kim"); //문자열 비교 함수
        if(ans==0)
        {
            x=to_string(i); //**int를 string으로 변환
            break;
        }
    }
    answer="김서방은 "+x+"에 있다";
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.02ms, 3.99MB)
테스트 2 〉	통과 (0.02ms, 3.96MB)
테스트 3 〉	통과 (0.02ms, 3.94MB)
테스트 4 〉	통과 (0.02ms, 3.96MB)
테스트 5 〉	통과 (0.02ms, 3.94MB)
테스트 6 〉	통과 (0.02ms, 3.96MB)
테스트 7 〉	통과 (0.02ms, 3.96MB)
테스트 8 〉	통과 (0.02ms, 3.97MB)
테스트 9 〉	통과 (0.02ms, 3.93MB)
테스트 10 〉통과 (0.04ms, 3.95MB)
테스트 11 〉통과 (0.02ms, 3.97MB)
테스트 12 〉통과 (0.03ms, 3.83MB)
테스트 13 〉통과 (0.04ms, 3.93MB)
테스트 14 〉통과 (0.04ms, 3.97MB)*/

<다른 풀이>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int pos=find(seoul.begin(),seoul.end(),"Kim")-seoul.begin();
//find 함수의 return값은 vector의 iterator.
    answer="김서방은 "+to_string(pos)+"에 있다";
    return answer;
}

//iterator로 값을 찾으려면 포인터*를 붙여서 
//iterator가 가리키는 값에 접근해야하고
//그냥 인덱스를 찾으려면 find 함수 반환값에 시작점을 빼준다.
//vector::iterator pos;
	// Kim 반환
//pos = std::find(seoul.begin(), seoul.end(), "Kim"); 
	// Kim 이 있는 인덱스 반환
//int ppos = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin(); 