#include "ParaClass.h"

void ParaClass::init(){
	first = 0;
	second = 0;
}
void ParaClass::read(){
	std::cout << "first = ";
	std::cin >> p.first;
	std::cout << "second = ";
	std::cin >> p.second;
}
void ParaClass::display(){
	std::cout << "first = " << p.first << '\n';
	std::cout << "second = " << p.second;
}
int ParaClass::nod(){
	return 0;
}
