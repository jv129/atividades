
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	int mat[100], cont = 0, num;
	char mat1[100];
	
	while(1){
		scanf("%d", &num);
		if(num != -1)
			mat[cont] = num;
		else 
			break;
		mat1[cont] = num + 48;
		cont++;
	}
	
	
	/*while(1){
		if(mat[cont] != -1)
			mat1[cont] = mat[cont] + 48;
		else 
			break;
		cont++;
	}*/
	printf("%s\n", mat1);
	return 0;
}

