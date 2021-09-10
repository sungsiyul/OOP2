#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string; //string도 std필요

class GradeBook {
public:
	void displayMessage() {							//함수 오버로딩 : 이름 같아도 함수인자 다르면 다른 함수
		cout << "Welcome to the Gradebook" << endl;
	}
	void displayMessage(string str) {				//class 내 object 안의 함수 displayMessage()
		cout << str << endl;
	}
};

//private였으면 .으로 자동완성 x
int main() {
	GradeBook myGradeBook;
	myGradeBook.displayMessage();
	myGradeBook.displayMessage("Welcome");
	myGradeBook.displayMessage("to");
	myGradeBook.displayMessage("the");
	myGradeBook.displayMessage("GradeBook");
	return 0;
}
