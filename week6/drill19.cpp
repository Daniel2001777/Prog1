#include "std_lib_facilities.h"

template<typename T>
struct S{
	S() {}
	S(T t):val(t){};
	const T& get() const {return val;}
	T& get(){return val;}
	//void set(T t) { val = t; }
	S& operator=(const T& a){val=a; return *this;}
private:
	T val;
};

template<typename T>
const T& get(S<T> s)
{
	return s.get();
}
template<typename T>
void read_val(T& v)
{
	cin >> v;
}

int main()
{
	/*S<int> s1(3);
	cout << s1.val << endl;

	S<char> s2('C');
	cout << s2.val << endl;

	S<double> s3(30.5);
	cout << s3.val << endl;

	S<string> s4("Lehet zöld az ég");
	cout << s4.val << endl;
	S<vector<int>> s5(vector<int>(10,30));
	for(int i : s5.val)
	cout << i << ", ";*/
	

	/*S<int> s1(3);
	cout << get(s1) << endl;

	S<char> s2('C');
	cout << get(s2) << endl;

	S<double> s3(30.5);
	cout << get(s3) << endl;

	S<string> s4("Lehet zöld az ég");
	cout << get(s4) << endl;
	
	S<vector<int>> s5(vector<int>(10,30));
	for(int i : get(s5))
	{
	cout << i << ", ";
	}
*/
	

	/*S<int> s1;
	cout << "Enter an int:";
	read_val(s1.get());
	cout <<s1.get() << endl;

	S<char> s2;
	cout << "Enter a char:";
	read_val(s2.get());
	cout << s2.get() << endl;

	S<double> s3;
	cout << "Enter a double:";
	read_val(s3.get());
	cout << s3.get() << endl;

	S<string> s4;
	cout << "Enter a string:";
	read_val(s4.get());
	cout << s4.get() << endl;

	S<vector<int>> svi(vector<int>(10,19));
	cout << "Enter 10 ints:" ;
	for (int i = 0; i < 10; ++i)
	{
		read_val(svi.get()[i]);
	}
	for (int i : svi.get())
	{
		cout << i << ", ";
	}
 */
	return 0;
}