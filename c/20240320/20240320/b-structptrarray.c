//#include <stdio.h>
//#include <malloc.h>
//
//struct SHuman
//{
//	char name[12];
//	int age;
//	double height;
//};
//
//int main()
//{
//	struct SHuman* pJuso[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		pJuso[i] = (struct SHuman*)malloc(sizeof(struct SHuman));
//	}
//
//	pJuso[3]->age = 45;
//	printf("%d\n", pJuso[3]->age);
//
//	for (int i = 0; i < 5; i++)
//	{
//		free(pJuso[i]);
//	}
//}