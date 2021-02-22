#include<iostream>
using namespace std;
class Complex //객체 생성
{
private:
	int real;
	int image;
public:
	Complex(int real = 0, int image = 0); //생성자 선언
	void ShowComplex() const;
	void SetComplex(int real, int image);
//	void CopyComplex(Complex des, Complex src);
};

Complex::Complex(int real, int image)//생성자 생성
{
	this->real = real;
	this->image = image;
}

void Complex::ShowComplex() const //메소드 오버로딩
{
	cout << "( " << this->real << " + " << this->image << "i )" << endl;
}

void Complex::SetComplex(int real, int image)
{
	this->real = real;
	this->image = image;
}

Complex CopyComplex(Complex des, Complex src)
{
	des = src;
	return des;
}

void main()
{
	Complex x(10, 20);
	Complex y;
	cout << " Object x => ";
	x.ShowComplex();
	cout << " Object y => ";
	y.ShowComplex();

	Complex* pCom; //객체 포인터를 생성
	pCom = &x; //객체 포인터가 가리키는 주소값 설정
	cout << "\n pCom->ShowComplex() =>";
	pCom->ShowComplex(); //객체 포인터 활용해서 ShowComplex()호출

	pCom = &y;
	cout << "\n pCom->ShowComplex() =>";
	pCom->ShowComplex();

	cout << endl << "--------------------------------------" << endl;
	y.SetComplex(30, 40);
	cout << " y => ";
	y.ShowComplex();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "--------------------------------------" << endl;
	Complex z1(20, 30);
	Complex z2(50, 80);
	cout << " z1 =>";
	z1.ShowComplex();
	cout << " z2 =>";
	z2.ShowComplex();
	cout << endl << "--------------------------------------" << endl;
	z2 = CopyComplex(z2, z1);
	z1.ShowComplex();
	cout << " z2 =>";
	z2.ShowComplex();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "--------------------------------------" << endl;
	Complex arr[4] = {
		Complex(2,4),Complex(4,8),Complex(8,16),Complex(16,32) };

	//for (int i = 0; i < 4; i++)
	//{
	//	arr[i].ShowComplex();
	//}

	Complex *parrCom = arr;
	parrCom->ShowComplex();
	(parrCom + 1)->ShowComplex();
	(parrCom + 2)->ShowComplex();
	(parrCom + 3)->ShowComplex();
}

using namespace std;
class Student {
private:
	int no;
	string name;
	int kor;
	int mat;
	int eng;
	int total;
	double avg;
public:
	Student(int no, string name, int kor, int mat, int eng);
	int calculate(int kor, int mat, int eng);
	void print();
};
Student::Student(int no, string name, int kor, int mat, int eng)
{
	this->no = no;
	this->name = name;
	this->kor = kor;
	this->mat = mat;
	this->eng = eng;
	this->total = calculate(kor, mat, eng);
	this->avg = calculate(kor, mat, eng) / 3.0;
}
int Student::calculate(int kor, int mat, int eng) 
{
	int total;
	total = kor + mat + eng;
	return total;
}
void Student::print() 
{
	cout << this->no << "\t\t" << this->name << "\t" << this->kor << "\t" << 
		this->mat << "\t" << this->eng << "\t" << this->total << "\t" << this->avg<<"\n";
}
void main()
{
	Student student1(1, "황순혜", 99, 80, 95);
	Student student2(2, "이민우", 60, 80, 90);
	Student student3(3, "김덕윤", 85, 70, 90);
	cout << "학생번호	이름	국어	영어	수학	총점	평균\n";
	student1.print();
	student2.print();
	student3.print();
}

#include<iostream>
using namespace std;
class Account {
private:
	string accountNum;
	string name;
	int balance;
public:
	Account(string accountNum, string name, int balance);
	void deposit(int money);
	void withdraw(int money);
	void getBalance();
	void prnAccount();
};
Account::Account(string accountNum, string name, int balance)
{
	this->accountNum = accountNum;
	this->name = name;
	this->balance = balance;
}
void Account::deposit(int money)
{
	this->balance += money;
	cout << this->accountNum << "계좌에 " << money << "원 입금되었습니다." << endl;
}
void Account::withdraw(int money)
{
	this->balance -= money;
	cout << this->accountNum << "계좌에서 " << money << "원 출금되었습니다." << endl;
}
void Account::prnAccount()
{
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "계좌번호 : " << this->accountNum << "\n계좌 소유주 이름 : " << this->name 
		<< "\n잔고 : " << this->balance << endl;
	cout << "----------------------------------------------------------------------------" << endl;
}
void Account::getBalance()
{
	cout << this->accountNum << "계좌의 현재 잔고는 " << this->balance<< "입니다." << endl;
}
void main()
{
	Account acc1("360-20-332921", "김선미", 45000);
	acc1.prnAccount();
	Account acc2("549-45-213942", "이지연", 65000);
	acc2.prnAccount();
	Account acc3("280-13-451345", "임현아", 5000);
	acc3.prnAccount();

	acc1.deposit(100000);
	acc1.withdraw(30000);
	acc2.deposit(400000);
	acc1.getBalance();
	acc2.getBalance();
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	acc1.prnAccount();
	acc2.prnAccount();
	acc3.prnAccount();
}
