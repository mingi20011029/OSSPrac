#include <iostream>
using namespace std;

int main() {
	string name;
	string sid;
	string mname;

	cout << "이름을 입력하세요 : ";
	cin >> name;

	cout << "학번을 입력하세요 : ";
	cin >> sid;

	cout << "학과을 입력하세요 : ";
	cin >> mname;

	cout << "<출력>\n 이름 : " << name << "\n 학번 : " << sid << "\n 학과 : " << mname;
}