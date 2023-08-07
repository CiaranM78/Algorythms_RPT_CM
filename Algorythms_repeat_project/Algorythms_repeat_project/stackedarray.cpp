#include "Stackedarray.h"
#include <iostream>
#include <string>
#include <fstream>
#include "growfunction.h"

using namespace std;


void display(growsize& grow)
{
	cout << grow.to_string() << endl;
}

struct leads
{
	string firstname;
	string lastname;
	string company;
	string telephone;

};

void scaninfo()
{

	ifstream info("jane_leads_20.txt");
	bool field = true;

	if (info)
	{







	};





}









int main(){

	arraystack <string> stack;

	string datainfo;

	
















			/*	do
				{
					cin >> datainfo;
					if (datainfo != "stop")
						stack.push(datainfo);


				} while (datainfo != "stop");

						while (stack.count() != 0)
						{

							cout << stack.top();
							stack.pop();
				

						}

						return 0;


						*/
	








}