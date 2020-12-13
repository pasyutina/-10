#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	ifstream in("f.txt");
	ofstream out("g.txt");
	char a;
	string s, n;
	while (in.peek() != EOF)
	{
		getline(in, s);
		for (unsigned int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'c') n += "c++";
			else n += s[i];
		}
		out << n << endl;
	}
	in.close();
	out.close();
	return 0;
}