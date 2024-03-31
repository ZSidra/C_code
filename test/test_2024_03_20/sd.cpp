#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main() {
//	/*char str[10];
//	strcpy(str, "hello");
//	char* p = str;
//	int n = 10;
//	void* p1 = malloc(100);*/
//
//	char p1 = 1;
//	//char* p2 = "abcd";
//	int* p3 = (int*) & p1;
//
//	//printf(" % d， % d， % d， % d， % d",
//		//sizeof(str), strlen(str), sizeof(p), sizeof(n), sizeof(p1));
//	std::cout << sizeof(*p3);
//
//	return 0;
//}

struct Ip
{
	unsigned char _version : 4;      //版本  
	unsigned char _head_len : 4;     //首部长度  
	unsigned char _tos;              //服务类型  
	unsigned short _len;             //总长度  
	unsigned short _flag : 3;        //标志  
	unsigned short _s_flag : 13;     //片偏移  
	unsigned char _ttl;              //生存时间  
	unsigned char _protocol;         //协议  
	unsigned short _sum;             //首部校验和  
	struct in_addr _frm_addr;        //源IP地址  
	struct in_addr _to_addr;         //目的IP地址 
};

int main() {
	char src[] = "hello,world";
	char* dest = NULL;
	int len = strlen(src);
	dest = (char*)malloc(len + 1);
	char* d = dest;
	char* s = &src[len - 1];
	while (len-- != 0)
		*d++ = *s--;
	*d = '\0';
	printf("%s", dest);
	return 0;
}

