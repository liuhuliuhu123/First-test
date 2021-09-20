#include<iostream>
#include<string.h>
#include"标头.h"
#pragma warning(disable:4996)
using namespace std;
//#define LOOP
//#define LOOPT
struct stu {
	char name[30];
	int score;
};
//int main()
//{
//	stu student[2];
//	char a[30] = "liuhu";
//	strcpy_s(student[0].name, "liuhu1");
//	student[0].score = 100;
//	student[1].name[30] =a[30];
//	student->score = 99;
//	FILE *p;
//	p = fopen("1.txt","wb");
//	if (p == NULL)
//	{
//		cout << "文件打开失败" << endl;
//	}
//	else
//	{
//	int result=fwrite(&student, sizeof(stu), 2, p);
//	}
//	fclose(p);
//	struct stu s[2];
//	FILE * f = fopen("1.txt", "rb");
//	if (f == NULL)
//	{
//		cout << 0 << endl;
//	}
//	else
//	{
//		size_t resultread = fread(&s, sizeof(stu), 2, f);
//		cout << s[0].score <<s[0].name<< endl;
//	}
//	fclose(p);
//	return 0;
//}
//
//
