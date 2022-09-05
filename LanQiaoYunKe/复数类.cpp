//
//#include <iostream>
//using namespace std;
//
//class Complex
//{
//public:
//	Complex(double a,double b=0);
//	Complex();
//	~Complex();
//	double a;
//	double b;
//	void show();
//
//};
//
//Complex::Complex()
//{
//	this->a = 0;
//	this->b = 0;
//}
//
//Complex::Complex(double x, double y)
//{
//	a = x;
//	b = y;
//}
//
//Complex::~Complex()
//{
//}
//
//Complex operator+(Complex x, Complex y)
//{
//	Complex temp;
//	temp.a = x.a + y.a;
//	temp.b = x.b + y.b;
//	return temp;
//}
//void Complex::show()
//{
//	printf("%f + %fi\n", a, b);
//}
//int main()
//{
//	Complex c1(3, 4);
//	c1.show();
//	Complex c2=4.5;
//	c2.show();
//	Complex c3 = c1+c2;
//	c3.show();
//	return 0;
//}
//
