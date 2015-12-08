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
	//�����constָ�����������,�����޸ĵ�ǰ���еĳ�Ա������ֵ,
	//�������name,sex,age,��ʾ��������ܷ���,
	//������Ϊ��������������ı��Ա��״̬

	const char* getName() const;
	//�����const��ʾ��׼�޸ĳ�Ա,
	//����Ϊ���ص���ָ������,
	//�ǿ����޸ĳ�Ա��,
	//���Է���ֵ ҲҪ��const��������,
	//�Ա�֤���ص�ָ��Ҳ�Ǹ���ָ��,���ᱻ�޸�
 	virtual void info() const;//�麯������϶���ָ����Ѱ������ͬ������������,Ҫ��ָ�����
	//virtual void info1() const = 0;//����ָinfo1Ϊ���麯��,���õ�cpp�н���ʵ��,�������麯������,Ϊ������,�����಻���Ա�ʵ����
	Person();
	Person(int age);

	~Person();
	
	void setName(const char* name) const;
	Person(const Person & per);//��������,���еĳ�Ա������ָ��ʱ�Ҹó�Ա���·�����ڴ�
	Person & operator=(const Person&right);//����,����һ��Person�������,�޸�=�Ų�����,����Ϊ һ��Person���������,�ұ�
	//<��������˵����> operator <���������>(<������>)
	//{
	//	< ������ >
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

