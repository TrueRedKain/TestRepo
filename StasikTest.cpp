#include "pch.h" 
#pragma hdrstop 
#pragma argsused 
#include <iostream> 

using namespace std;
int main()
{
	int X;
	cout << "Vvedite cifru: ";
	cin >> X;
	// По-шаговые вычисления 
	for (int i(1); i < 10; i++)
	{
		X = X * i;
		cout << endl << "Resultat: " << X;
	}
	cin >> X;
	return 0;
}