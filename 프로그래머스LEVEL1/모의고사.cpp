//문제 설명
//수포자는 수학을 포기한 사람의 준말입니다. 수포자 삼인방은 모의고사에 
//수학 문제를전부 찍으려 합니다. 
//수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다.

//1번 수포자가 찍는 방식: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
//2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
//3번 수포자가 찍는 방식: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

//1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가
//주어졌을 때, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아
//return 하도록 solution 함수를 작성해주세요.

//제한 조건
//시험은 최대 10,000 문제로 구성되어있습니다.
//문제의 정답은 1, 2, 3, 4, 5중 하나입니다.
//가장 높은 점수를 받은 사람이 여럿일 경우, return하는 값을 
//오름차순 정렬해주세요.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> no1, no2, no3;
    int no1_count=0,no2_count=0,no3_count=0;
    for(int i=0;i<answer.size();i++)
    {
       int count = i%5;
        switch(count){
            case 0:
                no1.push_back(1);
                break;
            case 1:
                no1.push_back(2);
                break;
            case 2:
                no1.push_back(3);
                break;
            case 3:
                no1.push_back(4);
                break;
            case 4:
                no1.push_back(5);
                break;
        }
    }
    for(int i=0;i<answer.size();i++)
    {
       int count = i%8;
        switch(count){
            case 0:
                no2.push_back(2);
                break;
            case 1:
                no2.push_back(1);
                break;
            case 2:
                no2.push_back(2);
                break;
            case 3:
                no2.push_back(3);
                break;
            case 4:
                no2.push_back(2);
                break;
            case 5:
                no2.push_back(4);
                break;
            case 6:
                no2.push_back(2);
                break;
            case 7:
                no2.push_back(5);
                break;
        }
    }
    for(int i=0;i<answer.size();i++)
    {
       int count = i%10;
        switch(count){
            case 0:
                no3.push_back(3);
                break;
            case 1:
                no3.push_back(3);
                break;
            case 2:
                no3.push_back(1);
                break;
            case 3:
                no3.push_back(1);
                break;
            case 4:
                no3.push_back(2);
                break;
            case 5:
                no3.push_back(2);
                break;
            case 6:
                no3.push_back(4);
                break;
            case 7:
                no3.push_back(4);
                break;
            case 8:
                no3.push_back(5);
                break;
            case 9:
                no3.push_back(5);
                break;
        }
    }
    for(int i=0;i<answer.size();i++)
    {
        if(answer[i]==no1[i])
        {
            no1_count++;
        }
        if(answer[i]==no2[i])
        {
            no2_count++;
        }
        if(answer[i]==no2[i])
        {
            no2_count++;
        }
    }
    if(no1_count>no2_count&&no1_count>no3_count)
    {
        answer.push_back(1);
    }
    else if(no2_count>no1_count&&no2_count>no3_count)
    {
        answer.push_back(2);
    }
    else if(no3_count>no1_count&&no3_count>no2_count)
    {
        answer.push_back(3);
    }
    else if(no1_count==no2_count&&no1_count>no3_count)
    {
        answer.push_back(1);
        answer.push_back(2);
    }
    else if(no1_count>no3_count&&no1_count>no2_count)
    {
        answer.push_back(1);
        answer.push_back(3);
    }
    else if(no2_count>no3_count&&no2_count>no1_count)
    {
        answer.push_back(2);
        answer.push_back(3);
    }
    else if(no1_count==no2_count==no3_count==0)
    {   }
    else
    {
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }
    return answer;
}

// 결과는 실패

#include <string>
#include <vector>
#include <cmath>

using namespace std;
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> no1{1,2,3,4,5}; 
    vector<int> no2{2,1,2,3,2,4,2,5};
    vector<int> no3{3,3,1,1,2,2,4,4,5,5};
    int no1_count=0,no2_count=0,no3_count=0;
    
    for(int i=0;i<answers.size();i++)
    {
        int i1 = i%5;
        int i2 = i%8;
        int i3 = i%10;
        if(answers[i]==no1[i1])no1_count++; //반복되는 부분만 확인하면 된다.
        if(answers[i]==no2[i2])no2_count++; //모든 정답을 배열에 삽입할 필요 없다.
        if(answers[i]==no3[i3])no3_count++;
    }
    int maxCount=max(no1_count,max(no2_count,no3_count)); max()를 통해 최댓값을 구할 수 있다.
    if(maxCount==no1_count)answer.push_back(1);
    if(maxCount==no2_count)answer.push_back(2);
    if(maxCount==no3_count)answer.push_back(3);
    
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.96MB)
테스트 2 〉	통과 (0.01ms, 3.96MB)
테스트 3 〉	통과 (0.01ms, 3.96MB)
테스트 4 〉	통과 (0.01ms, 3.96MB)
테스트 5 〉	통과 (0.01ms, 3.95MB)
테스트 6 〉	통과 (0.01ms, 3.97MB)
테스트 7 〉	통과 (0.03ms, 3.96MB)
테스트 8 〉	통과 (0.02ms, 3.96MB)
테스트 9 〉	통과 (0.06ms, 3.97MB)
테스트 10 〉통과 (0.03ms, 3.95MB)
테스트 11 〉통과 (0.05ms, 3.96MB)
테스트 12 〉통과 (0.05ms, 4.02MB)
테스트 13 〉통과 (0.01ms, 3.95MB)
테스트 14 〉통과 (0.05ms, 3.95MB)*/