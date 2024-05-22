#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning(disable:4996)

// 10������ 2������ ��ȯ�ϴ� �Լ�
void decimalToBinary(int n) {
    if (n == 0) {
        printf("2����: 0\n");
        return;
    }
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("2����: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// 10������ 8������ ��ȯ�ϴ� �Լ�
void decimalToOctal(int n) {
    if (n == 0) {
        printf("8����: 0\n");
        return;
    }
    int octal[32];
    int i = 0;
    while (n > 0) {
        octal[i] = n % 8;
        n /= 8;
        i++;
    }
    printf("8����: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// 10������ 16������ ��ȯ�ϴ� �Լ�
void decimalToHexadecimal(int n) {
    if (n == 0) {
        printf("16����: 0\n");
        return;
    }
    char hex[32];
    int i = 0;
    while (n > 0) {
        int remainder = n % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';
        }
        else {
            hex[i] = remainder - 10 + 'A';
        }
        n /= 16;
        i++;
    }
    printf("16����: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

// 2������ 10������ ��ȯ�ϴ� �Լ�
int binaryToDecimal(char* binary) {
    int decimal = 0;
    int len = strlen(binary);
    for (int i = 0; i < len; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, len - i - 1);
        }
    }
    return decimal;
}

// 8������ 10������ ��ȯ�ϴ� �Լ�
int octalToDecimal(char* octal) {
    int decimal = 0;
    int len = strlen(octal);
    for (int i = 0; i < len; i++) {
        decimal += (octal[i] - '0') * pow(8, len - i - 1);
    }
    return decimal;
}

// 16������ 10������ ��ȯ�ϴ� �Լ�
int hexadecimalToDecimal(char* hexadecimal) {
    int decimal = 0;
    int len = strlen(hexadecimal);
    for (int i = 0; i < len; i++) {
        int digitValue;
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
            digitValue = hexadecimal[i] - '0';
        }
        else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
            digitValue = hexadecimal[i] - 'A' + 10;
        }
        else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f') {
            digitValue = hexadecimal[i] - 'a' + 10;
        }
        else {
            printf("�߸��� 16���� �Է��Դϴ�.\n");
            return -1;
        }
        decimal += digitValue * pow(16, len - i - 1);
    }
    return decimal;
}

// 2������ 8������ ��ȯ�ϴ� �Լ�
void binaryToOctal(char* binary) {
    int decimal = binaryToDecimal(binary);
    printf("8����: %o\n", decimal);
}

// 2������ 16������ ��ȯ�ϴ� �Լ�
void binaryToHexadecimal(char* binary) {
    int decimal = binaryToDecimal(binary);
    printf("16����: %X\n", decimal);
}

// 8������ 2������ ��ȯ�ϴ� �Լ�
void octalToBinary(char* octal) {
    int decimal = octalToDecimal(octal);
    printf("2����: ");
    for (int i = 2; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

// 8������ 16������ ��ȯ�ϴ� �Լ�
void octalToHexadecimal(char* octal) {
    int decimal = octalToDecimal(octal);
    printf("16����: %X\n", decimal);
}

// 16������ 2������ ��ȯ�ϴ� �Լ�
void hexadecimalToBinary(char* hexadecimal) {
    int decimal = hexadecimalToDecimal(hexadecimal);
    printf("2����: ");
    for (int i = 3; i >= 0; i--) {
        int bit = (decimal >> (i * 4)) & 0xF;
        printf("%d%d%d%d", (bit >> 3) & 1, (bit >> 2) & 1, (bit >> 1) & 1, bit & 1);
    }
    printf("\n");
}

// 16������ 8������ ��ȯ�ϴ� �Լ�
void hexadecimalToOctal(char* hexadecimal) {
    int decimal = hexadecimalToDecimal(hexadecimal);
    printf("8����: %o\n", decimal);
}

int main() {
    int n;
    printf("1�� = 2����\n2�� = 8����\n3�� = 10����\n4�� = 16����\n");
    printf("���ϴ� ���� ��ȯ���� �˷��ּ���: ");
    scanf("%d", &n);

    switch (n) {
    case 1:
        printf("��ȯ�� ���ڸ� �Է����ּ��� : ");
        char binary[32];
        scanf("%s", binary);
        printf("10����: %d\n", binaryToDecimal(binary));
        binaryToOctal(binary);
        binaryToHexadecimal(binary);
        break;
    case 2:
        printf("��ȯ�� ���ڸ� �Է����ּ��� : ");
        char octal[32];
        scanf("%s", octal);
        printf("10����: %d\n", octalToDecimal(octal));
        octalToBinary(octal);
        octalToHexadecimal(octal);
        break;
    case 3:
        printf("��ȯ�� ���ڸ� �Է����ּ��� : ");
        int decimal;
        scanf("%d", &decimal);
        decimalToBinary(decimal);
        decimalToOctal(decimal);
        decimalToHexadecimal(decimal);
        break;
    case 4:
        printf("��ȯ�� ���ڸ� �Է����ּ��� : ");
        char hexadecimal[32];
        scanf("%s", hexadecimal);
        int dec = hexadecimalToDecimal(hexadecimal);
        if (dec != -1) {
            printf("10����: %d\n", dec);
            hexadecimalToBinary(hexadecimal);
            hexadecimalToOctal(hexadecimal);
        }
        break;
    default:
        printf("(Error) �ٽýõ� ���ּ���.");
        break;
    }

    return 0;
}
