#include <stdio.h>
#pragma warning(disable:4996)
#include "Message.h"
#define MESSAGE "Hello World"
#include <limits.h>

int main(void)
{
    OutBoxMessage("Hello World!");
    OutBoxMessage("�Լ�");
    OutBoxMessage("�� �ɽ��ϴ� ���������K�����������K�K");
    OutBoxMessage("HELLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLO WORLD!");
    OutBoxMessage("printf(\"HELLO WORLD\");");
    OutBoxMessage("aiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiai");
    printf(MESSAGE);
    // ū���̴� �ʱ� 
    /* �ּ� */
    // nah?
    // aiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiaiai

    printf("\n38 * 75 - 63 = 2787\n");
    int a = 38, b = 75, c = 63;
    printf("%d * %d - %d = %d\n", a, b, c, a * b - c);
    a = a * b - c;
    printf("�޸�[%d] = %d\n", &a, a);

    // ��?

    OutBoxMessage("ddddddddddddddddddddddddddddddddeeeeeeeeee");

    // ����� ����Ҽ� ����

    // ����!

    // �����

    //ontririirirwiwwawjnjnrjrajwronwronernornorngonbfionbfonbfonbfinbiobrnjfjifbjdfbffjbfnbfibfinbfbf

    int a2owinbofibnsoibnienboenboeinbeornobienboirnb = 30;
    float b2gieiushbiueb439wijrebjebo4u3borebnsofdreoivnafsnas = 3.14;
    char c2iughiguebffbiaudsuvbaidsbcjzkjsdbviawuebfaubvoweub = 'A';
    char d24binsrunaorgnoernbogbqornorbnojnsfkvasvj[6] = { 'K', 'O', 'R', 'E', 'A', '\0' };
    printf("%d %f %c %s\n", a2owinbofibnsoibnienboenboeinbeornobienboirnb, b2gieiushbiueb439wijrebjebo4u3borebnsofdreoivnafsnas, c2iughiguebffbiaudsuvbaidsbcjzkjsdbviawuebfaubvoweub, d24binsrunaorgnoernbogbqornorbnojnsfkvasvj);

    printf("%d %d %d %d %d %d %d\n", sizeof(int), sizeof(short), sizeof(int), sizeof(float), sizeof(double), sizeof(long), sizeof(long long));
    printf("%d %d %d %d %d %d %ld %ld %lld %lld %d %d\n", CHAR_MIN, CHAR_MAX, SHRT_MIN, SHRT_MAX, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, LLONG_MIN, LLONG_MAX, CHAR_MIN, CHAR_MAX);

    char a3ovirworenoworinreoingodfngsdfngofinog = 'A';
    char b3ogirenboebnsondfobisndfobisnrboinrtigojtpn = a3ovirworenoworinreoingodfngsdfngofinog + 1;
    printf("ASCII[%d] = %c\n", a3ovirworenoworinreoingodfngsdfngofinog, a3ovirworenoworinreoingodfngsdfngofinog);
    printf("ASCII[%d] = %c\n", b3ogirenboebnsondfobisndfobisnrboinrtigojtpn, b3ogirenboebnsondfobisndfobisnrboinrtigojtpn);

    char ch1 = 'A';
    int ch2;

    ch2 = ch1 + 32;

    printf("%c", ch2);

    return 0;
}