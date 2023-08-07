#include "Stackedarray.h"
#include <iostream>
#include <string>
#include <fstream>
#include "growfunction.h"

using namespace std;


/*void display(growsize& grow)
{
	cout << grow.to_string() << endl;
}

struct leads
{
	std::string firstname;
	std::string lastname;
	std::string company;
	std::string telephone;

};

*/

void scaninfojane20()
{
	std::ifstream readinfo;
	readinfo.open("C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/janes_leads_20.csv");

	if (!readinfo.is_open()) {
		cout << "cant read file." << endl;

	}

	std::string line;
	while (getline(readinfo, line)) {
		cout << line << endl;
	}

	readinfo.close();






}

void scaninfojane250()
{
	std::ifstream readinfo;
	readinfo.open("C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/janes_leads_250.csv");

	if (!readinfo.is_open()) {
		cout << "cant read file." << endl;

	}

	std::string line;
	while (getline(readinfo, line)) {
		cout << line << endl;
	}

	readinfo.close();






}

void scaninfojohn20()
{
	std::ifstream readinfo;
	readinfo.open("C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/johns_leads_20.csv");

	if (!readinfo.is_open()) {
		cout << "cant read file." << endl;

	}

	std::string line;
	while (getline(readinfo, line)) {
		cout << line << endl;
	}

	readinfo.close();






}

void scaninfojohn250()
{
	std::ifstream readinfo;
	readinfo.open("C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/johns_leads_250.csv");

	if (!readinfo.is_open()) {
		cout << "cant read file." << endl;

	}

	std::string line;
	while (getline(readinfo, line)) {
		cout << line << endl;
	}

	readinfo.close();






}


int main(){

	scaninfojane20();

	//scaninfojane250();
	
	//scaninfojohn20();

	//scaninfojohn250();













			/*	do
				{
					cin >> datainfo;
					if (datainfo != "stop")
						stack.push(datainfo);


				} while ( topP != space);

						while (stack.count() != 0)
						{

							cout << stack.top();
							stack.pop();
				

						}

						return 0;


						*/
	








}