#include <stdio.h>

int main(void)
{
	char name[50];
	printf("�̸��� �Է��ϼ���. : ");
	scanf_s("%s", name, sizeof(name));
	printf("����� �̸��� %s�Դϴ�.", name);

	return 0;
}