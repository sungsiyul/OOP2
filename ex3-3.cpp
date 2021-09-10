#include<iostream>
using std::cout;		//��´��
using std::cin;			//�Է´��
using std::endl;		//�ٹٲ�	"/n"

#include<string>		//���ڿ� ���� header
using std::string;		
using std::getline;		//�Լ� : �˾Ƽ� ã�ƺ���

class GradeBook {
public:
	void displayMessage(string courseName) {
		cout << "Welcome to the grade book for " << courseName << "!" << endl;
	}
};	//end class;

int main() {

	string nameOfCourse;	//string������ ���� ����
	GradeBook myGradeBook;	//instance ���� (myGradeBook)

	cout << "Please enter the course name : ";
	getline(cin, nameOfCourse);	//string���·� ������ ���� nameOfCourse�� ���� cin
	cout << endl;

	myGradeBook.displayMessage(nameOfCourse);	//(class�� ������ instance �̸�).(�� class ���ο� �ִ� �Լ�)(�� �Լ��� �ʿ��� ����)
	return 0;
}