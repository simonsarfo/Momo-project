#include <iostream>
#include <string>

using namespace std;

int main() {
	//initialize default values
	int balance = 1000;
	int pin = 0000;
	int attempts = 0;
	int choice;
	
	//loop until exit option is selected
	do{
		//Display menu options
		cout << "\nMobile Money Service" << endl;
		cout << "1.Authenticate" << endl;
		cout << "2.Reset/Change Pin" << endl;
		cout << "3.Check Balance" << endl;
		cout << "4.Send Money" << endl;
		cout << "5.Exit" << endl;
		cout << "Enter your choice:";
		cin >> choice;
		
		//Perform action based on user choice
		switch(choice){
			case 1:{
				int input_pin;
				cout << "Enter your pin";
				cin >> input_pin;
				
				if(input_pin == pin){
					cout << "Authentication successful." << endl;	
				}else{
					attempts++;
					cout << "Invalid Pin.Attempts remaining:" << 3 - attempts << endl;
					if(attempts >= 3){
						cout << "Too many attempts.Program will now exit." << endl;
						return 0;
					}
				}
				break;
			}
			case 2:{
				int new_pin;
				cout << "Enter your new_pin:";
				cin >> new_pin;
				cout << "Pin changed successfully." << endl;
				
				break;
			}
			case 3:{
				int input_pin;
				cout << "Enter your pin:";
				cin >> input_pin;
				if(input_pin == pin){
					cout << "Your balance is:" << balance << endl;
				}else{
					cout << "Invalid Pin" << endl;
					return 0;
				}
				break;
			}
			case 4:{
				int recipient_number;
				int amount;
				cout << "Enter recipient mobile number:";
				cin >> recipient_number;
				cout << "Enter amount to send:";
				cin >> amount;
				if(amount <= balance){
					balance -= amount;
					cout << "Transaction successful. New balance is:" << balance << endl;
				}else{
					cout << "Insufficient balance." << endl;
				}
				break;
			}
			case 5:{
				cout << "Exiting program. Thank you for using Mobile Money Service." << endl;
				return 0;
			}
			default:{
				cout << "Invalid choice. Please try again." << endl;
			}
		}
	}while(true);
	
	
	return 0;
}
