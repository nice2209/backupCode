//#include <stdio.h>
//
//int global;
//
//int main()
//{
//    int mainlocal;
//    global = 1; // 가능
//    mainlocal = 2; // 가능
//    sublocal = 3; // 불가능
//}
//
//void sub()
//{
//    int sublocal;
//    global = 1; //가능
//    mainlocal = 2; // 불가능
//    sublocal = 3; // 가능
//}