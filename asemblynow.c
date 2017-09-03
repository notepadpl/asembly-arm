#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;
int main ()
{
	string asme={"asm("};
	string problem={"\""};
	string endofyou={"\\n"};
	string endofher={"\""};
	string noproblem={");"};
	string viki;
	string black;
	string asia;
	string kasia;
	cout<<"podaj nazwe pliku?"<<endl;
	cin>>viki;
	ofstream out;
	out.open("returnn.c");
	fstream infile;
	infile.open(viki.c_str());
	while (!infile.eof())
	{
		getline(infile, black);
		kasia=asme +problem+black+endofyou+endofher+noproblem;
		cout<<kasia<<endl;;
		out<<kasia;
	}
	infile.close();
	out.close();
	return 0;
}