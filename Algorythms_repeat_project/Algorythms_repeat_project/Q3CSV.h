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
	fstream uniquejane, uniquejohn, common;
	johnleads.open("C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/johns_leads_20.csv");
	janeleads.open("C:/Users/Ciaran/Documents/algorythm repository/Algorythms_repeat_ciaran_murtagh/Algorythms_repeat_project/Algorythms_repeat_project/janes_leads_20.csv");
	uniquejane.open("uniquejane.csv", ios:: out);
	uniquejohn.open("uniquejohn.csv", ios::out);
	common.open("common.csv", ios:: out);

	

	//cout << "'''''''''''''''''''''''''''''''''''''''''''" << endl;

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
				//cout << "'''''''''''''''''''''''''''''''''''''''''''" << endl;


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


				int telecompare = telephone1.compare(telephone2);



				if (telecompare == 0) {


					cout << firstname1 << lastname1 << telephone1 << endl;


					common << firstname1 << "," << lastname1 << "," << company1 << "," << telephone1 << endl;

				}

				else if (telecompare < 0) {

					//cout << firstname1 << lastname1 << telephone1 << endl;

					uniquejohn << firstname1 << lastname1 << telephone1 << endl;

					uniquejane << firstname2 << lastname2 << telephone2 << endl;


				}

				else {
					uniquejohn << firstname1 << lastname1 << telephone1 << endl;

					uniquejane << firstname2 << lastname2 << telephone2 << endl;

				}
			}


			
			common.close();
		johnleads.close();
		janeleads.close();
		uniquejohn.close();
		uniquejane.close();

		}











