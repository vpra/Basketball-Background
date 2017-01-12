#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <EasyBMP.h>
#include <EasyBMP_DataStructures.h>
#include <EasyBMP_BMP.h>
#include <EasyBMP_VariousBMPutilities.h>
#include <cstdlib>
#include <locale>

using namespace std;

#include "BMPwriter.h"

int main(){
	system("python NBAxlsWriter.py");
	system("xls2csv NBA.xls > NBA.csv");
	ifstream inFile("/home/vishnu/Projects/DesktopInfo/NBA.csv");
	vector<vector<string> > data;
	string line;
	while(getline(inFile,line)){
	    stringstream ss(line);
		string temp;
		data.push_back(vector<string>());
		while(getline(ss, temp, ',')){
			data.back().push_back(temp);
		}
	}
	data[0][0] = "    ";
	BMP* desktop = new BMP();
	BMPwriter* writer = new BMPwriter();
	desktop->SetSize(3000, 1500);
	for(int i=0; i<3000; i++){
		for(int b=0; b<1500; b++){
			desktop=writer->blacken(desktop, i, b);
		}
	}
	int col1=0;
	int col2=0;
	int col3=0;
	int col4=0;
	int col5=0;
	int length = 2000;
	int height = 600;
	for(int i = 0; i<data.size(); i++){
		for(int j=0; j<data[i].size(); j++){
			for(int k=0; k<data[i][j].size(); k++){
				desktop = writer->write(desktop, tolower(data[i][j][k]), length, height);
				length = length + writer->getWidth(tolower(data[i][j][k])) + 3;
			}
			if(j == 0){
				length = 2000;
			}
			else{
				length = 2000 + j*100;
			}
		}
		length = 1700;
		height = height + 50;
	}
	desktop->WriteToFile("/home/vishnu/Projects/DesktopInfo/desktop.bmp");
	system("gsettings set org.gnome.desktop.background picture-uri file:///home/vishnu/Projects/DesktopInfo/desktop.bmp");
}
