//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(int argc, char *argv[]) /*argv[1]：输入文件名；argv[2]：输出文件名*/
//{
//    char **s;
//    int size = 0, capacity = 4; /*字符串数目与容量*/
//    int range;                  /*供排序*/
//    FILE *fin, *fout;
//    if (argc != 3)
//    {
//        printf("Parameter input error!\n");
//        exit(-1);
//    }
//    s = (char **)malloc(sizeof(char *) * capacity); /*定义字符串数组*/
//    if (!s)
//    {
//        perror("ERROR!\n");
//        exit(-1);
//    }
//    for (int i = 0; i < capacity; ++i) /*分配capacity个字符串空间*/
//    {
//        if (!(s[i] = (char *)malloc(sizeof(char) * 82)))
//        {
//            perror("ERROR!\n");
//            exit(-1);
//        }
//    }
//    fin = fopen(argv[1], "r"); /*读入文件*/
//    if (!fin)
//    {
//        printf("Cannot open the file %s!\n", argv[1]);
//        exit(-1);
//    }
//    fout = fopen(argv[2], "w"); /*读出文件*/
//    if (!fout)
//    {
//        printf("Cannot open the file %s!\n", argv[2]);
//        exit(-1);
//    }
//    while (1)
//    {
//        if (!(fgets(s[size++], 82, fin)))
//            break;
//        if (size == capacity) /*达到最大值，重新分配内存*/
//        {
//            capacity *= 2;
//            s = (char **)realloc(s, capacity * sizeof(char*));
//            if (!s)
//            {
//                perror("ERROR!\n");
//                exit(-1);
//            }
//            for (int i = capacity / 2; i < capacity; ++i)
//            {
//                if (!(s[i] = (char *)malloc(sizeof(char) * 82)))
//                {
//                    perror("ERROR!\n");
//                    exit(-1);
//                }
//            }
//        }
//    }
//    --size;
//    range = strlen(s[size - 1]); /*考察最后一个字符串末尾是否有换行符*/
//    if (s[size - 1][range - 1] != '\n')
//    {
//        s[size - 1][range] = '\n';
//        s[size - 1][range + 1] = '\0';
//    }
//    range = size - 1;
//    while (range > 0) /*排序字符串*/
//    {
//        for (int i = 0; i < range; ++i)
//        {
//            if (strcmp(s[i], s[i + 1]) > 0)
//            {
//                char *tmp = s[i];
//                s[i] = s[i + 1];
//                s[i + 1] = tmp;
//            }
//        }
//        --range;
//    }
//    for (int i = 0; i < size; ++i) /*输出字符串*/
//        fprintf(fout, s[i]);
//    for (int i = capacity - 1; i >= 0; --i) /*释放内存*/
//        free(s[i]);
//    free(s);
//    fclose(fout); /*关闭文件*/
//    fclose(fin);
//    return 0;
//}
