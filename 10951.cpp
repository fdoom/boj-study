#include <iostream>

using namespace std;

int main(void)
{
	while (1)
	{
		int a, b;
		cin >> a >> b;

		if (cin.eof() == true)
			break;
            
		cout << a + b << endl;
	}
	return 0;
}