#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//Pick a book from my library
//Author: Chayton L.


int main()
{
	int pickBook = 0;
	int secretBook;
	int count = 0;
	int again;

	srand(time(NULL));
	secretBook = rand() % 57 + 1;
	do {
		cout << " Welcome to my chamber of Library information Services. " << endl;
		cout << " Otherwise known as LIS " << endl;
		cout << " There is a magic book, but only one. You have two tries to find it. \n If you do not you will perish. \n" << endl;

		while (pickBook != secretBook && count != 2)
		{
			cout << " hahahahahahah hehehehe rawr xd\n choose your book from the Library >> " << endl;
			cin >> pickBook;

			if (pickBook < secretBook) {
				cout << " The Number Was Too Low. " << endl;
			}
			else if (pickBook > secretBook) {
				cout << " The Number Was Too High. " << endl;
			}
			else if (pickBook == secretBook) {
				cout << " Congradulations you found the secret book. ";
			}
			count = count + 1;
			//count++;
		}
		if (count == 2) {
			cout << " You are dead by ISIS ";
		}
		else {
			cout << " Hey Nice Book. ";
		}
		cout << " Would you like to play again? 1 for yes, 2 for no. ";
		cin >> again;
		pickBook = 0;
		count = 0;
	} while (again != 2);

	system("pause");
	return 0;
}