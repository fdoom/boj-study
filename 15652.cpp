#include <iostream>
#include <string>
using namespace std;

int n, m;
string arr;
bool input[9];

void solution(int position)
{
	if (position == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (!input[i])
		{
			for (int j = 1; j < i; j++)
				input[j] = true;

			arr.push_back(i + '0');

			solution(position + 1);

			for (int j = 1; j < i; j++)
				input[j] = false;

			arr.pop_back();
		}
	}
}
int main(void)
{
	cin >> n >> m;
	solution(0);
	return 0;
}