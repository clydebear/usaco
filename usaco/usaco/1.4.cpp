/*
ID: clydebe1
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ofstream fout("ride.out");
	ifstream fin("ride.in");
	string comet;
	string group;
	fin >> comet;
	fin >> group;
	int cometresult = 1;
	int groupresult = 1;
	for (int i = 0; i < comet.length(); i++)
	{
		int tempt = comet.at(i) - 'A' + 1;
		cometresult = cometresult*tempt;
	}
	for (int i = 0; i < group.length(); i++)
	{
		int tempt1 = group.at(i) - 'A' + 1;
		groupresult = groupresult*tempt1;
	}
	if (cometresult % 47 == groupresult % 47)
	{
		fout << "GO" << endl;
	}
	else
	{
		fout << "STAY" << endl;
	}
	return 0;
}