#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	printf("請輸入一個英文字母 :　");
	scanf("%c", &a);
	if (a >= 'A'&a <= 'z'){
		if (a >= 'A'&a <= 'Z')a += 32;
		else a -= 32;
		printf("轉換結果為 : %c\n", a);
	}
	else{
		printf("輸入錯誤\n");
	}
	system("pause");
	return 0;
}