#include <stdio.h>

int main(void)
{
	int num, abs;
	
	printf("정수 입력 : ");
	scanf("%d", &num);
	
	if(num == 0)
	{
		printf("제로 입니다. \n");
	} else{
	 	(num > 0) ? printf("양수입니다. \n") : printf("음수입니다. \n");
	}
	
	abs = (num > 0) ? num : num * (-1);
	
	printf("입력된 수의 절대값 : %d \n", abs);
	return 0;
}
