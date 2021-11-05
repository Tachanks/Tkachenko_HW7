#include"bankApp.h"

void bankAccount::setName(string n){
	customerName = n;
}

void bankAccount::setBalance(float bal){
	balance = bal;
}

bankAccount::bankAccount(string n, float bal){
	setName(n);
	setBalance(bal);
}

string bankAccount::getName(){
	return customerName;
}

float bankAccount::getBalance(){
	return balance;
}

void bankAccount::deposit(float dep){
	balance = balance + dep;
}

void bankAccount::withdraw(float draw){
	balance = balance - draw;
}

int main(int argc, char* argv[]){
	bankAccount jackAccount("Jack Smith", 50.0);
	bankAccount jillAccount("Jill Brian", 100.0);
	
	bankAccount bankArray[3] = { bankAccount("Ralph Kramden", 10.0), bankAccount("Alice Kramden", 20.0), bankAccount("Ed Norton", 30.0)};

	jackAccount.deposit(30.0);
	jillAccount.deposit(30.0);
	
	for(int i = 0; i < 3; i++){
		bankArray[i].deposit(30.0);
	}

	jackAccount.withdraw(20.0);
	jillAccount.withdraw(20.0);

	for(int i = 0; i < 3; i++){
                bankArray[i].withdraw(20.0);
        }
	
	cout << "Name: " << jackAccount.getName() << " Balance: " << jackAccount.getBalance() << endl;
        cout << "Name: " << jillAccount.getName() << " Balance: " << jillAccount.getBalance() << endl;
	
	for(int i = 0; i < 3; i++){
               cout << "Name: " << bankArray[i].getName() << " Balance: " << bankArray[i].getBalance() << endl;
        }
	
	return 0;
}
