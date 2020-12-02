#include <stdio.h>

int main(void)
{
	char name[50];
	printf("이름을 입력하세요. : ");
	scanf_s("%s", name, sizeof(name));
	printf("당신의 이름은 %s입니다.", name);

	return 0;
}