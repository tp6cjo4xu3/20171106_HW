#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	printf("�п�J�@�ӭ^��r�� :�@");
	scanf("%c", &a);
	if (a >= 'A'&a <= 'z'){
		if (a >= 'A'&a <= 'Z')a += 32;
		else a -= 32;
		printf("�ഫ���G�� : %c\n", a);
	}
	else{
		printf("��J���~\n");
	}
	system("pause");
	return 0;
}