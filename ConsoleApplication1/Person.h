#pragma once


class Person
{
private:
	char *name;
	char sex;
	int age;
public:
	static Person* create();
	void setAge(int age);
	int getAge() const;
	//后面的const指在这个函数中,不能修改当前类中的成员变量的值,
	//此类就是name,sex,age,表示这个函数很放心,
	//不会因为调用这个函数而改变成员的状态

	const char* getName() const;
	//后面的const表示不准修改成员,
	//但因为返回的是指针类型,
	//是可能修改成员的,
	//所以返回值 也要被const常量修饰,
	//以保证返回的指针也是个常指针,不会被修改
 	virtual void info() const;//虚函数是配合对象指针来寻找子类同名方法并调用,要是指针对象
	//virtual void info1() const = 0;//这是指info1为纯虚函数,不用到cpp中进行实现,包含纯虚函数的类,为抽象类,抽象类不可以被实例化
	Person();
	Person(int age);

	~Person();
	
	void setName(const char* name) const;
	Person(const Person & per);//拷贝构造,类中的成员变量是指针时且该成员有新分配过内存
	Person & operator=(const Person&right);//重载,返回一个Person类的引用,修改=号操作符,参数为 一个Person对象的引用,右边
	//<返回类型说明符> operator <运算符符号>(<参数表>)
	//{
	//	< 函数体 >
	//}
};
class Student:public Person
{
public:
	void info()const;
	Person &operator=(const Student&right);
private:
	float score;
};
class SmallStudent :public Person
{
public:
	SmallStudent();
	void info() const;
private:

};

