#include <stdio.h>

int main(void)
{
	int sel;

	printf("1 ���ϱ� 2���� 3 ���ϱ� 4 ������\n");
	scanf_s("%d", &sel);

	calculator(sel);
	

	return 0;
}

void calculator(int selecor)
{
	int num1;
	int num2;

	printf("���� 1�� �Է��Ͻÿ�:\n");
	scanf_s("%lf", &num1);

	printf("���� 2�� �Է��Ͻÿ�\n");
	scanf_s("%lf", &num2);

}