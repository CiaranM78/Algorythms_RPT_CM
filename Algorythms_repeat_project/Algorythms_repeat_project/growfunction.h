#pragma once
#include <string>

using namespace std;

class growsize
{
	string firstname;
	string lastname;
	string company;
	string telephone;

public:

	growsize();
	growsize(string firstname, string lastname, string company, string telephone);

	string getfirstname();
	string getlastname();
	string getCompany();
	string getTelephone();

	string to_string();



};


