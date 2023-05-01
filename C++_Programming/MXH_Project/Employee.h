#ifndef EMPLOYEE
#define EMPLOYEE
#include <string>
#include <list>
enum POSITION{
	FREHER,
	MAIN
};
class Employee{
	int m_id;
	char m_position;
	string m_name;
	unsigned short age;
	unsigned short m_height;
	list<HOBBIES> l_Hobbies;
	list<int> l_Friends; 
}
#endif EMPLOYEE
