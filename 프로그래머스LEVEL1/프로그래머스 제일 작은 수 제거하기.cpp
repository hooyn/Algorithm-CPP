//문제 설명
//정수를 저장한 배열, arr 에서 가장 작은 수를 제거한 배열을 리턴하는 함수, solution을 완성해주세요. 
//단, 리턴하려는 배열이 빈 배열인 경우엔 배열에 -1을 채워 리턴하세요. 예를들어 arr이 [4,3,2,1]인 경우는 [4,3,2]를 리턴 하고, [10]면 [-1]을 리턴 합니다.

//제한 조건
//arr은 길이 1 이상인 배열입니다.
//인덱스 i, j에 대해 i ≠ j이면 arr[i] ≠ arr[j] 입니다.

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer=arr;
    vector<int>::iterator iter=answer.begin(); //iterator 잘 숙지하기
    int index;
    int min=0;
    min=answer[0];
    if(answer.size()==1){
        answer={-1};
        return answer;
    }
    for(int j = 1 ; j < answer.size() ; j++)
    {
        if(min>answer[j]){
            min=answer[j];
            index=j;   
        }
    }
    for(int i = 0 ; i<index ; i++)
    {
        ++iter; //벡터의 특정위치를 선택할때 iterator형으로 해야되므로 ++로
                 //해당 위치를 찾아준다.
    }
    answer.erase(iter); //벡터에서 특정 위치를 지정해서 삭제할수 있다.
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (11.90ms, 13.3MB)
테스트 2 〉	통과 (0.08ms, 3.93MB)
테스트 3 〉	통과 (0.13ms, 3.94MB)
테스트 4 〉	통과 (0.06ms, 3.92MB)
테스트 5 〉	통과 (0.04ms, 3.94MB)
테스트 6 〉	통과 (0.15ms, 3.94MB)
테스트 7 〉	통과 (0.19ms, 3.97MB)
테스트 8 〉	통과 (0.01ms, 3.93MB)
테스트 9 〉	통과 (0.02ms, 3.93MB)
테스트 10 〉통과 (0.01ms, 3.93MB)
테스트 11 〉통과 (0.01ms, 3.89MB)
테스트 12 〉통과 (0.02ms, 3.71MB)
테스트 13 〉통과 (0.04ms, 3.93MB)
테스트 14 〉통과 (0.14ms, 3.94MB)
테스트 15 〉통과 (0.07ms, 3.93MB)
테스트 16 〉통과 (0.16ms, 3.96MB)*/

<다른 풀이>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer=arr;
    vector<int>::iterator viter;

    if ( arr.size() > 1 )
    {
        viter = min_element(arr.begin(), arr.end());
        //min_element( )를 사용해서 최소값을 한번에 iterator형으로 받았다.
        arr.erase(viter);
        answer = arr;
    }
    else
    {
        answer.push_back(-1);
    }   
    return answer;
}