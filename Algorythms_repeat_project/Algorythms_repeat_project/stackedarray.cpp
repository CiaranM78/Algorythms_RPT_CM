#include "Stackedarray.h"


#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "growfunction.h"


using namespace std;







//
//void csvarray() {
//
//	std::ifstream readinfo;
//	readinfo.open("C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/janes_leads_20.csv");
//
//	if (!readinfo.is_open()) {
//		cout << "cant read file." << endl;
//
//	}
//
//
//	std::string line;
//	while (getline(readinfo, line)) {
//		
//		if (readinfo.is_open()) {
//
//			stack.push readinfo;
//
//		}
//
//
//
//	}
//
//	readinfo.close();
//
//}


//void reverse(int* data, int size)
//{
//	arraystack<int> topP;
//	for (int i = 0; i < size; i++)
//	{
//		topP.push(data[i]);
//	}
//	int i = 0;
//	while (topP.isEmpty())
//	{
//		data[i] = topP.top();
//		topP.pop();
//		i++;
//	}
//}


void scaninfojohn20()
{
	arraystack<string> info;
	ifstream readinfo;
	readinfo.open("C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/johns_leads_250.csv");

	if (!readinfo.is_open()) {
		cout << "cant read file." << endl;

	}

	string line;
	while (getline(readinfo, line)) {

		string firstname;
		string lastname;
		string company;
		string telephone;


		stringstream readinfo(line);

		getline(readinfo, firstname, ',' );
		getline(readinfo, lastname, ',');
		getline(readinfo, company, ',');
		getline(readinfo, telephone);

		string* firstptr;
		//firstptr = &firstname;
		string* lastptr;
		//lastptr = &lastname;
		string* comptr;
		//comptr = &company;
		string* teleptr;
		//teleptr = &telephone;

		*firstptr = firstname;
		*lastptr = lastname;
		*comptr = company;
		*teleptr = telephone;


	//	cout << line << endl;
		info.push(*firstptr);
		info.push(*lastptr);
		info.push(*comptr);
		info.push(*teleptr);


		cout  << firstptr <<  lastptr << comptr << teleptr << "line complete" << endl;

		

	}

	readinfo.close();
}

void push() {








}

int main(){

	//scaninfojane20();

	//scaninfojane250();
	
	scaninfojohn20();

	//scaninfojohn250();






	
	//cout << data << endl;
	

	/*string data = "C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/johns_leads_20.csv";


	arraystack<string> info;
		

	string dataline;

*/






			/*cout << data[i];
			info.push(data[i]);*/

		}


	

//print();





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
	








