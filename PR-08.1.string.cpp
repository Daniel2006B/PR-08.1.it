#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
	{
		pos++;
		if (s[pos + 1])
			k++;
	}
	return k;
}


string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
		if (s[pos + 1])
			s.replace(pos, 1, "**");
		else
			pos++;
	return s;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;

		getline(cin, str);
		cout << "Index of third comma is " << Count(str) << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
