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
		printf("��M�O�B�����ƦC����n���A�п�Jn : ");
	scanf("%d", &n);
	printf("�O�B�����ƦC����%d���� : %d\n\n",n , fibonacci(n));
	n = 1;
	do{
		n += 1;
	} 
	while (fibonacci(n)<18446744073709551615);
	printf("�O�B�����ƦC���̤j�� : %d\n\n", fibonacci(n-1));
	system("pause");
	return 0;
}