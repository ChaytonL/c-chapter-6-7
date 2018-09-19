#include <iostream>
#include <string>

using namespace std;

int main() {

	char grade = ' ';
	string result;

	cout << " Enter your letter grade ";
	cin >> grade;

	grade = toupper(grade);

		switch (grade)
		{
		case 'A':
			result = " Excellent\n ";
			break;
		case'B':
			result = " Meh good, but not great.\n ";
			break;
		case'C':
			result = " Some say this is average.\n ";
			break;
		case 'D':
		case 'F':
			result = " Good luck with that.\n ";
		default:
			result = " Not Valid.\n ";
		} //end switch


	cout << result;
	system("pause");
	return 0;

}