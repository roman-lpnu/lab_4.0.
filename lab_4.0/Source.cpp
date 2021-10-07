#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k,N;
	double S;
	S = 0;
	k =	1;
	cout << "N = "; cin >> N;
	while (k <= N)
	{
		S+=(1./(((2*k)+1)* ((2 * k) + 1)));
		k++;
	}
	cout << S << endl;
	S = 0;
	k = 1;
	do
	{
		S += (1. / (((2 * k) + 1) * ((2 * k) + 1)));
		k++;
	}
	while (k <= N);
	cout << S << endl;
	S = 0;
	
		for (k = 1;k <= N;k++)
	{
			S += (1. / (((2 * k) + 1) * ((2 * k) + 1)));
	}

	cout << S << endl;
	S = 0;

	for (k = N;k >= 1 ;k--)
	{
		S += (1. / (((2 * k) + 1) * ((2 * k) + 1)));
	}
	cout << S << endl;
	return 0;
}
