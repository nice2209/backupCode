#include <stdio.h>

int main(void)
{
	int year, month, day, a;
	
	scanf("%d %d %d", &year, &month, &day);
	
	a = (year - month + day / 1000) % 10;
	
	if(a == 0)
	{
		printf("���");
	}
	else{
		printf("�׷�����");
	}
}
