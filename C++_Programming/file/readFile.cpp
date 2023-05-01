#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string fileName = "text.txt";
//	fstream readFile;
	ifstream readFile;
//	readFile.open(fileName, ios::in);
	readFile.open(fileName);
	if(readFile.is_open()){

		while(readFile){
		string data;
		int c;
		getline(readFile, data,':');
		readFile >> c;
		cout << data << " | " << c << endl;
		}
	}
	else
		cout << "Can not open file: " << fileName << endl;
	return 0;
}
