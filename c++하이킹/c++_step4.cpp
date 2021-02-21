
#include<iostream>
using namespace std;
struct sungjuck {
	char no[8];
	char name[16];
	int kor, eng, mat, tot;
	double ave;
	char level;
	int grade;
};
typedef struct sungjuck SJ; //sungjuck 구조체의 이름을 간단하게 SJ로 변경 main함수에서 SJ로 구조체 선언가능
enum COLOR { RED = -1, GREEN, BLUE = 35, WHITE, BLACK = 2 };
//열거형 COLOR 선언
union u_data {
	char ch;
	int num;
}; //공용체 정의
struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};
// namecard 구조체 생성
void structPrn(namecard temp)
{
	cout << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email << endl;
}
//구조체를 매개변수로 사용하는 함수
void structInput(namecard *pTemp)
{
	cout << "이름을 입력하세요=>";
	cin >> pTemp->name;
	cout << "직업을 입력하세요=>";
	cin >> pTemp->job;
	cout << "연락처를 입력하세요=>";
	cin >> pTemp->tel;
	cout << "이메일을 입력하세요=>";
	cin >> pTemp->email;
}
//구조체 포인터를 매개변수로 사용하는 함수 생성
void main()
{
	struct namecard man;
	cout << " 이름을 입력하세요=>";
	cin >> man.name;
	cout << " 직업을 입력하세요=>";
	cin >> man.job;
	cout << " 연락처를 입력하세요=>";
	cin >> man.tel;
	cout << " 이메일을 입력하세요=>";
	cin >> man.email;

	cout << "\n 입력받은 데이터를 출력합니다. ";
	cout << "\n 이름 \t 직업 \t 연락처 \t 이메일 ";
	cout << "\n =====================================";
	cout << "\n " << man.name << "\t " << man.job << "\t " << man.tel << "\t " << man.email;
	cout << "\n =====================================";
	cout << "\n sizeof(namecard) => " << sizeof(namecard);
	cout << "\t 구조체 변수의 메모리 사이즈 => " << sizeof(namecard) << "\n";*/
	//구조체 활용해서 이름,직업,연락처,이메일 출력

	namecard x = { "김주현", "MCSE전문강사", "418-9876", "freentour@naver.com" };
	namecard y = { "박혜경", "웹마스터", "551-6986", "hk@naver.com" };
	namecard z = { "김동식", "기획A팀대리", "318-3961", "ds@naver.com" };

	cout << "  이름 \t 직업 \t\t 연락처 \t   이메일" << endl;
	cout << "===========================================================" << endl;
	cout << x.name << "\t" << x.job << "\t" << x.tel << "\t" << x.email << endl;
	cout << y.name << "\t" << y.job << "\t" << y.tel << "\t" << y.email << endl;
	cout << z.name << "\t" << z.job << "\t" << z.tel << "\t" << z.email << endl;
	cout << "===========================================================" << endl;
	//구조체 초기화

	namecard x = { "정호윤", "대학생", "3364-2602", "hoyun_inds@naver.com" };
	namecard y;

	y = x;

	cout << "namecard y = ";
	cout << y.name << "\t" << y.job << "\t" << y.tel << "\t" << y.email << "\t" << endl;
	//구조체 복사 y=x (대입 가능)

	namecard x = { "김주현", "MCSE전문강사", "418-9876", "freentour@naver.com" };
	namecard y = { "박혜경", "웹마스터", "551-6986", "hk@naver.com" };
	namecard z = { "김동식", "기획A팀대리", "318-3961", "ds@naver.com" };

	cout << "  이름 \t 직업 \t\t 연락처 \t   이메일" << endl;
	cout << "===========================================================" << endl;
	structPrn(x);
	structPrn(y);
	structPrn(z);
	cout << "===========================================================" << endl;
	//구조체를 매개변수로 하는 함수 적용

	namecard jung = { "정호윤", "대학생", "3364-2602", "hoyun_inds@naver.com" };
	namecard *p;
	p = &jung;
	cout << "p->name : " << p->name << "p->job : " << p->job << "p->tel : " << p->tel << "p->email : " << p->email;
	//p->name or (*p).name 둘다 같은 의미
	//구조체 포인터 관계

	namecard x, y, z;

	structInput(&x);
	structInput(&y);
	structInput(&z);

	cout << "  이름 \t 직업 \t\t 연락처 \t   이메일" << endl;
	cout << "===========================================================" << endl;
	structPrn(x);
	structPrn(y);
	structPrn(z);
	cout << "===========================================================" << endl;
	//구조체 포인터를 매개변수로 사용하는 함수 작성

	namecard x[3] = {
		{ "김주현", "MCSE전문강사", "418-9876", "freentour@naver.com" },
		{ "박혜경", "웹마스터", "551-6986", "hk@naver.com" },
		{ "김동식", "기획A팀대리", "318-3961", "ds@naver.com" }
	};
	cout << "  이름 \t 직업 \t\t 연락처 \t   이메일" << endl;
	cout << "===========================================================" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << x[i].name << "\t" << x[i].job << "\t" << x[i].tel << "\t" << x[i].email << endl;
	}
	cout << "===========================================================" << endl;
	//구조체배열 사용하기

	u_data test;
	test.num = 0x12345678;
	cout << " test.ch = " << hex << (int)test.ch << "\n";
	cout << " test.num = " << hex << test.num << "\n";
	//공용체 사용

	enum COLOR test;
	cout << " RED		= " << RED << endl;
	cout << " GREEN		= " << GREEN << endl;
	cout << " BLUE		= " << BLUE << endl;
	cout << " WHITE		= " << WHITE << endl;
	cout << " BLACK		= " << BLACK << endl;

	test = BLUE;
	cout << " test		= " << test << endl << endl;

	switch (test) {
	case RED :
		cout << "빨간색 선택" << endl;
		break;
	case GREEN:
		cout << "초록색 선택" << endl;
		break;
	case BLUE:
		cout << "파랑색 선택" << endl;
		break;
	case WHITE:
		cout << "하얀색 선택" << endl;
		break;
	case BLACK:
		cout << "검은색 선택" << endl;
		break;
	}
	//열거 상수에 수치 정하기

	int inLIne;

	SJ s = { "2017360","정호윤", 95,90,75 };
	cout << " 학번 \t 이름 \t 국어 \t 영어 \t 수학\n";
	cout << "-------------------------------------------------------\n";
	cout << s.no << "\t" << s.name << "\t" << s.kor << "\t" << s.eng << "\t" << s.mat << "\n";
	//typedef를 사용해서 구조체를 간단하게 나타내고 활용 /60

	//#define PI = 3.141592 #define의 반대는 #undef 설정한 변수를 취소
	//const 자료형 변수명 = 초깃값; => 상수를 설정하는 const키워드
}
#include<iostream>
using namespace std;
class Complex //Complex클래스 정의
{
private :
	int real; //멤버변수
	int image;

public :
	Complex(int r=0, int i=0); // 생성자 선언 후 초기화
	~Complex(); //소멸자 선언 -> 소멸자는 객체가 소멸될 때 호출된다. 소멸자는 아무 일도 하지 않기 때문에 무슨 작업을 해야될 때 직접 명시해주어야 한다.
	void SetComplex(); //Complex클래스의 메소드
	void ShowComplex() const;
	void SetReal(int r);
	void SetImage(int i);
};
Complex::Complex(int r, int i) //생성자 생성
{
	real = r;
	imamge = i;
}
Complex::~Complex() //소멸자는 ~를 붙여주면 되고 명시해주지 않을 시 아무 작업도 하지 않는다.
{
	cout << "소멸자가 호출된다 \n";
}


void Complex::SetComplex() //클래스의 멤버변수의 값을 설정하기 위한 public 함수
{
	real = 2;
	image = 5;
}
void Complex::ShowComplex() const // const는 함수내부에서 멤버변수 값이 변경되지 말아야하므로 예약어 const를 함수뒤에 기술해서 const함수로 정의한다.
{
	cout << "( " << real << " + " << image << "i )" << endl;
}
void Complex::SetReal(int r)
{
	real = r; //private한 변수에 접근하기 위한 public 함수
}
void Complex::SetImage(int i)
{
	image = i; //private한 변수에 접근하기 위한 public 함수
}
void main()
{
	Complex x, y; //Complex객체 x,y 생성 
	//x.real = 5; real은 접근지정자가 private이기 때문에 다른 클래스에서 직접적으로 접근하지 못한다. 
	x.SetComplex();
	x.SetReal(10);
	x.SetImage(100);
	x.ShowComplex();
	y.SetComplex();
	y.ShowComplex();
}
int abs(int num)
{
	if (num < 0)
		num = -num;
	return num;
}
double abs(double num)
{
	if (num < 0)
		num = -num;
	return num;
}
long int abs(long int num)
{
	if (num < 0)
		num = -num;
	return num;
}
void main()
{
	int a = -10;
	cout << a << "의 절댓값은 => " << abs(a) << endl;

	double b = -3.4;
	cout << b << "의 절댓값은 => " << abs(b) << endl;

	long int c = -20L;
	cout << c << "의 절댓값은 => " << abs(c) << endl;
}