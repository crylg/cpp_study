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
	//printf("����\n%s\n�Ա�\n%c\n����\n%d\n", name, sex, age);
	printf("����һ����ͨ�˽�%s", name);
}

Person::Person()
{
	//1.�����ڴ�Person p;
	//2.ִ�й��캯��
	printf("Call Person\n");
	this->name = new char[255];//Ϊname����255�ӽ��ڴ�
	printf("%d", sizeof(this->name));
	//memset(this->name, 0, 30);//��this->name�з�����ڴ�ֵ���
	strcpy_s(this->name, 255, "zaodian");
	age=27;
	sex = '1';
}

Person::Person(int age)
{
	this->name = new char[255];
	this->age = age;
	strcpy_s(this->name, 255, "���");
	sex = '1';
}

Person::Person(const Person & per)
{
	this->name = new char[255];
	strcpy_s(this->name, 255, per.name);
	this->age = per.age;
	this->sex = per.sex;
}

Person::~Person()//���ڴ汻����ǰ����
{
	printf("\n��������\n");
	delete[] name;
}

void Person::setName(const char* name)const//����Ϊʲô�̳�Ҫ�Ӹ�const?
{
	//this->name =(char*) name;
	strcpy_s(this->name, 255, name);

}

Person & Person::operator=(const Person&right)
{
	//this->name = new char[255];//thisΪ��������ߵĶ���,�˶����Ѿ����й����캯��,�ѷ�����ڴ�,���Բ����ٴη���
	strcpy_s(this->name, 255, right.name);
	//delete [] right.name;
	this->age = right.age;
	this->sex = right.sex;
	printf("\n����������\n");
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
	printf("���Ǵ�ѧ��\n%d\n",score);
}

Person & Student::operator=(const Student&right)
{
	printf("student ����������");
	return *this;
}

void SmallStudent::info() const
{
	//Student::info();
	printf("����Сѧ��");
}

SmallStudent::SmallStudent()
{
	this->setAge(11111);
}
