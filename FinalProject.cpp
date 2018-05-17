/*
iStore CustomerEnd
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
int main(int argc, char *argv[]){
	
		string productName = "";
		int productAvailbe = 0;
		bool isFound = false;
		
		ifstream inFile;
		ofstream outFile;

		
		cout << "*The first letter of the product should be capitlized" << "\n" << "The amount needed should be entered as an integer*" << "\n" << "\n" << endl;
		cout << "Enter name of the product(enter -1 to quit): ";
		cin >> productName;
						
		
		
		while (productName != "-1"){
			cout << "Enter the amount wanted of the product: ";
			cin >> productAvailbe;

			inFile.open("list.txt");
			
			if (inFile.is_open()){
								
				while (!inFile.eof()){
					string prodName = "";
					string prodAvailbe = "";
					
					getline(inFile, prodName, '#');
					getline(inFile, prodAvailbe);
					
					if (prodName == productName){
						isFound = true;
						stringstream geek(prodAvailbe);
						int testVar = 0;
						geek >> testVar;
						if (testVar >= productAvailbe){
							cout << prodName << " are available in this amount: " << prodAvailbe << endl;
							testVar -= productAvailbe;
							
						}
						else{
							cout << "There isn't enough of the product available" << endl;
						}
						/*string temp = "";
						inFile >> temp;
						int prod = temp.find(prodName, 0);
						int avail = temp.find("#", prod);
						
						string result;
						ostringstream convert;
						convert << testVar;
						result = convert.str();
						cout << result << endl;
						temp.replace(avail + 1, prodAvailbe.length(), result);
						outFile << temp;
						*/
					}
							
				}
				if(isFound == false){
					cout << "The product could not be found" << endl;
				}
				isFound = false;
			
			}
			else{
				cout << "The file could not be opened" << endl;
				productName = -1;
			}
			//close the file 
			inFile.close();

			cout << "Enter name of the product(enter -1 to quit) :";
			cin >> productName;
			cout << "Enter the amount wanted of the product :";
			cin >> productAvailbe;
		}
}
