#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include"derek_LED.h"

using namespace std;

int main(int argc, char* argv[]){
   if(argc!=2 && argc!=4){
	cout << "Usage is makeLEDs <command> <?ledNum> <?blinkNum>" << endl;
        cout << "   command is one of: on, off, flash, status, or blink" << endl;
	cout << " e.g. makeLEDs flash" << endl;
   }
   cout << "Starting the blinkLEDs program" << endl;
   string cmd(argv[1]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   int ledNum = 0;
   int num = 0;
   for(int i=0; i<=3; i++){
        if(cmd=="on")leds[i].turnOn();
        else if(cmd=="off")leds[i].turnOff();
        else if(cmd=="flash")leds[i].flash("100"); //default is "50"
        else if(cmd=="status")leds[i].outputState();
	else if(cmd=="blink"){
		ledNum = stoi(argv[2]);
		num = stoi(argv[3]);
		leds[ledNum].blink(num);
		return 0;
	}
        else{ cout << "Invalid command!" << endl; }
   }

   cout << "Finished the makeLEDs program" << endl;
   return 0;
}
