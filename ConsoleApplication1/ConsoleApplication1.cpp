// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <string>
#include "Person.h"
#include "AppDelegate.h"
#include "Application.h"
#include <cassert>
using namespace std;

//int maxValue(int a, int b=7);
//int maxValue(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//float maxValue(float a, float b)
//{
//	return a > b ? a : b;
//}
//
//float maxValue(float a, float b);

int _tmain(int argc, _TCHAR* argv[])
{
	/*Application *app = new Application();
	AppDelegate *appDelegate = new AppDelegate();
	app->setDelegate(appDelegate);
	app->run();
	delete app;
	delete appDelegate;*/















	
	


















	//Student->Person

	Student stu;
	stu.setName("���");
	Person dp = stu;
	dp.info();//Person::info();

	Student *stu1;
	auto dp1 = &stu;
	((Person*)(dp1))->info();//Student::info();

	assert(2 + 2 == 4);
	std::cout << "Execution continues past the first assert\n";
	assert(2 + 2 == 5);
	std::cout << "Execution continues past the second assert\n";
















	//SmallStudent *sstu = new SmallStudent();
	//Person *p = new Person();
	//Person *dp1 = sstu;
	//dp1->info();

	
	
	//Student stu;//��ȫ����Student stu=Student();
	//stu.setName("iphone");
	//stu.info();


	//Person per=Person();//û��new�ؼ���,����ջ����,��_tmain����ִ����ɺ�,�Զ�����
	//per.info();//������.�����ӳ�Ա

	//Person *p = new Person(30);//��new �ؼ���,���Ƕѷ���,������Ҫ��ָ�����
	//char* t = "asdfasdf";
	//p->setName(t);
	//p->info();//ָ����->�����ӳ�Ա
	//delete p;//�ֶ��ͷŶ��ڴ�,�Ա���Ӧ��������
























	//string g = "guan";
	//std::cout << "hello lei"+g<<endl;

	//int* p = new int(4);

	//printf("��ǰ����Ϊ:%d", *p);//����һ��Ҫ��ָ�����*p,��Ȼ�ͻ��ӡ���ڴ��ַ
	//delete p;//�ͷ�

	//char *s = new char[11];//����ָ��
	//strcpy_s(s,11,"�׹������");
	//
	//printf("%s",s);
	//delete[] s;//�ͷ�����Ҫ��[]
	//
	///*�ѵķ���Ҫ�ֶ�����
	//ջ�������Զ�����*/

	//int x = 3, y = 5;
	//int max = maxValue(x);
	//printf("\n%d\n", max);
	//float z = 2.3, q = 3.95;
	//float w=maxValue(z, q);
	//printf("\n%f\n", w);


	system("pause");
	return 0;
}

