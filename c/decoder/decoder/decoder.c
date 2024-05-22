#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning(disable:4996)

// 10진수를 2진수로 변환하는 함수
void decimalToBinary(int n) {
    if (n == 0) {
        printf("2진수: 0\n");
        return;
    }
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("2진수: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// 10진수를 8진수로 변환하는 함수
void decimalToOctal(int n) {
    if (n == 0) {
        printf("8진수: 0\n");
        return;
    }
    int octal[32];
    int i = 0;
    while (n > 0) {
        octal[i] = n % 8;
        n /= 8;
        i++;
    }
    printf("8진수: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// 10진수를 16진수로 변환하는 함수
void decimalToHexadecimal(int n) {
    if (n == 0) {
        printf("16진수: 0\n");
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
    printf("16진수: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

// 2진수를 10진수로 변환하는 함수
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

// 8진수를 10진수로 변환하는 함수
int octalToDecimal(char* octal) {
    int decimal = 0;
    int len = strlen(octal);
    for (int i = 0; i < len; i++) {
        decimal += (octal[i] - '0') * pow(8, len - i - 1);
    }
    return decimal;
}

// 16진수를 10진수로 변환하는 함수
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
            printf("잘못된 16진수 입력입니다.\n");
            return -1;
        }
        decimal += digitValue * pow(16, len - i - 1);
    }
    return decimal;
}

// 2진수를 8진수로 변환하는 함수
void binaryToOctal(char* binary) {
    int decimal = binaryToDecimal(binary);
    printf("8진수: %o\n", decimal);
}

// 2진수를 16진수로 변환하는 함수
void binaryToHexadecimal(char* binary) {
    int decimal = binaryToDecimal(binary);
    printf("16진수: %X\n", decimal);
}

// 8진수를 2진수로 변환하는 함수
void octalToBinary(char* octal) {
    int decimal = octalToDecimal(octal);
    printf("2진수: ");
    for (int i = 2; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

// 8진수를 16진수로 변환하는 함수
void octalToHexadecimal(char* octal) {
    int decimal = octalToDecimal(octal);
    printf("16진수: %X\n", decimal);
}

// 16진수를 2진수로 변환하는 함수
void hexadecimalToBinary(char* hexadecimal) {
    int decimal = hexadecimalToDecimal(hexadecimal);
    printf("2진수: ");
    for (int i = 3; i >= 0; i--) {
        int bit = (decimal >> (i * 4)) & 0xF;
        printf("%d%d%d%d", (bit >> 3) & 1, (bit >> 2) & 1, (bit >> 1) & 1, bit & 1);
    }
    printf("\n");
}

// 16진수를 8진수로 변환하는 함수
void hexadecimalToOctal(char* hexadecimal) {
    int decimal = hexadecimalToDecimal(hexadecimal);
    printf("8진수: %o\n", decimal);
}

int main() {
    int n;
    printf("1번 = 2진수\n2번 = 8진수\n3번 = 10진수\n4번 = 16진수\n");
    printf("원하는 진수 변환법을 알려주세요: ");
    scanf("%d", &n);

    switch (n) {
    case 1:
        printf("변환할 숫자를 입력해주세요 : ");
        char binary[32];
        scanf("%s", binary);
        printf("10진수: %d\n", binaryToDecimal(binary));
        binaryToOctal(binary);
        binaryToHexadecimal(binary);
        break;
    case 2:
        printf("변환할 숫자를 입력해주세요 : ");
        char octal[32];
        scanf("%s", octal);
        printf("10진수: %d\n", octalToDecimal(octal));
        octalToBinary(octal);
        octalToHexadecimal(octal);
        break;
    case 3:
        printf("변환할 숫자를 입력해주세요 : ");
        int decimal;
        scanf("%d", &decimal);
        decimalToBinary(decimal);
        decimalToOctal(decimal);
        decimalToHexadecimal(decimal);
        break;
    case 4:
        printf("변환할 숫자를 입력해주세요 : ");
        char hexadecimal[32];
        scanf("%s", hexadecimal);
        int dec = hexadecimalToDecimal(hexadecimal);
        if (dec != -1) {
            printf("10진수: %d\n", dec);
            hexadecimalToBinary(hexadecimal);
            hexadecimalToOctal(hexadecimal);
        }
        break;
    default:
        printf("(Error) 다시시도 해주세요.");
        break;
    }

    return 0;
}
