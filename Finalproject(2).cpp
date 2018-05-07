

#include <iostream>
#include <string>


using namespace std;
int main(int argc, char *argv[]) {
		
		
		int main ()
		{
		
		
	string productName = "";
	int productAvailbe = "";
	
	string proName = ""; 
	int proAvailbe = 0;
	
	
	
	cout << "enter name of the product";
	cin >> productName;
	cout << "enter the amount wanted of the product";
	cin >> productAvailbe;
	
	ifstream inFile;
	
	inFile .open("list.txt" , ios:: in);
	
	if (inFile.is_open())
	
		string prodName = "";
		int prodAvailbe = 0;
		while (inFile.eof()){
		getLine(inFile, prodName, '#');
		getLine(inFile, prodAvailbe);
		if (prodName == productName ) & (prodAvailbe == productAvavilbe){
			prodName = proName)   
		}





















