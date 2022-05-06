#include <iostream>

using namespace std;

class Pizza {
private:
	int size;
public:
	Pizza(int s) { // constructor
		size = s;
	}
	int getSize() { return size; } //getter
	void setSize(int s) { size = s; } //setter
};

Pizza createPizza(int s) { // Pizza 객체를 반환하는 함수
	Pizza p{ s };
	return p;
}
void makeDouble(Pizza& p) { //Pizza 객체의 size를 두배로 바꾸는 함수
	int size = p.getSize();
	p.setSize(size * 2);
}


int main() {
	Pizza p1{ 10 };
	cout << p1.getSize()<<endl;
	makeDouble(p1);
	cout << p1.getSize() << endl;
	auto p2=createPizza(22);
	cout << p2.getSize();

	return 0;
}
