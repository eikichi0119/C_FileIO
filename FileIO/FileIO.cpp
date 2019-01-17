// FileIO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
#include<fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ofstream savefile;
	savefile.open("Cam_info.txt");
	savefile << "1st line" << endl;
	savefile << "2nd line" << endl;
	savefile.close();

	ifstream loadfile;
	loadfile.open("Cam_info.txt");
	string inputStr;
	std::vector<std::string> inputContent;
	while (getline(loadfile, inputStr)) {
		inputContent.push_back(inputStr);
	}
	for (int i = 0; i < inputContent.size(); i++) {
		cout << inputContent[i] << endl;
	}
	loadfile.close();
	return 0;
}