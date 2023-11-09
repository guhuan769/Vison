#include <iostream>

using namespace std;
/*
	结构体定义:
*/

struct Books
{
	Books() {
		cout << "no param" << endl;
	}
	Books(string name) {
		bookName = name;
		cout << bookName << endl;
	}
public:
	int id;
	string bookName;
	void print() {
		cout << "struct" << endl;
	}
	void print(int i) {
		cout << "struct" << endl;
	}
	void print(Books* book) {
		cout << "id" << book->id << endl;
		cout << "bookName" << book->bookName << endl;
	}
};
/// <summary>
/// C++类
/// 1、在类中定义成员属性默认是private修饰
/// 2、当创建类的实例的时候就会自动创建一个this指针 指向当前对象的地址
/// </summary>
class Student
{
public:
	int stuId;
	string stuName;
	string gender;
	int age;
	/*
		在类中定义一个与类名同名函数，就是构造函数，构造函数主要是用来初始化成员属性
		函数的
	*/
	Student() {
	}
	Student(string name, string gender)
	{
		this->stuName = name;
		this->gender = gender;
	}
public:
	/*
		类成员函数
	*/
	void printStudentInfo(Student* stu)
	{
		//此处的this指向的是Student实体
		cout << "stuId : " << stu->stuId << endl;
		cout << "stuName : " << stu->stuName << endl;
		cout << "stuGender : " << stu->gender << endl;
		cout << "stuAge : " << stu->age << endl;
	}

	/*
		类成员函数
	*/
	void printStudentInfo()
	{
		//此处的this指向的是Student实体
		cout << "stuId : " << this->stuId << endl;
		cout << "stuName : " << this->stuName << endl;
		cout << "stuGender : " << this->gender << endl;
		cout << "stuAge : " << this->age << endl;
	}
};

int main()
{
	//Books book;
	//book.id = 1001;
	//book.bookName = "aaa";
	//book.print();
	//book.print(1);
	//book.print(&book);
	//实例化了Student对象

	Student stu;
	stu.stuId = 1;
	stu.age = 100;
	stu.gender = "男";
	stu.stuName = "Elon Snyder";
	stu.printStudentInfo(&stu);
	stu.printStudentInfo();
	cout << "============================" << endl;
	
	//使用带参数的构造函数来实例化Student 对象 

	Student stu1("gerry", "1");
	stu1.age = 22;
	stu1.stuId = 22;
	stu1.printStudentInfo();
	cout << "============================" << endl;

	//定义类指针
	Student* pStu = &stu;
	pStu->age = 55;
	pStu->printStudentInfo();

	//指向空指针
	Student* stu2 = new Student();
	stu2->age = 32;
	stu2->printStudentInfo();
	cout << "============================" << endl;
	return 0;

}

