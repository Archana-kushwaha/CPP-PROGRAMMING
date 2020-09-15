#include<iostream>
class x {
	int value;
public:
	x(int i);
	int getvalue() const;
};
x::x(int i):value(i)
{
}
int x::getvalue() const {
	return value;
}
int main() {
	x x1(10);
	const x x2(20);
	x1.getvalue();
	x2.getvalue();
}