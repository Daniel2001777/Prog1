#include <iostream>

using namespace std;


class B1{
public:
	virtual void vf() { cout << "B1::vf()\n"; }
	void f() { cout << "B1::f()\n"; }
	virtual void pvf() = 0;
};
class D1 : public B1{
public:
	void vf() override { cout << "D1::vf()\n"; }
	void f(){ cout << "D1::f()\n";}
	//void pvf() override {cout << "D1::pvf()\n";}
};

class D2 : public D1{
public:
	void pvf() override {cout << "D2::pvf()\n";}
};

class B2{
public:
	virtual void pvf() = 0;
};

class D21 : public B2{
public:
	void pvf() override { cout << s;} 

private:
	string s = "Igen\n";
};

class D22 : public B2{
public:
	void pvf() override {cout << i << endl; }

private:
	int i = 0;
};

void f(B2& B3){
	B3.pvf();
}

int main()
{
	/*B1 B;

	B.vf();
	B.f();
	B.pvf();*/

	/*D1 D;

	D.vf();
	D.f();
	D.pvf();

	B1& B2 = D;
	B2.vf();
	B2.f();*/

	D2 d;
	d.f();
	d.vf();
	d.pvf();
	

	D21 dd;
	D22 ddd;

	f(dd);
	f(ddd);

	return 0;
}