#include <iostream>;
using namespace std;

int main(int argc, const char* argv[])
{
	float baseSal = 150.0;
	float bonusRate = 0.12;
	float salePerWeek = 0.0;
	float finalSal = 0;
	while (salePerWeek != -1)
	{
		cout << "Enter saleperson's gross sale this week(or -1 to exit): ";
		cin >> salePerWeek;
		if (salePerWeek == -1)
			return 0;
		else
		{
			finalSal = baseSal + salePerWeek * bonusRate;
			cout << "Saleperson's earnings this week: " << finalSal << endl;
		}
	}
	return 0;
}