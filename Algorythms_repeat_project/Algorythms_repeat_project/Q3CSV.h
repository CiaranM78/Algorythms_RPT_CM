#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <string.h>
#include "Stackedarray.h"


using namespace std;



void scaninfojohn20()
{

	arraystack<string> info;
	ifstream johnleads, janeleads;
	fstream common, unique;
	johnleads.open("C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/johns_leads_20.csv");
	janeleads.open("C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/janes_leads_20.csv");
	common.open("common.csv", ios:: out);
	unique.open("unique.csv", ios:: out);

	

	cout << "'''''''''''''''''''''''''''''''''''''''''''" << endl;

			string line;
			while (getline(johnleads, line)) {



				string firstname1;
				string lastname1;
				string company1;
				string telephone1;

				stringstream johnData(line);


				getline(johnData, firstname1, ',');
				getline(johnData, lastname1, ',');
				getline(johnData, company1, ',');
				getline(johnData, telephone1);

				//cout << firstname1 << lastname1 << company1 << telephone1 << "JOHNLEADS" << endl;
				cout << "'''''''''''''''''''''''''''''''''''''''''''" << endl;


				string firstname2;
				string lastname2;
				string company2;
				string telephone2;


				getline(janeleads, line);
				stringstream janeData(line);


				getline(janeData, firstname2, ',');
				getline(janeData, lastname2, ',');
				getline(janeData, company2, ',');
				getline(janeData, telephone2);

				//cout << firstname2 << lastname2 << company2 << telephone2 << "JANELEADS" << endl;


				//if telephone numbers are equal creates csv and puts common data into it.
				//then if its not equal it creates another csv puts the other data into that one. 

				if (telephone1.compare( telephone2)) {

					

						cout << firstname1 << lastname1 << telephone1 << endl;

					unique << firstname1 << lastname1 << telephone1 << endl;

				}
				else {

					cout << firstname1 << lastname1 << telephone1 << endl;

					common << firstname1 << lastname1 << telephone1 << endl;


				}

				


			}
			unique.close();
		johnleads.close();
		janeleads.close();

		}











