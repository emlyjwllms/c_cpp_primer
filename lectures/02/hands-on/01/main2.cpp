#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
	unsigned int a = -1;
	a = 4294967295;
	cout << typeid(a).name();
	printf("\n%d\n", a);
	return 0;
}
