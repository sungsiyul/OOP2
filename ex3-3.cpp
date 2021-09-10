#include<iostream>
using std::cout;		//출력담당
using std::cin;			//입력담당
using std::endl;		//줄바꿈	"/n"

#include<string>		//문자열 관련 header
using std::string;		
using std::getline;		//함수 : 알아서 찾아보기

class GradeBook {
public:
	void displayMessage(string courseName) {
		cout << "Welcome to the grade book for " << courseName << "!" << endl;
	}
};	//end class;

int main() {

	string nameOfCourse;	//string형태의 변수 생성
	GradeBook myGradeBook;	//instance 생성 (myGradeBook)

	cout << "Please enter the course name : ";
	getline(cin, nameOfCourse);	//string형태로 생성된 변수 nameOfCourse의 값을 cin
	cout << endl;

	myGradeBook.displayMessage(nameOfCourse);	//(class에 생성된 instance 이름).(그 class 내부에 있는 함수)(그 함수가 필요한 인자)
	return 0;
}