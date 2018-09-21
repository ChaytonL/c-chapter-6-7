#include <iostream>
#include <string>


using namespace std;

int main()
{

	for (int i = 0; i <= 10; i++)
	{
		cout << i << endl;
	}
	for (int x = 10; x >=0; x--)
	{
		cout << x << "\n";
		if (x == 0) {
			cout << " Lift Off.\n ";
		}
	}
	for (int q = 0; q <= 100; q += 3) {
		cout << q << endl;
		if (q == 48) {
			cout << " 50 Something at 50\n ";
		}
	}
	for (int e = 0; e <= 100; e += 5) {
		cout << e << endl;
		if (e == 50) {
			cout << " Something at 50\n  ";
		}
	}
	
	
	system("pause");
	return 0;
}