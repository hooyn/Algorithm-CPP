//문제 설명
//배열 array의 i번째 숫자부터 j번째 숫자까지 자르고 정렬했을 때, 
//k번째에 있는 수를 구하려 합니다.
//예를 들어 array가 [1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3이라면

//array의 2번째부터 5번째까지 자르면 [5, 2, 6, 3]입니다.
//1에서 나온 배열을 정렬하면 [2, 3, 5, 6]입니다.
//2에서 나온 배열의 3번째 숫자는 5입니다.
//배열 array, [i, j, k]를 원소로 가진 2차원 배열 commands가 
//매개변수로 주어질 때, commands의 모든 원소에 대해 앞서 
//설명한 연산을 적용했을 때 나온 결과를 배열에 담아 return 하도록 
//solution 함수를 작성해주세요.

//제한사항
//array의 길이는 1 이상 100 이하입니다.
//array의 각 원소는 1 이상 100 이하입니다.
//commands의 길이는 1 이상 50 이하입니다.
//commands의 각 원소는 길이가 3입니다.

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    //vector<int> temp; (temp를 여기다가 생성하면 초기화가 되지 않아서 답이 계속 저장된다.)
    for(int i=0;i<commands.size();i++)
    {
        vector<int> temp={}; //temp를 초기화해주는 과정이 필요했다.
        int start = commands[i][0];
        int endd = commands[i][1];
        int count = commands[i][2];
        for(int i=start-1;i<endd;i++)
        {
            temp.push_back(array[i]);
        }
        sort(temp.begin(),temp.end());
        answer.push_back(temp[count-1]);
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.79MB)
테스트 2 〉	통과 (0.01ms, 3.98MB)
테스트 3 〉	통과 (0.01ms, 3.97MB)
테스트 4 〉	통과 (0.01ms, 3.97MB)
테스트 5 〉	통과 (0.01ms, 3.98MB)
테스트 6 〉	통과 (0.01ms, 3.97MB)
테스트 7 〉	통과 (0.01ms, 3.98MB)*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;

    for(int i = 0; i < commands.size(); i++) {
        temp = array;
        sort(temp.begin() + commands[i][0] - 1, temp.begin() + commands[i][1]);
        //temp를 array자체로 만든 후 필요한 범위에서 sort를 하고
        answer.push_back(temp[commands[i][0] + commands[i][2]-2]);
        //바로 answer에 저장
    }

    return answer;
}