#include <iostream>
#include <fstream>
#include <string.h>
#include "header.h"

using namespace std;

int main()
{
Clausgabe daten_laden;
Clberechnen rechnung;
Cldtd dtdladen;
Clhilfe hilfe;
string eingabe_buchstabe;


cout << " ***** Inventur Videothek CLI 2018 *****"
     << endl
     << endl << " ***************************************"
     << endl
     << endl << " $: 10.563,77"
     << endl << endl
     << " Sie haben die Wahl:"
     << endl << endl;

cout << " (B)erechnen" << endl;
cout << " (K)onvertieren" << endl;
cout << " (A)nzeigen der DTD" << endl;
cout << " (H)ilfe" << endl;
cout << endl;

for (int i=0;i<8;i++){
cout << endl << " Geben Sie den Buchstaben 'b','k','a', oder'h' ein!" << endl << endl;
cout << " Usereingabe:  ";
cout << " ";
cin >> eingabe_buchstabe;
cout << endl;

if (eingabe_buchstabe=="k"||eingabe_buchstabe=="K"){
   daten_laden.laden();
}
else if(eingabe_buchstabe=="b"||eingabe_buchstabe=="B"){
    rechnung.berechnen();
}
else if(eingabe_buchstabe=="a"||eingabe_buchstabe=="A"){
    dtdladen.dtd_anzeigen();
}
else if(eingabe_buchstabe=="h"||eingabe_buchstabe=="H"){
    hilfe.hilfeanzeigen();
}
else {
    cout << " Was meinen Sie mit" << " " << eingabe_buchstabe << " ?" << endl <<
            " Bitte geben Sie einen neuen Buchstaben ein." << endl << endl;
}
}


return 0;

}

