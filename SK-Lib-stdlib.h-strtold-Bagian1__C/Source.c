#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char szOrbits[] = "90613.305 365.24";
	char* pEnd;
	long double f1, f2;

	f1 = strtold(szOrbits, &pEnd);
	f2 = strtold(pEnd, NULL);

	printf("Pluto takes %.2Lf years to complete an orbit.\n", f1 / f2);

	_getch();
	return 0;
}