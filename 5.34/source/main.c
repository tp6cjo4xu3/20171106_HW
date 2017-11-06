#include <stdio.h>
#include <stdlib.h>

int integerPower(int x, int y){
	int a;
	if (y != 0){
		a = x*integerPower(x, y - 1);
		return a;
	}
	else{
		return 1;
	}

}

int main(void)
{
	int a, b;
	printf("請輸入兩數 : ");
	scanf("%d%d", &a, &b);
	printf("%d的%d次方為%d\n\n", a, b, integerPower(a, b));
	system("pause");
	return 0;
}