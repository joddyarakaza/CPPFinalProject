

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) {
	
	ofstream outfile;
	string itemNum = "";
	string item = "";
	
	
	outfile.open("list.txt");
	
	if(outFile.is_open()){
		cout << "Enter the item name(enter -1 to quit): ";
		cin >> item;
		while (item != "-1"){
			cout << "Enter the item number: ";
			cin >> itemNum;
			outFile << item << '#' << itemNum << endl;
			cout << "Enter the item name(enter -1 to quit): ";
			cin >> item;
												
		}
		outFile.close();	
	}
	else{
		cout << "The file could not be opened" << endl;
	}
	
}

	
}
