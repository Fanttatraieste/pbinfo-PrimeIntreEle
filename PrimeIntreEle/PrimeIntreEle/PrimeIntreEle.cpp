/*
*  Programul verifica daca doua numere naturale sunt prime intre ele
*  Doua numere sunt prime intre ele <=> ele nu au nici un divizor comun (mai putin 1)
*  Acest cod este de asemenea rezolvarea problemei PrimeIntreEle de pe pbinfo
*/
#include <iostream>
using namespace std;
int main()
{
	long long a, b;
	bool ok = 1;    //1 -> prime intre ele, 2 -> nu sunt prime intre ele
	cin >> a >> b;
	if (a > b) swap(a, b);    //continuam codul considerand ca a < b

	for (int d = 2; d * d < a && ok == 1; d++)
	{
		if ((a % d == 0 && b % 2 == 0) || (b % (a / d) == 0))    // daca gasim un divizor al lui a, care e si al lui b
			ok = 0;    // nu sunt prime intre ele 
	}
	if (b % a == 0)
		ok = 0;


	if (ok == 1)
		cout << "PIE";
	else
		cout << "NOPIE";

	return 0;
}

/*
*	Problema e doar de 90 de puncte pe pbinfo 
*	Am uitat o conditie tampita de existenta
*	O sa revin asupra ei
*/