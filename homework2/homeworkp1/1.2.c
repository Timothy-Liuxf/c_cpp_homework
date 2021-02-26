//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef unsigned char UCHAR;
//static inline UCHAR rev(UCHAR x)	/*反转*/
//{
//	x = (((x & 0x0f) << 4) | ((x & 0xf0) >> 4));	/*相邻四位反转*/
//	x = (((x & 0x33) << 2) | ((x & 0xcc) >> 2));	/*相邻两位反转*/
//	x = (((x & 0x55) << 1) | ((x & 0xaa) >> 1));	/*相邻一位反转*/
//	return x;
//}
//int main(int argc, char* argv[])	/*argv[1]：输入文件名；argv[2]：输出文件名*/
//{
//	UCHAR form[256];	/*存储反转值*/
//	UCHAR* buffer;
//	FILE* fin, * fout;
//	int max = 16;
//	size_t now;
//	if (argc != 3)
//	{
//		printf("Parameter input error!\n");
//		exit(-1);
//	}
//	for (register int i = 0; i < 256; ++i)
//	{
//		form[i] = rev((UCHAR)i);
//	}
//	if (!(fin = fopen(argv[1], "rb")))
//	{
//		printf("Cannot open the file %s!\n", argv[1]);
//		exit(-1);
//	}
//	if (!(fout = fopen(argv[2], "wb")))
//	{
//		printf("Cannot open the file %s!\n", argv[2]);
//		exit(-1);
//	}
//	for (int i = 0; i < 256; ++i)	/*初始化反转表*/
//		form[i] = rev(i);
//	buffer = (UCHAR*)malloc(sizeof(UCHAR) * max);
//	if (!buffer)
//	{
//		printf("ERROR!");
//		exit(-1);
//	}
//	while (1)
//	{
//		now = fread(buffer, sizeof(UCHAR), max, fin);
//		for (int i = 0; i < now; ++i)
//			buffer[i] = form[buffer[i]];
//		fwrite(buffer, sizeof(UCHAR), now, fout);
//		if (now < max) break;	/*到达文件尾*/
//		free(buffer);	/*增大每次读入量*/
//		max *= 2;
//		buffer = (UCHAR*)malloc(sizeof(UCHAR) * max);
//		if (!buffer)
//		{
//			printf("ERROR!");
//			exit(-1);
//		}
//	}
//	free(buffer);
//	fclose(fout);
//	fclose(fin);
//	return 0;
//}
