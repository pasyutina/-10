#include "string"
#include "iostream"
#include "fstream"
using namespace std;

int main()
{
    setlocale(0, "");
    ifstream in("f.txt");
    string s, n;
    while (in.peek() != EOF)
    {
        getline(in, s);
        if (s.size() > n.size())
        {
            n = s;
        }
    }
    cout << "����� ������������ ������ = " << n.size() << " ���� ������ = " << n << endl;
    in.close();
    return 0;
}