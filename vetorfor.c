#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
	int lista[7];
	int num,c,i;

	printf("digite 7 numeros \n");
	for(num=1; num<=7; num++){
		scanf("%d", &lista[num]);
	}
	for(num=1; num<=7; num++){
		for(i=num +1; i<=7; i++)
		{
			if(lista[num]> lista[i])
			{
				c = lista[num];
				lista[num]=lista[i];
				lista[i]= c;
			}

		}
	}

			printf("os numeros em ordem crescente sao:\n");
			for(num=1; num<=7 ; num++){
				printf("%d \n", lista[num]);
			
			}
			
	return 0;
}	

