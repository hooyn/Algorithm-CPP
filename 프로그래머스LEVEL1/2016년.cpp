//2016년 1월 1일은 금요일입니다. 2016년 a월 b일은 무슨 요일일까요? 
//두 수 a ,b를 입력받아 2016년 a월 b일이 무슨 요일인지 리턴하는 함수, solution을 완성하세요. 
//요일의 이름은 일요일부터 토요일까지 각각 SUN,MON,TUE,WED,THU,FRI,SAT입니다. 
//예를 들어 a=5, b=24라면 5월 24일은 화요일이므로 문자열 TUE를 반환하세요.

//*제한 조건
//2016년은 윤년입니다.
//2016년 a월 b일은 실제로 있는 날입니다. (13월 26일이나 2월 45일같은 날짜는 주어지지 않습니다)

#include<iostream>
#include <string>
#include <vector>
#include<sstream>

using namespace std;

string solution(int a, int b) {
    string answer = "THU FRI SAT SUN MON TUE WED";
    istringstream ss(answer);
    string stringBuffer;
    vector<string> ans;
    ans.clear();
    while(getline(ss, stringBuffer, ' ')){
        ans.push_back(stringBuffer); //ans에 ss에 있는 요일들을 저장
    }
    a--; // 예를 들어 1월 2일 인 경우 while문에서 0보다 작은 수로 인식
    while(a!=0) // 지금 생각해보니 a!=1을 하고 위에 a--코드를 지우고 if문에 1월에 해당하는 내용을 지우는 것도 좋을 듯
    {
        if(a==2)
        {
            b+=29;
            a--;
        }
        else if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
        {
            b+=31;
            a--;
        }
        else if(a==4||a==6||a==9||a==11)
        {
            b+=30;
            a--;
        }
        else break; //error  
    }
    int x = b%7;
    switch(x)
    {
        case 0:
            return ans[0];
            break;
        case 1:
            return ans[1];
            break;
        case 2:
            return ans[2];
            break;
        case 3:
            return ans[3];
            break;
        case 4:
            return ans[4];
            break;
        case 5:
            return ans[5];
            break;
        case 6:
            return ans[6];
            break;
    }
    
    return answer;
}

/*테스트 1 〉	통과 (0.02ms, 3.71MB)
테스트 2 〉	통과 (0.02ms, 3.95MB)
테스트 3 〉	통과 (0.02ms, 3.96MB)
테스트 4 〉	통과 (0.02ms, 3.93MB)
테스트 5 〉	통과 (0.02ms, 3.96MB)
테스트 6 〉	통과 (0.02ms, 3.84MB)
테스트 7 〉	통과 (0.02ms, 3.95MB)
테스트 8 〉	통과 (0.03ms, 3.93MB)
테스트 9 〉	통과 (0.02ms, 3.93MB)
테스트 10 〉	통과 (0.02ms, 3.96MB)
테스트 11 〉	통과 (0.02ms, 3.95MB)
테스트 12 〉	통과 (0.02ms, 3.93MB)
테스트 13 〉	통과 (0.02ms, 3.95MB)
테스트 14 〉	통과 (0.02ms, 3.94MB)*/