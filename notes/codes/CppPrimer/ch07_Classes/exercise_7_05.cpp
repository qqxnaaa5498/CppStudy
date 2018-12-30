//应该是const, 因为此处只需要调取常量对象的成员函数，而不用向对象中写入新值（不加const也不会报错）。

#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

struct Person {
	string getName() const {return name;}
	string getAddr() const {return addr;}
	string name;
	string addr;
};

int main() {
	Person andrew;
	andrew.name = "andrew";
	andrew.addr = "1101 Dexter N";
	cout << andrew.getName() << ' ' << andrew.getAddr() << endl;

}
