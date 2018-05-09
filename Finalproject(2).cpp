
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(int argc, char *argv[]){
	
		string productName = "";
		string productAvailbe = "";
		
		
		cout << "enter name of the product(enter -1 to quit) :";
		cin >> productName;
		cout << "enter the amount wanted of the product :";
		cin >> productAvailbe;
		
		ifstream inFile;
		
		inFile .open("list.txt" , ios:: in);
		
		while (productName != "-1")
			if (inFile.is_open())
			
				
				while (!inFile.eof()){
					string prodName = "";
					string prodAvailbe = "";
					getline(inFile, prodName, '#');
					getline(inFile, prodAvailbe);
					if (prodName == productName ){ 
						cout << prodName << endl;
						if (prodAvailbe == productAvailbe){
							cout << prodAvailbe << endl; 
							}
						}
				cout << "enter name of the product(enter -1 to quit) :";
				cin >> productName;
				cout << "enter the amount wanted of the product :";
				cin >> productAvailbe;		
				}
				
				
				//close the file 
				inFile.close();
				}
		
		

				
			

