#include<iostream>
#include<cstring> //strlen()함수를 사용하기 위한 헤더파일
using namespace std;
void main()
{
	/*char abc;
	cout << "어떤 소문자를 입력하세요";
	cin >> abc;
	cout << (char)((int)abc - 32) << "\n";
	char ABC;
	cout << "어떤 대문자를 입력하세요";
	cin >> ABC;
	cout << (char)((int)ABC + 32) << "\n";*/ 
	//대소문자 변환

	/*char flower1[5] = "rose";
	char flower2[6] = { 'l', 'i', 'l', 'a', 'c' };
	char flower3[] = "tulip";

	cout << flower1 << "\n";
	cout << flower2 << "\n";
	cout << flower3 << "\n";

	cout << strlen(flower1) << " <- flower1의 문자열 개수" << "\n";
	cout << sizeof(flower3) << " <- flower3의 배열의 크기" << "\n";*/
	//strlen(), sizeof()

	/*int a, b, c;
	int max;

	cout << " 세 수를 입력하세요 : ";
	cin >> a >> b >> c;

	max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	cout << "가장 큰 수는 : " << max << "\n";*/
	//세 수중에서 가장 큰 수 출력

	/*int a;
	cout << "정수 값을 입력하세요. ";
	cin >> a;
	a = (a < 0) ? a = -a : a;
	cout << "절댓값 = " << a << "\n";*/
	//절댓값 구하는 프로그램( 조건식?A:B 사용 )

	/*int com, math, cleng, eng;
	int total = 0;
	double avg = 0;
	cout << "컴퓨터 개론 점수 입력 -> ";
	cin >> com;
	cout << "일반 수학 점수 입력 -> ";
	cin >> math;
	cout << "C 언어 점수 입력 -> ";
	cin >> cleng;
	cout << "영어 점수 입력 -> ";
	cin >> eng;

	total = com + math + cleng + eng;
	avg = (double)total / 4.0;
	cout << "총점 : " << total << "\n";
	cout << "평균 : " << avg << "\n";*/
	//과목들의 총점과 평균 구하기

	/*double PI = 3.14;
	double r;
	double dle;
	cout << "반지름 입력 -> ";
	cin >> r;
	dle = 2 * PI*r;
pu	cout << "원의 둘레 : " << dle;*/
	//원의 둘레 계산

	/*int hour, minute, second;
	int count;
	cout << "초를 입력하세요-> ";
	cin >> count;
	hour = count / 3600;
	minute = (count % 3600) / 60;
	second = (count % 3600) % 60;
	cout << count << "초는 " << hour << "시간 " << minute << "분 " << second << "초이다.";*/
	//초를 입력받아 시,분,초 출력

	/*double cm;
	int fit;
	double inti;
	cout << "cm를 입력하세요 ->";
	cin >> cm;
	fit = cm / (12 * 2.54);
	inti = (cm - ((double)fit * 12 * 2.54)) / 2.54;
	cout << cm << "cm는 " << fit << "피트 " << inti << "인치이다.";*/
	//cm를 피트,인치로 변환해서 출력

	/*int a;
	cout << "정수값을 입력하세요 -> ";
	cin >> a;
	if (a < 0)
	{
		a = -a;
		cout << "입력한 정수값 " << -a << "의 절댓값은 " << a;
	}
	else
		cout << "입력한 정수값 " << a << "의 절댓값은 " << a;*/
	//절댓값 구하는 프로그램( it문 사용 )

	/*int score;
	char grade;
	cout << "점수를 입력하세요 -> ";
	cin >> score;
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	cout << "입력한 점수 " << score << "은 " << grade << "학점입니다.";*/
	//점수를 입력받아 학점을 출력 ( if문 사용 )

	/*int score;
	char grade;
	cout << "점수를 입력하세요->";
	cin >> score;
	switch (score / 10) {
		case 10: grade = 'A'; break;
		case 9: grade = 'A'; break;
		case 8: grade = 'B'; break;
		case 7: grade = 'C'; break;
		case 6: grade = 'D'; break;
		default: grade = 'F';
	}
	cout << "입력한 점수 " << score << "은 " << grade << "학점입니다.";*/
	//점수를 입력받아 학점을 출력 ( Switch문 사용 )
}