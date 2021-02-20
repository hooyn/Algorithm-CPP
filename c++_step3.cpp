#include<iostream>
using namespace std;
void print_string(char **pptr, int n) // ( * )
{
for (int i = 0; i < n; i++)
{
cout << pptr[i] << "\n"; // *(pptr+i)
}
}
//포인터 배열을 매개변수로 사용하는 함수
/*-----------------------------------------------------------------------------------*/
void main()
{
	int a[5] = { 80, 90, 100, 60, 75 };
	int total=0;
	double avg;
	for (int i = 0; i < 5; i++)
	{
	total += a[i];
	}
	avg = (double)total / 5;
	cout << "배열 데이터의 총합 = " << total << endl;
	cout << "배열 데이터의 평균 = " << avg << endl;
	//배열의 총합 평균

	int a[5];
	int max=0;

	cout << "정수형 데이터를 5개 입력하라"<<endl;
	for (int i = 0; i < 5; i++)
	{
	cout << "a [ " << i+1 << " ] = ";
	cin >> a[i];
	}
	for (int i = 0; i < 5; i++)
	{
	if (max < a[i])
	{
	max = a[i];
	}
	}
	cout << "최댓값 : " << max;
	//배열을 이용한 최댓값 구하기
/*-----------------------------------------------------------------------------------*/
	int a[3][4] = { {10,20,30,40},{20,40,60,80,},{10,30,50,70} };
	int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int c[3][4];
	for (int i = 0; i < 3; i++)
	{
	for (int j = 0; j < 4; j++)
	{
	c[i][j] = a[i][j] + b[i][j];
	}
	}
	for (int i = 0; i < 3; i++)
	{
	for (int j = 0; j < 4; j++)
	{
	cout << c[i][j] << "\t";
	}
	cout << endl;
	}
	//두 행렬의 합 출력
/*-----------------------------------------------------------------------------------*/
	int data[3][5] = {};
	for (int i = 0; i < 3; i++) //data배열 데이터 입력
	{
	cout << i+1 << " 번째 학생의 점수를 입력하세요." << endl;
	for (int j = 1; j < 4; j++)
	{
	data[i][0] = i + 1;
	cout << j << " 번째 과목 => ";
	cin >> data[i][j];
	}
	}
	for (int i = 0; i < 3; i++)
	{
	for (int j = 1; j < 4; j++)
	{
	data[i][4] += data[i][j];
	}
	}
	cout << "\t\t** 출 력 결 과 **" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "\t번호\t국어\t영어\t수학\t총점\t" << endl;
	cout << "--------------------------------------------------------" << endl;
	for (int i = 0; i < 3; i++)
	{
	for (int j = 0; j < 5; j++)
	{
	cout << "\t" << data[i][j];
	}
	cout << endl;
	}
	//2차원 배열이용해서 성적 구하기
	//배열 a의 주소값 = a[0]의 주소값과 같고 배열 a+1의 주소값 = a[1]의 주소값과 같다. 즉 a=&a[0] a+1=&a[1]
	//a[0]=10 일때 *a = 10이고 a[1]=20 일때 *a+1=11 이고 *(a+1)=20 이다 ( * )
	//p[0][0]이라는 표현은 *(p[0]+0)과 동일한 표현 *(*(a+0)+0) = p[0][0]
/*-----------------------------------------------------------------------------------*/
	int a[10] = {1,1,};
	for (int i = 2; i < 10; i++)
	{
	a[i] = a[i - 2] + a[i - 1];
	}
	for (int i = 0; i < 10; i++)
	{
	cout << "\t" << a[i];
	}
	//피보나치 수열
/*-----------------------------------------------------------------------------------*/
	int i, j, k=0;
	int data[5][3] = { {90,75,50},
	{40,85,60},
	{50,50,40},
	{60,60,50},
	{80,80,70} };
	int total[3] = {};
	cout << "\t과목1\t과목2\t과목3" << endl;
	for (i = 0; i < 3; i++)
	{
	int to = 0;
	for (j = 0; j < 5; j++)
	{
	to += *(*(data+j)+i);
	}
	total[k] = to;
	k++;
	}
	cout << "총점\t";
	for (i = 0; i < 3; i++)
	{
	cout << total[i] << "\t";
	}
	//포인터 연산자로 2차배열 출력 *(*(p+r)+c)
/*-----------------------------------------------------------------------------------*/
	char str[256] = "Apple";
	char *ptr = "Banana";
	cout << " str = " << (int)str << " \t str = " << str << endl;
	cout << " str = " << (int)ptr << " \t str = " << ptr << endl;
	//ptr="Grapes" 문자배열은 다른 문자열 상수를 대입하지 못한다
	ptr = "Orange";
	cout << "Changed str = " << (int)ptr << " \t str = " << ptr << endl;
	//포인터 변수에 문자열 대입

	char *ptr[3] = { "rabbit", "tiger", "cow" };
	print_string(ptr, 3);
	//포인터 배열을 매개변수로 사용하는 함수
	//pptr[i] = *(pptr+i)
/*-----------------------------------------------------------------------------------*/
}
#include<iostream>
using namespace std;
void(*pf)(void);
void one()
{
	cout << "  one" << endl;
}
void two()
{
	cout << "  two" << endl;
}
void three()
{
	cout << "  three" << endl;
}
void main()
{
	int num;
	while (1)
	{
		cout << "0부터 3사이의 숫자를 입력하되 끝내려면 0 입력 ==> ";
		cin >> num;
		switch (num)
		{
		case 0: cout << "    종료" << endl;
			return;
		case 1: pf = one;
			break;
		case 2: pf = two;
			break;
		case 3: pf = three;
			break;
		}
		pf();
	}
}

