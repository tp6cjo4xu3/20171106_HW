#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b,c;
	printf("請輸入兩數 : ");
	scanf("%d%d", &a, &b);
	for (c = 1; c = c; c++){
		if (c%a == 0 & c%b == 0){
			printf("兩數的最小公倍數為 : %d\n", c);
			system("pause");
			return 0;
		}
	}
}