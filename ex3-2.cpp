#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string; //string�� std�ʿ�

class GradeBook {
public:
	void displayMessage() {							//�Լ� �����ε� : �̸� ���Ƶ� �Լ����� �ٸ��� �ٸ� �Լ�
		cout << "Welcome to the Gradebook" << endl;
	}
	void displayMessage(string str) {				//class �� object ���� �Լ� displayMessage()
		cout << str << endl;
	}
};

//private������ .���� �ڵ��ϼ� x
int main() {
	GradeBook myGradeBook;
	myGradeBook.displayMessage();
	myGradeBook.displayMessage("Welcome");
	myGradeBook.displayMessage("to");
	myGradeBook.displayMessage("the");
	myGradeBook.displayMessage("GradeBook");
	return 0;
}
