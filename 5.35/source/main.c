#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n){
	int b = 1,c = 1,d=1;
	unsigned int a;
	if (n < 3){		
		switch (n){
		case 0:
			return 0;
			break;
		case 1 :
			return 1;
			break;
		case 2 :
			return 1;
			break;		}
	}
	else{
		for (a = 3; a <= n; a++){
			b = c;
			c = d;
			d = b+c;
		}
		return d;
	}
}

int main(void)
{
		unsigned int n;
		printf("找尋費伯那契數列的第n項，請輸入n : ");
	scanf("%d", &n);
	printf("費伯那契數列的第%d項為 : %d\n\n",n , fibonacci(n));
	n = 1;
	do{
		n += 1;
	} 
	while (fibonacci(n)<18446744073709551615);
	printf("費伯那契數列的最大值 : %d\n\n", fibonacci(n-1));
	system("pause");
	return 0;
}