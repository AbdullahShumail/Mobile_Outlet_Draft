#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Phone {
	
	string name;
    string NAME;
    string Status;
    string BODY;
    string dimensions;
    string DISPLAY;
    string Resolution;
    string PLATFORM;
    string CPU;
    string GPU;
    string MEMORY;
    string Internal;
    string MAIN_CAMERA;
    string battery;

};

string toLowercase(const string& input) {
    string result = input;

    for (char& c : result) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
    }

    return result;
}

class MainMenu {
public:
	
	MainMenu(){
		
		 cout<<L<<endl;
        cout <<I<<tab<< "          Welcome To AMS                                       " << I<<endl;
        cout<<L<<endl;
        cout << endl;
        cout << " Deal starting from $399 Only" << endl;
        cout << " Press 1 to Enter the Menu: "<<endl;
        cout<<L;
		
	}
	
	
	
	
	    string I = "\xdb\xdb\xdb\xdb\xdb";
    	string L = I+I+I+I+I+I+I+I+I+I+I+I+I+I+I+I+I+I+I+I;
    	string tab ="\t\t\t\t";
	
	 
       
    

    void displayphone(const Phone& phone) {

        cout <<L << endl;
        cout <<I << "\tLaunch Date________________________" << phone.NAME        <<I<<endl;
		cout <<I <<tab<< "                                                               " <<I<<endl;
        cout <<I << "\tStatus_____________________________" << phone.Status      <<I<<endl;
		cout <<I <<tab<< "                                                               " <<I<<endl;
        cout <<I << "\tPlatform___________________________" << phone.PLATFORM    <<I<<endl;
        cout <<I << "\t        CPU________________________" << phone.CPU         <<I<<endl;
        cout <<I << "\t        GPU________________________" << phone.GPU         <<I<<endl;
        cout <<I << "\t        Memory_____________________" << phone.MEMORY      <<I<<endl;
		cout <<I <<tab<< "                                                               " <<I<<endl;
        cout <<I << "\tDisplay____________________________" << phone.DISPLAY     <<I<<endl;
        cout <<I << "\t       Internal____________________" << phone.Internal    <<I<<endl;
        cout <<I << "\t       Dimension___________________" << phone.dimensions  <<I<<endl;
		cout <<I <<tab<< "                                                               " <<I<<endl;
        cout <<I << "\tCamera_____________________________" << phone.MAIN_CAMERA <<I<<endl;
		cout <<I <<tab<< "                                                               " <<I<<endl;
        cout <<I << "\tResolution_________________________" << phone.Resolution  <<I<<endl;
		cout <<I <<tab<< "                                                               " <<I<<endl;
        cout <<I << "\tBattery____________________________" << phone.battery     <<I<<endl;
        cout <<L<< endl;
        }

    int getUserChoice() {
        int choice;
        cin >> choice;
        return choice;
    }

    void displayOptions() {
    	cout << L <<endl; 
        cout << I << tab << "Options"<<tab<<"\t\t\t       " << I<<endl;
        cout << I << tab <<"\t1. View iPhone List" <<"                                    " << I<<endl;
        cout << I << tab <<"\t2. Contact" <<"                                             " << I<<endl;
        cout << I << tab <<"\t3. About" <<"                                               " << I<<endl;
        cout << I << tab <<"\t4. Search" <<"                                              " << I<<endl;
        cout << I << tab <<"\t5. Exit" <<"                                                " << I<<endl;
        cout << I << tab <<"\tEnter your choice: " <<"                                    " << I<<endl; 
        cout << L << endl; 
        cout << tab;
    }
    
    void displayList(Phone iphone[]) {
    	
    	cout<<L<<endl;
        for (int i = 0; i < 6; i++) {
            cout<<I<<"\t\t\t"<<iphone[i].name<<" "<<iphone[i+6].name<<" "<<iphone[i+12].name<< I<<endl;
        }
        cout<<L<<endl;
         cout<<tab;
	}
	
	int backToMenu(){
		
		char alpha;
		cout<<I<<tab<<"Continue [Y/N]";
		cin>>alpha;
		
		if (alpha== 'y'){ 
		system("cls");
		return 1;
			}
		else if (alpha == 'n'){
		cout<<I<<tab<<"Good-Bye"<<endl;
		return 0;
		}
		}
		
		
		
		
	void search(Phone iphone[], const string& keyword) {
        bool found = false;
        string lowercaseKeyword = toLowercase(keyword); // Convert keyword to lowercase for case-insensitive search

        cout << L << endl;
        for (int i = 0; i < 18; i++) {
            string lowercaseName = toLowercase(iphone[i].name);
            if (lowercaseName.find(lowercaseKeyword) != string::npos) {
                cout << I << "\t\t\t" << iphone[i].name << I << endl;
                found = true;
            }
        }
        
        cout << L << endl;
              cout<<"Enter the corresponding number for your choice"<<endl;
                 int choice_b;
			  choice_b =getUserChoice();
               if (choice_b != 0){
             
            system("cls");
               	displayphone(iphone[choice_b-1]);

        if (!found) {
            cout << I << "\t\t\tNo matching phones found." << I << endl;
            cout << L << endl;
        }
    }	
		
		
}
		
		void displaycontact() {
        cout<<L<<endl;
        cout <<I<<tab<< "          Contact US                                           " << I<<endl;
        cout<<L<<endl;
        cout << I <<"\tIf you have any questions or need assistance, feel free to contact us"<<"                  "<< I<<endl;	
        cout << I<<"\tCall At    : 03001450099" <<"                                                               "<< I<<endl;
        cout << I<<"\tMail Us At : info@ams.com" <<"                                                              "<< I<<endl;
        cout<<L<<endl;
    }
    void about() {
      string aboutPage = 
"\t\t-----------------------------------\n"
"\t\t           About AMS\n"
"\t\t-----------------------------------\n"
"\n"
"                        Welcome to the Advanced Mobile Store (AMS)!\n"
"\n"
"           AMS is your one-stop destination for exploring the latest iPhone models.\n"
"           We offer an extensive range of iPhone devices with detailed specifications\n"
"           to help you make an informed decision before making a purchase.\n"
"\n"
"                 Features of AMS:\n"
"      1. View iPhone List: Browse through the list of available iPhone models.\n"
"      2. Contact: Get in touch with us for any inquiries or assistance.\n"
"      3. Search: Type in the keyword for your desired model.\n"
"      4. Exit: Leave the AMS application.\n"
"\n"
"       We aim to provide you with the best shopping experience, and we hope you\n"
"       enjoy your visit to AMS!\n";


cout<<L<<endl;
cout << aboutPage << endl;
cout<<L<<endl;
        
    }
		
};




int main() {
	
	MainMenu menu;
    Phone iphone[20];


    ifstream inputFile("iphone_specs.txt");
    if (!inputFile) {
        cout << "Failed to open input file." << endl;
    
    }

    string line;
    while (getline(inputFile, line) ) {
        {
            for (int i = 0 ; i<= 20; i++) {
            	 if (line =="iPhone "+ to_string(i)){
				 
                Phone currentPhone;
                getline(inputFile, currentPhone.name);
                getline(inputFile, currentPhone.NAME);
                getline(inputFile, currentPhone.Status);
                getline(inputFile, currentPhone.BODY);
                getline(inputFile, currentPhone.dimensions);
                getline(inputFile, currentPhone.DISPLAY);
                getline(inputFile, currentPhone.Resolution);
                getline(inputFile, currentPhone.PLATFORM);
                getline(inputFile, currentPhone.CPU);
                getline(inputFile, currentPhone.GPU);
                getline(inputFile, currentPhone.MEMORY);
                getline(inputFile, currentPhone.Internal);
                getline(inputFile, currentPhone.MAIN_CAMERA);
                getline(inputFile, currentPhone.battery); 

                iphone[i] = currentPhone;
                 }
            } 
        }
    }
    
int choice = menu.getUserChoice();
bool check;
    if (choice == 1) {
    	
    	system("cls");
        
       do{
       	
	    menu.displayOptions();
	choice = menu.getUserChoice();
	string keyword;
	
	switch (choice) {
            case 1:
               menu.displayList(iphone);
              int choice_b;
			  choice_b = menu.getUserChoice();
               if (choice != 0){
             
            system("cls");
               	menu.displayphone(iphone[choice_b-1]);
			   }
			  check = menu.backToMenu();
                break;
            case 2:
                 menu.displaycontact();
			 check = menu.backToMenu();
             system("cls");
                break;
            case 3:
                	menu.about();
              check = menu.backToMenu();
             system("cls");
                break;
            case 4:
                    // Search
                    system("cls");
                    cout << "Enter a keyword to search: ";
                    
                    cin.ignore(); // Clear the newline character from previous input
                    getline(cin, keyword);
                    menu.search(iphone, keyword);
                    check = menu.backToMenu();
                    break;
                    
            case 5:
            	 check = menu.backToMenu();
            	break;
            default:
                cout << "Invalid choice." << endl;
                break;
	
    }
	}while(check==true) 
		
	;}
	else { cout << "Invalid choice. Please press 1 to enter the menu." << endl;}
	
	return 0;}
