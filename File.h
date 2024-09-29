
#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"

using namespace std;

class File {
		
	public:

		//constructor
		File(string name, string content, Date& date);
		File(File&);
		
		//setters
		void setName(string);
		void setContent(string);
		void setDate(Date&);
		void setFile(File&);
		
		//getters
		string getName() ;
		string getContent() ;
		Date& getDate() ;
		

		//other
		bool lessThan( Date& d) ;
        void printContents();
		void print() ;
	
	private:
	
		//variables
		string name, content;
        Date* date;


	
};
#endif
