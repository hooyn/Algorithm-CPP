/*슈퍼 게임 개발자 오렐리는 큰 고민에 빠졌다. 
그녀가 만든 프랜즈 오천성이 대성공을 거뒀지만, 
요즘 신규 사용자의 수가 급감한 것이다. 
원인은 신규 사용자와 기존 사용자 사이에 스테이지 차이가 
너무 큰 것이 문제였다.

이 문제를 어떻게 할까 고민 한 그녀는 동적으로 게임 시간을 
늘려서 난이도를 조절하기로 했다. 역시 슈퍼 개발자라 대부분의 
로직은 쉽게 구현했지만, 실패율을 구하는 부분에서 위기에 빠지고 말았다. 
오렐리를 위해 실패율을 구하는 코드를 완성하라.

실패율은 다음과 같이 정의한다.
스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수 / 스테이지에 
도달한 플레이어 수 전체 스테이지의 개수 N, 게임을 이용하는 사용자가 
현재 멈춰있는 스테이지의 번호가 담긴 배열 stages가 매개변수로 주어질 때, 
실패율이 높은 스테이지부터 내림차순으로 스테이지의 번호가 담겨있는 
배열을 return 하도록 solution 함수를 완성하라.

제한사항
스테이지의 개수 N은 1 이상 500 이하의 자연수이다.
stages의 길이는 1 이상 200,000 이하이다.
stages에는 1 이상 N + 1 이하의 자연수가 담겨있다.
각 자연수는 사용자가 현재 도전 중인 스테이지의 번호를 나타낸다.
단, N + 1 은 마지막 스테이지(N 번째 스테이지) 까지 클리어 한 사용자를 
나타낸다.
만약 실패율이 같은 스테이지가 있다면 작은 번호의 스테이지가 먼저 
오도록 하면 된다.
스테이지에 도달한 유저가 없는 경우 해당 스테이지의 실패율은 0 으로 
정의한다.*/

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, double>& a, pair<int, double>& b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> levelcount(N,0);
    vector<pair<int,double>> failrate;
    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 0 ; j < stages.size() ; j++)
        {
            if(stages[j]==i)
            {
                levelcount[i-1]++;
            }
        }
    }
    double sSize = stages.size();
    for(int i = 0 ; i < N ; i++)
    {
        failrate.push_back({i+1, (double)levelcount[i]/sSize});
        sSize = sSize - levelcount[i];
    }
    sort(failrate.begin(),failrate.end(),compare);
    
    for (auto p : failrate)        //정답에 옮기기
        answer.push_back(p.first);
    
    return answer;
}

if(cnt==0){
fail_rate.add(new double[]{i,0});
continue;
}

/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.93MB)
테스트 2 〉	통과 (0.03ms, 3.94MB)
테스트 3 〉	통과 (1.92ms, 4.08MB)
테스트 4 〉	통과 (8.97ms, 6.58MB)
테스트 5 〉	통과 (32.62ms, 9.85MB)
테스트 6 〉	실패 (0.09ms, 3.95MB)
테스트 7 〉	실패 (0.52ms, 4MB)
테스트 8 〉	통과 (9.07ms, 6.5MB)
테스트 9 〉	실패 (32.76ms, 9.83MB)
테스트 10 〉통과 (4.65ms, 6.32MB)
테스트 11 〉통과 (9.05ms, 6.42MB)
테스트 12 〉통과 (7.27ms, 7.82MB)
테스트 13 〉실패 (13.39ms, 8.41MB)
테스트 14 〉통과 (0.02ms, 3.77MB)
테스트 15 〉통과 (0.85ms, 5.22MB)
테스트 16 〉통과 (0.59ms, 4.37MB)
테스트 17 〉통과 (1.15ms, 5.23MB)
테스트 18 〉통과 (0.58ms, 4.38MB)
테스트 19 〉통과 (0.13ms, 3.95MB)
테스트 20 〉통과 (0.89ms, 4.74MB)
테스트 21 〉통과 (1.62ms, 6.23MB)
테스트 22 〉통과 (30.76ms, 9.9MB)
테스트 23 〉통과 (2.34ms, 9.64MB)
테스트 24 〉실패 (4.27ms, 9.53MB)
테스트 25 〉통과 (0.01ms, 3.96MB)
테스트 26 〉통과 (0.01ms, 3.97MB)
테스트 27 〉통과 (0.03ms, 3.71MB)*/