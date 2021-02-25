/*-----------------------------------------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;

struct insa {
	char name[20];
	int age;
	char address[20];
};
void main()
{
	insa man;
	ifstream fin;

	fin.open("C:\\Users\\hooyn\\source\\repos\\20210112\\insa.dat");

	if (fin.fail()) {
		cout << "파일 오픈에 실패했습니다." << endl;
		return;
	}
	fin >> man.name >> man.age >> man.address;
	cout << man.name << " " << man.age << " " << man.address << endl;
	fin.close();
}
/*-----------------------------------------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	char ch;
	ofstream fout;
	fout.open("test.dat");
	while (cin.get(ch))
		fout.put(ch);
	fout.close();
}
/*-----------------------------------------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	char ch;
	ifstream fin;
	fin.open("C:\\Users\\hooyn\\source\\repos\\20210112\\insa.dat");
	if (fin.fail())
	{
		cout << "파일 오픈에 실패했습니다." << endl;
		return;
	}
	while (fin.get(ch)) {
		cout.put(ch);
	}
	fin.close();
}
/*-----------------------------------------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;

struct insa {
	char name[20];
	int age;
	char address[20];
};
void main()
{
	insa man[5] = {
		{"성윤정", 20, "서울"},
		{"전혜영", 20, "부산"},
		{"이은정", 20, "대구"},
		{"오경주", 20, "서울"},
		{"체제원", 20, "마산"}
	};
	ofstream fout;
	fout.open("insa.dat");
	for (int i = 0; i < 5; i++)
	{
		fout << man[i].name << " " << man[i].age << " " << man[i].address << endl;
		fout.close();
	}
}
/*-----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
template<typename T>
T myabs(T num)
{
	if (num < 0)
		num = -num;
	return num;
}
void main()
{
	int a = -10;
	cout << myabs(a) << endl;
	double b = -3.4;
	cout << myabs(b) << endl;
	long int c = -20L;
	cout << myabs(c) << endl;
}
/*-----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

template <typename DATATYPE>
class Test {
	DATATYPE value;
public:
	Test(DATATYPE v);
	void SetValue(DATATYPE v);
	DATATYPE GetValue();
};

template <typename DATATYPE>
Test<DATATYPE>::Test(DATATYPE v)
{
	value = v;
}

template <typename DATATYPE>
void Test<DATATYPE>::SetValue(DATATYPE v)
{
	value = v;
}

template <typename DATATYPE>
DATATYPE Test<DATATYPE>::GetValue()
{
	return value;
}

void main()
{
	Test<int> obj1(10);
	obj1.SetValue(10);
	cout << obj1.GetValue() << endl;

	Test<double> obj2(5.7);
	cout << obj2.GetValue() << endl;
}
/*-----------------------------------------------------------------------------------*/
