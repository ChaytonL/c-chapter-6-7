#include <iostream>
#include <string>

using namespace std;


 int main() {

	 int american;
	 int canadian;
	 int euro;
	 int indian;
	 int japanese;
	 int mexican;
	 int southAfrican;
	 int british;
	 int conversion;


	 cout << " How much American dollars do you have >> " << endl;
	 cin >> american;
	 cout << " What would you currency would you like to convert American Dollars into?\n 1 = Canadian Dollar \n 2 = Euro\n 3 = Indian Rupee \n 4 = Japanese Yen\n 5 = Mexican Peso \n 6 = South African Rand \n 7 = British Pound \n >> ";
	 cin >> conversion;
	 
	 switch (conversion)
	 {

	 case 1:
			 system("cls");
			 canadian = american * .9813;
			 cout << " The conversion totals to be :" << canadian << " Canadian Dollars" << endl;
			 break;
	 case 2:
		 system("cls");
		 euro = american * .757;
		 cout << " The conversion totals to be :" << euro << " Euros" << endl;
		 break;
	 case 3:
		 system("cls");
		 indian = american * 52.53;
		 cout << " The conversion totals to be :" << indian << " Indian Rupee" << endl;
		 break;
	 case 4:
		 system("cls");
		 japanese = american * 80.92;
		 cout << " The conversion totals to be :" << japanese << " Japanese Yen" << endl;
		 break;
	 case 5:
		 system("cls");
		 mexican = american * 13.1544;
		 cout << " The conversion totals to be :" << mexican << " Mexican Pesos" << endl;
		 break;
	 case 6:
		 system("cls");
		 southAfrican = american * 7.7522;
		 cout << " The conversion totals to be :" << southAfrican << " South African Rand" << endl;
		 break;
	 case 7:
		 system("cls");
		 british = american * .6178;
		 cout << " The conversion totals to be :" << british << " British Pounds" << endl;
		 break;
	 }
	 system("pause");
	 return 0;
}