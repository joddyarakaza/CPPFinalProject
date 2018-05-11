

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
int main(int argc, char *argv[]){
	
		string productName = "";
		int productAvailbe = 0;
		bool isFound = false;
		
		
		cout << "enter name of the product(enter -1 to quit): ";
		cin >> productName;
		cout << "enter the amount wanted of the product: ";
		cin >> productAvailbe;
		
		ifstream inFile;
		
		
		
		while (productName != "-1"){
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
							
						}
						else{
							cout << "There isn't enough of the product available" << endl;
						}
						string temp = "";
						inFile >> temp
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

			cout << "enter name of the product(enter -1 to quit) :";
			cin >> productName;
			cout << "enter the amount wanted of the product :";
			cin >> productAvailbe;
		}
}
