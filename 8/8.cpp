#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(0, "");
    ifstream in("f.txt");
    ofstream out("g.txt");
    string n;
    while (in.peek() != EOF)
    {
        getline(in, n);
        out << endl << n << endl << "Количество символов в строке = " << n.size() << endl;
    }
    in.close();
    out.close();
    return 0;
}