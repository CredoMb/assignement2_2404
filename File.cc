		#include "File.h"
        

		File::File(string n, string c, Date& d):
        name(n),content(c),date(&d){

        };

		File::File(File& f):
        name(f.name),content(f.content),date(f.date){
            
        };

        // Setters
        void  File::setName(string n){
            name = n;
        };

		void File::setContent(string c){
            content = c;
        };

		void File::setDate(Date& d){
            date = &d;
        };

		void File::setFile(File& f){
            name = f.name;
            content = f.content;
            date = f.date;
        };

        // Getters
        string File::getName() {
            return name;
        } ;

		string File::getContent(){
            return content;
        };

		Date& File::getDate(){
            return *date;
        } ;

        // Other functions
        bool File::lessThan( Date& d) {
            return date->lessThan(d);
        };
    
		void File::print() {
            cout << "===========" << endl;
            cout << "File infos " <<  endl;
            cout << "===========" << endl;

            cout<< "File name : " << getName() << endl;
            cout<< "Date : ";
            date->print();
            cout << endl;
        };  

        void File::printContents(){
            print();
            cout << "File content : " << content << endl;
        }
