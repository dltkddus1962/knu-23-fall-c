#include <stdio.h>

int main(void)
{
	int a;

	printf("���� �Է�:");
	scanf_s("%d", &a);

	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		printf("�����Դϴ�.");
	else
		printf("������ �ƴմϴ�.");
	return 0;
}