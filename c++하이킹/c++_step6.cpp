/*-----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class Calc
{
protected: //상속관계에 있는 클래스만 접근 가능
	int a;
	int b;
	int c;
public:
	//void Init(int new_A, int new_B);
	Calc(int new_A, int new_B);
	Calc(); //기본생성자 명시
	void Prn();
};
/*void Calc::Init(int new_A, int new_B)
{
	a = new_A;
	b = new_B;
	c = 0;
}*/
Calc::Calc() //기본생성자 명시
{
	a = 0;
	b = 0;
	c = 0;
}
Calc::Calc(int new_A, int new_B)
{
	a = new_A;
	b = new_B;
	c = 0;
}
void Calc::Prn()
{
	cout << a << "\t" << b << "\t" << c << endl;
}

class Add : public Calc //public으로 상속받으면 기반클래스에 정의되어있는 멤버들의 성격이 그대로 유지
{
public:
	Add(int new_A, int new_B);
	void Sum();
};
Add::Add(int new_A, int new_B) : Calc(new_A, new_B)
{
	a = new_A;
	b = new_B;
	c = 0;
}
void Add::Sum()
{
	c = a + b;
}
class Mul : public Calc
{
public:
	Mul(int new_A, int new_B);
	void Gob();
};
Mul::Mul(int new_A, int new_B) : Calc(new_A, new_B)
{
	a = new_A;
	b = new_B;
	c = 0;
}
void Mul::Gob()
{
	c = a * b;
}
void main()
{
	Add x(3,5);
	x.Sum();
	Mul y(2,7);
	y.Gob();
	x.Prn();
	y.Prn();
}
/*-----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class Calc {
protected:
	int a;
	int b;
public:
	Calc();
	Calc(int new_A, int new_B);
	virtual void Prn(); // 기반 클래스에서 가상함수 선언 ***
};
Calc::Calc()
{
	a = 0;
	b = 0;
}
Calc::Calc(int new_A, int new_B)
{
	a = new_A;
	b = new_B;
}
void Calc::Prn()
{
	cout << "---Calc::CalcPrn---" << endl;
	cout << a << "\t" << b << endl;
}
class Add : public Calc {
protected:
	int c;
public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
	void AddPrn();
};
Add::Add() :Calc()
{
}
Add::Add(int new_A, int new_B) : Calc(new_A, new_B)
{
	a = new_A;
	b = new_B;
	c = 0;
}
void Add::Sum()
{
	c = a + b;
}
void Add::AddPrn()
{
	cout << "---Add::AddPrn---" << endl;
	cout << a << " + " << b << " = " << c << endl;
}
void main()
{
	Calc* CalcPtr; //Calc클래스내 메소드 한정 사용가능 그래서 CalcPtr->Sum()은 사용 불가!!
	CalcPtr = new Add(3, 5);//업 캐스팅
	CalcPtr->Prn();

	Add* AddPtr; //Add와 Calc를 포함한 메소드 사용가능
	AddPtr = (Add*)CalcPtr; //다운 캐스팅
	AddPtr->Prn();
	AddPtr->Sum();
	AddPtr->AddPrn();
}
/*-----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class Shape
{
protected:
	double area;
public:
	virtual void Draw() = 0; //완전 가상함수 -> 함수의 정의 없이 함수의 유형만을 기반 클래스에 제시
	virtual double GetSize() = 0;
};

class Rect : public Shape
{
protected:
	int width;
	int height;
public:
	Rect(int w = 0, int h = 0);
	void Draw();	  //오버라이딩
	double GetSize(); //오버라이딩
};
Rect::Rect(int w, int h)
{
	width = w;
	height = h;
}
void Rect::Draw()//완전 가상함수 오버라이딩
{
	cout << "사각형을 그린다." << endl; 
}
double Rect::GetSize() //완전 가상함수 오버라이딩
{
	area = width * height; 
	return area;
}

class Circle : public Shape
{
protected:
	int radius;
public:
	Circle(int r = 0);
	void Draw();	  //오버라이딩
	double GetSize(); //오버라이딩
};
Circle::Circle(int r)
{
	radius = r;
}
void Circle::Draw() //오버라이딩
{
	cout << "원을 그린다." << endl;
}
double Circle::GetSize() //오버라이딩
{
	area = radius * radius * 3.14;
	return area;
}

void main()
{
	Rect recObj(8, 10);
	recObj.Draw();
	cout << "사각형의 면적 : " << recObj.GetSize() << endl;

	Circle cirObj(5);
	cirObj.Draw();
	cout << "원의 면적 : " << cirObj.GetSize() << endl;
}
/*-----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class Person
{
protected:
	string name;
	string address;
	string phone;
public:
	Person();
	Person(string name, string address, string phone);
	virtual void print() = 0;
};
Person::Person() {};
Person::Person(string name, string address, string phone)
{
	this->name = name;
	this->address = address;
	this->phone = phone;
}

class Customer : public Person
{
protected:
	string id;
	int point;
public:
	Customer();
	Customer(string name, string address, string phone, string id, int point);
	void print(); //void Customer::print()로 오버라이딩
};
Customer::Customer() {};
Customer::Customer(string name, string address, string phone, string id, int point)
{
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->id = id;
	this->point = point;
}
void Customer::print()
{
	cout << "이름\t: " << this->name << "\n"<<"주소\t: " << this->address << "\n" << "휴대폰번호\t: " << this->phone << "\n"
		<< "아이디\t: " << this->id << "\n" << "포인트 점수\t: " << this->point << "\n";
}
void main()
{
	Customer customer("손동복", "잠실", "01033642602", "kiko02", 0);
	customer.print();
}
/*-----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class animal
{
protected:
	int age;
	int weight;
public:
	animal();
	animal(int age, int weight);
	void sleep();
	void eat();
	virtual void speak() = 0;
	void print();
};
animal::animal() {};
animal::animal(int age, int weight)
{
	this->age = age;
	this->weight = weight;
}
void animal::sleep()
{
	cout << "\tsleeping~zzz" << endl;
}
void animal::eat()
{
	cout << "\teating~" << endl;
}
void animal::print()
{
	cout << "나이 : " << age << "\n" << "몸무게 : " << weight << "\n";
}

class dog : public animal
{
protected:
	string breed;
public:
	dog(int age, int weight, string breed);
	void speak();
	void print();
};
dog::dog(int age, int weight, string breed)
{
	this->age = age;
	this->weight = weight;
	this->breed = breed;
}
void dog::print()
{
	cout << "나이 : " << age << "\n" << "몸무게 : " << weight << "\n" << "품종 : " << breed << "\n";
}
void dog::speak()
{
	cout << "\tbarkbark\n";
}

class bird : public animal
{
public:
	bird(int age, int weight);
	void speak();
};
bird::bird(int age, int weight)
{
	this->age = age;
	this->weight = weight;
}
void bird::speak()
{
	cout << "\tjackjack\n";
}

void main()
{
	dog dog(3, 7, "말티즈");
	dog.print();
	dog.sleep();
	dog.speak();
	dog.eat();
	cout << "-------------------------------------\n";
	bird bird(1, 3);
	bird.print();
	bird.sleep();
	bird.speak();
	bird.eat();
}
/*-----------------------------------------------------------------------------------*/