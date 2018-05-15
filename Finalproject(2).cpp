
#include <iostream>
#include <string>
#include <fstream>

					
using namespace std;
 int main(int argc, char *argv[]) {
	
 	ofstream outfile;
	int itemNum = 0;
	string item = "";
		
	outfile.open("list.txt");
 	
 	if(outfile.is_open()){
		cout << "Enter the item name(enter -1 to quit): ";
		cin >> item;
		while (item != "-1"){
			cout << "Enter how much of the item there is: ";
			cin >> itemNum;
			outfile << item << '#' << itemNum << endl;
			cout << "Enter the item name(enter -1 to quit): ";
			cin >> item;
			}
			outfile.close();	
	}
	else{
		cout << "The file could not be opened" << endl;
	}
				
				
}
