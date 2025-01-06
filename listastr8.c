
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char num[100], num2[100];
	scanf("%s %s", num, num2);
	long int val = 0, val2 = 0, mult = 1, mult2 = 1;
	int tam = strlen(num), tam2 = strlen(num2);
	for(int i = (tam-1); i > -1; i--){
		val += (num[i] - 48)* mult;
		mult *= 10;
	} 
	for(int i = (tam2 -1); i > -1; i--){
		val2 += (num2[i]-48) * mult2;
		mult2 *= 10;
	}
	printf("%ld", val + val2);
	
	return 0;
}

