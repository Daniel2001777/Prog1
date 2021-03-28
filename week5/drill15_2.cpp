#include "std_lib_facilities.h"

struct Person
{
public:
	Person(string n1, string n2, int a){
		string s4 = ";:'[]*&^%$#@!";
		char s5 = '"';
		n1=first_name;
		a=age1;
		n2=second_name;
		if(0>a || a>150)
		{
		 	error("Bad age");
		}
		for(auto i:s4)
		{
			for(auto j:n1)
			{
				if(s4[i]==n1[j] || n1[i]==s5)
					error("Bad name");
			}
		}
		for(auto i:s4)
		{
			for(auto j:n2)
			{
				if(s4[i]==n2[j] || n2[i]==s5)
					error("Bad name");
			}
		}
	}
	string name1() const {return first_name;}
	string name2() const {return second_name;}
	int age() const {return age1;}
private:
	string first_name, second_name;
	int age1;
};

ostream& operator<<(ostream& o, const Person& p){
	o << p.name1() << ", " << p.name2() << ", " << p.age();
	return o;
}

istream& operator>>(istream& i, Person& p)
{
	string s;
	string s2;
	int n;
	i >> s;
	i >> s2;
	i >> n;
	p= Person{ s, s2, n};
	return i;
}

int main(){


	/*vector<Person> vect;
	Person p2;
	for (int i = 0; i < 5; ++i)
	{
		cin >> p2;
		vect.push_back(p2);
		cin.clear();
	}
	for(Person p3 : vect)
		cout << p3;
*/
	/*Person p{ "Goofy", 63};
	cout << p << endl;*/
	return 0;
}