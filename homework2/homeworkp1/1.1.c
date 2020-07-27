//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable:4996)
//int main(int argc, char* argv[])	/*argv[1]：输入文件名；argv[2]：输出文件名*/
//{
//	char** s;
//	int Num = 0, max = 4;	/*字符串数目与容量*/
//	int range;	/*供排序*/
//	FILE* fin, *fout;
//	if (argc != 3)
//	{
//		printf("Parameter input error!\n");
//		exit(-1);
//	}
//	s = (char**)malloc(sizeof(char*) * max);	/*定义字符串数组*/
//	if (!s)
//	{
//		printf("ERROR!\n");
//		exit(-1);
//	}
//	for (int i = 0; i < max; ++i)		/*分配max个字符串空间*/
//	{
//		if (!(s[i] = (char*)malloc(sizeof(char) * 82)))
//		{
//			printf("ERROR!\n");
//			exit(-1);
//		}
//	}
//	fin = fopen(argv[1], "r");	/*读入文件*/
//	if (!fin)
//	{
//		printf("Cannot open the file %s!\n", argv[1]);
//		exit(-1);
//	}
//	fout = fopen(argv[2], "w");	/*读出文件*/
//	if (!fout)
//	{
//		printf("Cannot open the file %s!\n", argv[2]);
//		exit(-1);
//	}
//	while (1)
//	{
//		if (!(fgets(s[Num++], 82, fin))) break;
//		if (Num == max)		/*达到最大值，重新分配内存*/
//		{
//			int oldMax = max;
//			char** tmp = (char**)malloc(sizeof(char*) * max * 2);
//			if (!tmp)
//			{
//				printf("ERROR!\n");
//				exit(-1);
//			}
//			max *= 2;	/*容量乘2*/
//			for (int i = 0; i < max; ++i)
//			{
//				if (!(tmp[i] = (char*)malloc(sizeof(char) * 82)))
//				{
//					printf("ERROR!\n");
//					exit(-1);
//				}
//			}
//			for (int i = 0; i < Num; ++i)	/*拷贝字符串*/
//				strcpy(tmp[i], s[i]);
//			for (int i = oldMax - 1; i >= 0; --i)	/*释放原内存*/
//				free(s[i]);
//			free(s);
//			s = tmp;
//		}
//	}
//	--Num;
//	range = strlen(s[Num - 1]);	/*考察最后一个字符串末尾是否有换行符*/
//	if (s[Num - 1][range - 1] != '\n')
//	{
//		s[Num - 1][range] = '\n';
//		s[Num - 1][range + 1] = '\0';
//	}
//	range = Num - 1;
//	while (range > 0)	/*排序字符串*/
//	{
//		for (int i = 0; i < range; ++i)
//		{
//			if (strcmp(s[i], s[i + 1]) > 0)
//			{
//				char* tmp = s[i];
//				s[i] = s[i + 1];
//				s[i + 1] = tmp;
//			}
//		}
//		--range;
//	}
//	for (int i = 0; i < Num; ++i)	/*输出字符串*/
//		fprintf(fout, s[i]);
//	for (int i = max - 1; i >= 0; --i)	/*释放内存*/
//		free(s[i]);
//	free(s);
//	fclose(fout);	/*关闭文件*/
//	fclose(fin);
//	return 0;
//}
