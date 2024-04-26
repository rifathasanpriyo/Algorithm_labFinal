#include<bits/stdc++.h>
using namespace std;

int main()
{
	string name;
	ofstream file;
	file.open("student3.txt");
	cout<<"Enter your name:";
	getline(cin,name);

	file<<"welcome "<<name<<endl;

	file.close();


	return 0;
}

