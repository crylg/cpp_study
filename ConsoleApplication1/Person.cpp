#include "stdafx.h"
#include "Person.h"
#include <string>

void Person::setAge(int age)
{
	this->age = age;
}

int Person::getAge() const
{
	return age;
}

const char* Person::getName() const
{
	return	name;
}

void Person::info() const
{
	//printf("名字\n%s\n性别\n%c\n年龄\n%d\n", name, sex, age);
	printf("我是一个普通人叫%s", name);
}

Person::Person()
{
	//1.分配内存Person p;
	//2.执行构造函数
	printf("Call Person\n");
	this->name = new char[255];//为name分配255子节内存
	printf("%d", sizeof(this->name));
	//memset(this->name, 0, 30);//把this->name中分配的内存值清空
	strcpy_s(this->name, 255, "zaodian");
	age=27;
	sex = '1';
}

Person::Person(int age)
{
	this->name = new char[255];
	this->age = age;
	strcpy_s(this->name, 255, "早点");
	sex = '1';
}

Person::Person(const Person & per)
{
	this->name = new char[255];
	strcpy_s(this->name, 255, per.name);
	this->age = per.age;
	this->sex = per.sex;
}

Person::~Person()//在内存被回收前调用
{
	printf("\n析构来啦\n");
	delete[] name;
}

void Person::setName(const char* name)const//这里为什么教程要加个const?
{
	//this->name =(char*) name;
	strcpy_s(this->name, 255, name);

}

Person & Person::operator=(const Person&right)
{
	//this->name = new char[255];//this为操作符左边的对象,此对象已经运行过构造函数,已分配过内存,所以不能再次分配
	strcpy_s(this->name, 255, right.name);
	//delete [] right.name;
	this->age = right.age;
	this->sex = right.sex;
	printf("\n操作符重载\n");
	return *this;
}

Person* Person::create()
{
	Person* per = new Person();
	return per;
}

void Student::info()const
{
	//Person::info();
	printf("我是大学生\n%d\n",score);
}

Person & Student::operator=(const Student&right)
{
	printf("student 操作符重载");
	return *this;
}

void SmallStudent::info() const
{
	//Student::info();
	printf("我是小学生");
}

SmallStudent::SmallStudent()
{
	this->setAge(11111);
}
