#include<stdio.h>

int main()
{

	char arr1[] = { "abcdef" };
	char arr2[] = { 'a' , 'b' , 'c' , 'd' , 'e' , 'f' };
	char arr3[] = { "abc\0def" };

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("\a\a\a\a\a\a\a");//����
	printf("%c\n", '\130');//�˽���תʮ�����ַ�
	printf("%c\n", '\x42');//ʮ������תʮ�����ַ�

	system("pause");

	return 0;
}