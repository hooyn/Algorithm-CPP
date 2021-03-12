//문제 설명
//행렬의 덧셈은 행과 열의 크기가 같은 두 행렬의 같은 행, 
//같은 열의 값을 서로 더한 결과가 됩니다. 2개의 행렬 arr1과 arr2를 입력받아, 
//행렬 덧셈의 결과를 반환하는 함수, solution을 완성해주세요.

//제한 조건
//행렬 arr1, arr2의 행과 열의 길이는 500을 넘지 않습니다.

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i = 0 ; i < arr1.size() ; i++){
        vector<int> temp; // 행렬을 더한 값을 저장하기 위한 변수!!
        for(int j = 0 ; j < arr1[0].size() ; j++){
            temp.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(temp); //벡터를 벡터안에 저장!!
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.02ms, 3.97MB)
테스트 2 〉	통과 (0.17ms, 3.92MB)
테스트 3 〉	통과 (0.50ms, 4.16MB)
테스트 4 〉	통과 (0.27ms, 3.96MB)
테스트 5 〉	통과 (0.12ms, 3.96MB)
테스트 6 〉	통과 (0.27ms, 3.98MB)
테스트 7 〉	통과 (0.04ms, 3.98MB)
테스트 8 〉	통과 (0.16ms, 3.92MB)
테스트 9 〉	통과 (1.97ms, 5.52MB)
테스트 10 〉통과 (1.60ms, 5.33MB)
테스트 11 〉통과 (0.94ms, 4.68MB)
테스트 12 〉통과 (1.29ms, 4.96MB)
테스트 13 〉통과 (0.88ms, 4.71MB)
테스트 14 〉통과 (1.26ms, 5.27MB)
테스트 15 〉통과 (1.38ms, 5.28MB)
테스트 16 〉통과 (1.27ms, 5.1MB)
테스트 17 〉통과 (57.15ms, 74.9MB)*/