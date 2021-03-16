#include<iostream>
#include<math.h>
using namespace std;
double defLine(double x1, double x2, double y1, double y2);
int main() {
	double firstx1, firstx2, firsty1, firsty2; // first line parameter
	double secondx1, secondx2, secondy1, secondy2; // second line parameter
	double firstLine, secondLine; // variable for saving line length
	bool com; // line length for compare 
	
	cout << "Enter the endpoints of the first line segment: ";
	cin >> firstx1 >> firstx2 >> firsty1 >> firsty2; // input firstline x1,x2,y1,y2
	cout << "Enter the endpoints of the second line segment: ";
	cin >> secondx1 >> secondx2 >> secondy1 >> secondy2; // input secondline x1,x2,y1,y2
	firstLine = defLine(firstx1, firstx2, firsty1, firsty2); // firstline define and set length
	secondLine = defLine(secondx1, secondx2, secondy1, secondy2); // secondline define and set length

	cout << "First Line Length: " << firstLine << endl << "Second Line Length: " << secondLine << endl;
	// print firstline length and secondline length

	firstLine > secondLine ? com = true : com = false; // 두개의 Line 길이 비교 후 true or false 출력

	if (com == true) cout << "The first line entered is longer." << endl;
	else cout << "The second line entered is longer." << endl;

	return 0;
}
double defLine(double x1, double x2, double y1, double y2) {
	double lineLength = 0;
	lineLength = sqrt(pow(x2-x1,2)+pow(y2-y1,2)); // set length
	return lineLength; // and return
}