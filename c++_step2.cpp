#include<iostream>
using namespace std;
void sum(int x, int y)
{
	cout << x << "+" << y << "=" << x + y << endl;
}
//함수 정의
/*-----------------------------------------------------------------------------------*/
void swap(int *pa, int *pb)
{
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
}
//포인터를 이용한 swap함수 정의
/*-----------------------------------------------------------------------------------*/
void main()
{
	int i;
	int sum = 0;
	for (i = 1; i <= 10; i++) 
	{
		sum += i;
		cout << "i = " << i << " sum = " << sum<<"\n";
	}
	cout << "최종 sum = " << sum<<"\n";
	//1~5 합 출력
/*-----------------------------------------------------------------------------------*/
	int i, x;
	int sum = 0;
	cout << "x값 까지의 홀수 값의 합 : x값을 입력해주세요 -> ";
	cin >> x;
	for (i = 0; i <= x; i++)
	{
		if (i % 2 == 1)
		{
			sum += i;
			cout << "i = " << i << "sum = " << sum << "\n";
		}
	}
	cout << "0 ~ " << x << "까지의 홀수의 합은 " << sum << "\n";
	//0~x 까지의 홀수의 합 출력
/*-----------------------------------------------------------------------------------*/
	int i=0;
	int sum = 0;
	while (i <= 10)
	{
		sum += i;
		cout << "i = " << i << " sum = " << sum << endl;
		i++;
	}
	//while을 이용한 0~10 합
/*-----------------------------------------------------------------------------------*/
	int i, x;
	int sum = 0;
	cout << "특정 x를 최초로 넘었을 때의 자연수를 구하겠습니다. x = " << endl;
	cin >> x;
	for (i = 0; ; i++)
	{
		sum += i;
		if (sum > x)
		{
			cout << x << "를 최초로 넘었을 때의 자연수는 " << i << endl;
			break;
		}
	}
	cout << "0~" << x << "까지의 자연수들의 합은 " << sum;
	//특정 x까지 자연수의 합 구하기
/*-----------------------------------------------------------------------------------*/
	int i = 0;
	while (true)
	{
		cout << "\t" << ++i;
		if (i % 10 == 0)
			goto exit_while;
	}
	exit_while:
		cout << "\n >> ------------------------------ The End ------------------------------ << \n";
	//while에서 사용하는 goto문 예제(=break문)
/*-----------------------------------------------------------------------------------*/
	int x, y;
	int map;
	while(true)
	{
		cout << "2차원 공간상의 좌표값을 입력 >> ";
		cin >> x >> y;
		if (x > 0 && y > 0)
			map = 1;
		else if (x < 0 && y>0)
			map = 2;
		else if (x < 0 && y < 0)
			map = 3;
		else if (x == 0 && y == 0)
			break;
		else
			map = 4;
		cout << "2차원 공간상의 좌표는 " << map << "사분면에 위치한다."<<endl;
	}
	//xy좌표가 주어졌을 때 그 좌표가 속하는 사분면 출력
/*-----------------------------------------------------------------------------------*/
	char a;
	cout << "문자를입력하세요->";
	cin >> a;
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) {
		cout << " 문자\n";
	}
	else if (a >= 48 && a <= 57) {
		cout << " 숫자\n";
	}
	else {
		cout << "기타문자\n";
	}
	//65~90소문자 97~122대문자 48~57숫자
/*-----------------------------------------------------------------------------------*/
	int a, b, c;
	int max, mid, min;
	cout << "세 개의 숫자를 입력하세요";
	cin >> a >> b >> c;
	if (a > b&&a > c)
	{
		max = a;
		if (b > c)
		{
			mid = b;
			min = c;
		}
		else
		{
			mid = c;
			min = b;
		}	
	}
	else if (b > a&&b > c)
	{
		max = b;
		if (a > c)
		{
			mid = a;
			min = c;
		}
		else
		{
			mid = c;
			min = a;
		}
	}
	else
	{
		max = c;
		if (b > a)
		{
			mid = b;
			min = a;
		}
		else
		{
			mid = a;
			min = b;
		}
	}
	cout << "세 수를 순서 대로 나열을 했을 때 " << max << " " << mid << " " << min << endl;
	//세 수를 입력받고 순서대로 나열 ( * )
/*-----------------------------------------------------------------------------------*/
	int i, j;
	for (i = 10; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//역삼각형 출력
/*-----------------------------------------------------------------------------------*/
	int i, j, z;
	int sum = 1;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= -1 * i + 6; j++)
		{
			cout << " ";
		}
		for (z = 1; z <= 2 * i - 1; z++)
		{
			cout << sum++;
		}
		cout << endl;
	}
	//정삼각형 모양으로 숫자 배치 ( * )
/*-----------------------------------------------------------------------------------*/
	int i;
	double PI = 0;
	for (i = 1; i <= 1000000 ; i++)
	{
		if (i % 2 == 1)
		{
			PI = PI + 4 / (2 * (double)i - 1);
		}
		else
		{
			PI = PI - 4 / (2 * (double)i - 1);
		}
	}
	cout << "원주율은 " << PI;
	//원주율 구하는 공식
/*-----------------------------------------------------------------------------------*/
	int a = 10;
	int b = 20;
	sum(a, b);
	sum(4, 5);
	//함수 호출
/*-----------------------------------------------------------------------------------*/
	// a=10, &a=0017F768, p=0017F768, *p=10, *&a=10
/*-----------------------------------------------------------------------------------*/
	int a = 10;
	int b = 20;
	cout << "a=" << a << " b=" << b << endl;
	swap(a, b);
	cout << "swap() 호출 후 a=" << a << " b=" << b << endl;
	//swap함수 호출
/*-----------------------------------------------------------------------------------*/
	int a = 10;
	int &b = a; //참조 변수 선언 ***
	cout << " a = " << a << " b = " << b << endl;
	b += 200;
	cout << " b = " << b << endl;
	cout << " a = " << a << endl;
	//참조 변수 선언 ( * )
/*-----------------------------------------------------------------------------------*/
}