#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int m, n;
	while (1)
	{
		vector<int> cards;
		cin >> n;
		if (!n)
			break;
		for (int i = 1; i <= n; i++)
			cards.push_back(i);

		cout << "Discarded cards:";
		while (cards.size() >= 2)
		{
			int a = cards.front();
			cards.erase(cards.begin());
			cout << " " << a;
			if (cards.size() != 1)
				cout << ",";
			int b = cards.front();
			cards.push_back(b);
			cards.erase(cards.begin());
		}
		cout << "\nRemaining card: ";
		cout << cards.front() << endl;
	}
	return 0;
}