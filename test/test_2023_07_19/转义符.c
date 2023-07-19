#include<stdio.h>

int main()
{

	char arr1[] = { "abcdef" };
	char arr2[] = { 'a' , 'b' , 'c' , 'd' , 'e' , 'f' };
	char arr3[] = { "abc\0def" };

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("\a\a\a\a\a\a\a");//蜂鸣
	printf("%c\n", '\130');//八进制转十进制字符
	printf("%c\n", '\x42');//十六进制转十进制字符

	system("pause");

	return 0;
}