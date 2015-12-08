// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
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
	stu.setName("早点");
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

	
	
	//Student stu;//完全等于Student stu=Student();
	//stu.setName("iphone");
	//stu.info();


	//Person per=Person();//没有new关键字,就是栈调用,在_tmain函数执行完成后,自动销毁
	//per.info();//变量用.调用子成员

	//Person *p = new Person(30);//用new 关键字,就是堆分配,返回是要是指针对象
	//char* t = "asdfasdf";
	//p->setName(t);
	//p->info();//指针用->调用子成员
	//delete p;//手动释放堆内存,以便响应析构函数
























	//string g = "guan";
	//std::cout << "hello lei"+g<<endl;

	//int* p = new int(4);

	//printf("当前数字为:%d", *p);//这里一定要是指针变量*p,不然就会打印出内存地址
	//delete p;//释放

	//char *s = new char[11];//数组指针
	//strcpy_s(s,11,"雷冠是天才");
	//
	//printf("%s",s);
	//delete[] s;//释放数组要加[]
	//
	///*堆的分配要手动销毁
	//栈出函数自动销毁*/

	//int x = 3, y = 5;
	//int max = maxValue(x);
	//printf("\n%d\n", max);
	//float z = 2.3, q = 3.95;
	//float w=maxValue(z, q);
	//printf("\n%f\n", w);


	system("pause");
	return 0;
}

