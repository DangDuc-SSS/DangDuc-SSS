#include <string>
#include <iostream>
#include <memory>

using namespace std;
class Test{

	int m_int;
	int *m_pInt;
		public:
	int getInt() const {
		return m_int;
	}
	Test(int data):m_int{data}{cout << "Ctor"  << m_int << endl;}
	Test(const Test &t):m_int{t.m_int}, m_pInt{t.m_pInt}{
		cout << "Coppy Ctor" << endl;
	}
	Test(Test &&t):m_int{t.m_int}, m_pInt{t.m_pInt}{
		cout << "move Ctor" << endl;
	}
	~Test(){cout << "Dtor" << m_int << endl;}
};
// class MyString
// {
// private:
// 	std::string m_string;
// public:
// 	// explicit keyword makes this constructor ineligible for implicit conversions
// 	explicit MyString(int x) // allocate string of size x
// 	{
// 		m_string.resize(x);
// 	}

// 	MyString(const char* string) // allocate string to hold string value
// 	{
// 		m_string = string;
// 	}

// 	friend std::ostream& operator<<(std::ostream& out, const MyString& s);

// };

// std::ostream& operator<<(std::ostream& out, const MyString& s)
// {
// 	out << s.m_string;
// 	return out;
// }

// void printString(const MyString& s)
// {
// 	std::cout << s;
// }
void func(unique_ptr<Test> &data){
	cout << "Func" << data->getInt() << endl;
}
unique_ptr<Test> func2(){
	unique_ptr<Test> temp{new Test{3}};
	return temp;
}
Test funC3(){
	Test temp{4};
	return temp;
}
int main()
{
	// MyString mine = 'x'; // compile error, since MyString(int) is now explicit and nothing will match this
	// std::cout << mine;
	// std::cout << "hee";
	//printString(static_cast<MyString>('x')); // compile error, since MyString(int) can't be used for implicit conversions
	
	// unique_ptr<Test> p1{new Test(5)};
	// func(p1);

	// unique_ptr<Test> p2;

	// p2 = func2();
	Test data{funC3()};
	cout << data.getInt() << endl;
	return 0;
}