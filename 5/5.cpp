#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main()
{
	setlocale(0, "");
	ifstream in("f.txt");
	ofstream out("s.txt");
	int a = 0;
	string s, s1, s2, s3;
	while (in.peek() != EOF)
	{
		getline(in, s);
		for (unsigned int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'p')
			{
				out << s;
			}
		}
	}
	in.close();
	out.close();
	return 0;
}