#include<stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int time = 0;

int main(void)
{
	int n;

	printf("請輸入河內塔的高度:");
	scanf_s("%d", &n);

	hanoi(n, 'A', 'B', 'C');

	printf("移動%d層和內塔共需移動 %d次\n", n, time);

	system("pause");

}

void hanoi(int n, char A, char B, char C)
{

	if (n == 1)
	{
		printf("%d: 將第%d個圓盤由%c移到 %c\n", ++time, n, A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%d: 將第%d個圓盤由%c移到 %c\n", ++time, n, A, C);
		hanoi(n - 1, B, A, C);
	}

}
