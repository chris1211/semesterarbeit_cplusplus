#include <iostream>
#include <fstream>
#include <string.h>
#include "header.h"
using namespace std;

void Clberechnen::berechnen_anzahl(){

    ifstream berechnung;
    string dateiname1_txt;
    ofstream datei1;
    cout << " Im Folgenden wird die Anzahl der Filme angezeigt, welche sich im Lager befinden:" << endl << endl;

    berechnung.open("lager.txt");
        for (zaehler_berechnung=0;;)
        {
            berechnung.get(zeichen_berechnung);
            if (berechnung.eof()) break;
            switch(zeichen_berechnung)
            {
            case ' ':
                if (zaehler_berechnung)
                   {
                   zaehler_berechnung=0;
                   }
                   break;
                case '\n':
                if (zaehler_berechnung)
                {
                   puffer_berechnung[zaehler_berechnung]='\0';
                   cout << " Film "<< filmanzahl << ": "<< puffer_berechnung <<" Stueck"<< endl;
                   zaehler_berechnung=0;
                   filmanzahl++;

                }
                   break;
                default:
                puffer_berechnung[zaehler_berechnung]=zeichen_berechnung;
                zaehler_berechnung++;
                   break;
            }

        }

        berechnung.close();

    cout << endl;
    cout << " Die Anzahl der Filme betraegt " << anzahl <<"." << endl << endl;

    cout << endl << " Nun wird ein Export des Wertes durchgefuehrt. " << endl << endl
            << " Bitte geben Sie nur einen Dateinamen ein, eine Dateiendung ist nicht notwendig." << endl
             << " Es wird automatisch eine Textdatei erstellt." << endl << endl;
    cout << " Usereingabe:  ";

            cin >> dateiname1_txt;
            laenge_txt=dateiname1_txt.length();
            dateiname1_txt.insert(laenge_txt,".txt");


    datei1.open(dateiname1_txt);
    datei1 << " Anzahl der Filme gesamt betraegt: "<< anzahl << endl;
    datei1.close();

    cout << endl;
    cout << " Ihre Datei wurde erstellt. Diese finden Sie im Debugger Ordner.";
    cout << endl;
}


void Clberechnen::berechnen_lager(){
    ifstream berechnung2;
    string dateiname2_txt;
    ofstream datei2;

    cout << " Nun wird die Anzahl der Filme in den jeweiligen Lagerorten berechnet." << endl << endl;

    berechnung2.open("lager.txt");
    for (zaehler=0;;)
    {
        berechnung2.get(zeichen);
        if (berechnung2.eof()) break;
        switch(zeichen)
        {
        case ' ':
            if (zaehler)
               {
               puffer[zaehler]='\0';
               if (puffer[0]=='A'&&puffer[1]=='1'){
               zaehlera1++;
               }
               else if(puffer[0]=='A'&&puffer[1]=='2'){
                   zaehlera2++;
               }
               else if(puffer[0]=='B'&&puffer[1]=='1'){
                   zaehlerb1++;
               }
               else if(puffer[0]=='B'&&puffer[1]=='2'){
                   zaehlerb2++;
               }
               else if(puffer[0]=='C'&&puffer[1]=='1'){
                   zaehlerc1++;
               }
               else if(puffer[0]=='C'&&puffer[1]=='2'){
                   zaehlerc2++;
               }
               else if(puffer[0]=='D'&&puffer[1]=='1'){
                   zaehlerd1++;
               }
               else if(puffer[0]=='D'&&puffer[1]=='2'){
                   zaehlerd2++;
               }
               else if(puffer[0]=='D'&&puffer[1]=='3'){
                   zaehlerd3++;
               }
               else {
               zaehler=0;
               }
               zaehler=0;

               }
               break;
            case '\n':
            if (zaehler)
            {
                zaehler=0;

            }
               break;
            default:
            puffer[zaehler]=zeichen;
            zaehler++;
               break;
        }

    }

    berechnung2.close();

    cout << " Anzahl der Filme in Lagerraum A1: " << zaehlera1 << endl
         << " Anzahl der Filme in Lagerraum A2: " << zaehlera2 << endl
         << " Anzahl der Filme in Lagerraum B1: " << zaehlerb1 << endl
         << " Anzahl der Filme in Lagerraum B2: " << zaehlerb2 << endl
         << " Anzahl der Filme in Lagerraum C1: " << zaehlerc1 << endl
         << " Anzahl der Filme in Lagerraum C2: " << zaehlerc2 << endl
         << " Anzahl der Filme in Lagerraum D1: " << zaehlerd1 << endl
         << " Anzahl der Filme in Lagerraum D2: " << zaehlerd2 << endl
         << " Anzahl der Filme in Lagerraum D3: " << zaehlerd3 << endl;

    cout << endl << " Nun wird ein Export der Werte durchgefuehrt. " << endl << endl
            << " Bitte geben Sie nur einen Dateinamen ein, eine Dateiendung ist nicht notwendig." << endl
             << " Es wird automatisch eine Textdatei erstellt." << endl << endl;
    cout << " Usereingabe:  ";

            cin >> dateiname2_txt;
            laenge_txt2=dateiname2_txt.length();
            dateiname2_txt.insert(laenge_txt2,".txt");


    datei2.open(dateiname2_txt);
    datei2 << " Lagerraum A1 Anzahl:" << zaehlera1 << endl
             << " Lagerraum A2 Anzahl:" << zaehlera2 << endl
             << " Lagerraum B1 Anzahl:" << zaehlerb1 << endl
             << " Lagerraum B2 Anzahl:" << zaehlerb2 << endl
             << " Lagerraum C1 Anzahl:" << zaehlerc1 << endl
             << " Lagerraum C2 Anzahl:" << zaehlerc2 << endl
             << " Lagerraum D1 Anzahl:" << zaehlerd1 << endl
             << " Lagerraum D2 Anzahl:" << zaehlerd2 << endl
             << " Lagerraum D3 Anzahl:" << zaehlerd3 << endl;

    datei2.close();

    cout << endl;
    cout << " Ihre Datei wurde erstellt. Diese finden Sie im Debugger Ordner.";
    cout << endl;

}




void Clausgabe::laden(){
    ifstream eingabe1,eingabe2;
    ofstream file;
    string dateiname;
    Clausgabe2 ausgabe_xml;


    cout << endl;
    cout << " Im Folgenden werden die bei der Inventur erstellten Dateien in eine XML-Instanz zusammengefuehrt." << endl;
    cout << " Bitte geben Sie nur einen Dateinamen ein, eine Dateiendung ist nicht notwendig." << endl
         << " Es wird automatisch eine XML-Instanz erstellt." << endl << endl;
    cout << " Usereingabe:  ";
    cin >> dateiname;
    laenge=dateiname.length();
    dateiname.insert(laenge,".xml");


    file.open(dateiname);

    eingabe2.open("filminventur.xml");
    eingabe1.open("lager.txt");
    for (ausgabe_xml.zaehler_xml=0;;)
        {
        eingabe2.get(ausgabe_xml.zeichen_xml);
        if (eingabe2.eof()) break;
        switch(ausgabe_xml.zeichen_xml)
           {
        case '<':
            if (ausgabe_xml.zaehler_xml)
               {
               ausgabe_xml.puffer_xml[ausgabe_xml.zaehler_xml]='\0';
               file << ausgabe_xml.puffer_xml;
               ausgabe_xml.zaehler_xml=0;
               }
           break;
        case ' ':
            if (ausgabe_xml.zaehler_xml)
               {
                if (ausgabe_xml.puffer_xml[0]=='f'){
               ausgabe_xml.puffer_xml[ausgabe_xml.zaehler_xml]='\0';
               file << "<" << ausgabe_xml.puffer_xml;
               ausgabe_xml.zaehler_xml=0;
                }
               else{
               ausgabe_xml.puffer_xml[ausgabe_xml.zaehler_xml]=ausgabe_xml.zeichen_xml;
               ausgabe_xml.zaehler_xml++;}
               }
           break;
        case '=':
            if (ausgabe_xml.zaehler_xml)
               {
               ausgabe_xml.puffer_xml[ausgabe_xml.zaehler_xml]='\0';
               file << " " << ausgabe_xml.puffer_xml;
               ausgabe_xml.zaehler_xml=0;
               }
           break;
        case '"':
            if (ausgabe_xml.zaehler_xml)
               {
               ausgabe_xml.puffer_xml[ausgabe_xml.zaehler_xml]='\0';
               file << "=" << "'"<< ausgabe_xml.puffer_xml <<"'" << ">" << endl <<"<meta>"<<endl;
               ausgabe_xml.zaehler_xml=0;
               }
           break;
        case '>':
            if (ausgabe_xml.zaehler_xml)
               {
               if (ausgabe_xml.puffer_xml[0]!='/'){
                   ausgabe_xml.puffer_xml[ausgabe_xml.zaehler_xml]='\0';
                   file << "<" << ausgabe_xml.puffer_xml <<">";

                   //Parsing von der Textdatei

                   for (zaehler=0,zaehler_stock=1;;)
                   {
                       eingabe1.get(zeichen);
                       if (eingabe1.eof()) break;
                       switch(zeichen)
                       {
                       case ' ':
                           if (zaehler)
                              {
                              puffer[zaehler]='\0';
                              if (puffer[0]=='A'||puffer[0]=='B'||puffer[0]=='C'||puffer[0]=='D'){

                              file << " " << "ort='"<< puffer<< "'>";
                              }
                              else {
                                  file << endl;
                                  file << "<vorrat id='"<< zaehler_stock <<"'>" << endl;
                                  zaehler_stock++;
                              file << "<video id='" << puffer << "'";
                              }
                              zaehler=0;

                              }

                              break;
                           case '\n':
                           if (zaehler)
                           {
                               puffer[zaehler]='\0';
                               file << puffer << "</video>" << endl << "</vorrat>";
                               zaehler=0;

                           }
                              break;
                           default:
                           puffer[zaehler]=zeichen;
                           zaehler++;
                              break;
                       }

                   }

                   eingabe1.close();

                   //Parsing-Ende der Textdatei

               }
               else if (ausgabe_xml.puffer_xml[1]=='f'){
                   ausgabe_xml.puffer_xml[ausgabe_xml.zaehler_xml]='\0';
                   file<< "</meta>"<< endl;

                   file << "<" << ausgabe_xml.puffer_xml << ">" << endl;
               }
               else {
                   ausgabe_xml.puffer_xml[ausgabe_xml.zaehler_xml]='\0';
                   file << "<" << ausgabe_xml.puffer_xml << ">" << endl;
               }
               ausgabe_xml.zaehler_xml=0;
               }
           break;
        case '\n':
           break;
        default:
            ausgabe_xml.puffer_xml[ausgabe_xml.zaehler_xml]=ausgabe_xml.zeichen_xml;
            ausgabe_xml.zaehler_xml++;
           break;
           }
        }
    eingabe2.close();

    file.close();
    cout << endl;
    cout << " Ihre Datei wurde erstellt. Diese finden Sie im Debugger Ordner.";
    cout << endl;


}

void Clberechnen::berechnen(){

  string eingabe;
  cout << " Sie haben die Auswahl zwischen der Berechnung der gesamten Anzahl der Filme" << endl
       << " und der Berechnung, wie viele Filme jeweils in den Lagern gelagert sind. " << endl
       << " Bitte geben Sie fuer die Berechnung die Zahl 1 (Anzahl insgesamt) oder die" << endl
       << " Zahl 2 (Anzahl in den jeweiligen Lagern) ein." << endl;
    cout << endl;
    cout << " Usereingabe: ";
          cin >> eingabe;
    cout << endl;

    if (eingabe=="1"){
        berechnen_anzahl();
    }
    else if (eingabe=="2"){
        berechnen_lager();
    }
    else {

        cout << " Geben Sie die Zahl 1 oder 2 ein. Bitte versuchen Sie es erneut." << endl;
    }
}

void Cldtd::dtd_anzeigen(){
    ifstream eingabe_dtd;

    cout << " Im Folgenden wird die Struktur der DTD-Datei angezeigt."
         << endl << endl;

    eingabe_dtd.open("filminventur_struktur.dtd");
    for (zaehler_dtd=0,element_zaehler_dtd=1;;)
        {
        eingabe_dtd.get(zeichen_dtd);
        if (eingabe_dtd.eof()) break;
        switch(zeichen_dtd)
           {
        case '>':
            if(puffer_dtd[0]=='#'){
                zaehler_dtd=0;
            }
           else if (zaehler_dtd)
              {
              puffer_dtd[zaehler_dtd]='\0';
              cout << " " << puffer_dtd;
              zaehler_dtd=0;
              }
           break;
        case ' ':
           if (puffer_dtd[1]=='E')
              {
              puffer_dtd[zaehler_dtd]='\0';
              puffer_dtd[0]=' ';
              cout << puffer_dtd << " " << element_zaehler_dtd;
              zaehler_dtd=0;
              element_zaehler_dtd++;
           }
           else if(puffer_dtd[1]=='A'){
           puffer_dtd[zaehler_dtd]='\0';
           puffer_dtd[0]=' ';
           cout << " Das Element" << puffer_dtd << " mit dem Tag";
           zaehler_dtd=0;

           }
           else if (puffer_dtd[0]=='C'){
           zaehler_dtd=0;

           }
           else if (puffer_dtd[0]=='i'){
               puffer_dtd[zaehler_dtd]='\0';
               cout << puffer_dtd;
               zaehler_dtd=0;
           }
              else
              {
                  puffer_dtd[zaehler_dtd]='\0';
                  cout << " " << puffer_dtd << " " <<"enthaelt die Tags: ";
                  zaehler_dtd=0;
              }
           break;
        case '<':
            break;
        case '\n':
           cout << endl;
           break;
        default:
           puffer_dtd[zaehler_dtd]=zeichen_dtd;
           zaehler_dtd++;
           break;
           }
        }
    eingabe_dtd.close();


    cout << endl;
    cout << " Die XML-Datei der filminventur entspricht der Struktur der DTD-Datei." << endl << endl;

}


void Clhilfe::hilfeanzeigen(){

    cout << " HILFE" << endl << endl;
    cout << " In diesem kleinen CLI geht es erstmals um die Filminventur, welche in der Videothek stattgefunden hat." << endl
         << " Die Dateien 'filminventur.xml','filminventur_struktur.dtd' und 'lager.txt' sind dabei entstanden und sind" << endl
         << " in dem CLI bereits enthalten." << endl
         <<  " Sie haben nun die Moeglichkeit zwischen drei Optionen zu entscheiden: Berechnen, Konvertieren und" << endl
         << " das Anzeigen der DTD-Datei. Geben Sie dafuer den Buchstaben 'k','b' oder 'a' ein." << endl << endl
         << " Konvertieren:" << endl << endl
         << " Wenn Sie diese Option auswaehlen, werden die Dateien 'filminventur.xml' und 'lager.txt' zusammengefuehrt " << endl
         << " und in einer gemeinsamen XML-Instanz gespeichert. Das Programm fragt sie dabei erstmals nach einem Dateinamen, " << endl
         << " eine Dateiendung ist nicht notwendig. Nachdem Sie einen Namen eingegeben haben, finden Sie die gespeicherte Datei"<< endl
         << " im Debugger Ordner. Am Anfang der neuen XML-Instanz finden Sie den Inhalt der Textdatei und danach den Inhalt" << endl
         << " der XML-Datei. Die Listung der Textdatei entspricht dabei derselben Reihenfolge wie der XML-Datei sodass" << endl
         << " die Listung anhand der ID der Filme gut betrachtet werden kann und nachvollziehbar ist." << endl << endl
         << " Berechnen:" << endl << endl
         << " Wenn Sie berechnen auswaehlen, haben Sie erstmals die Moeglichkeit auszuwaehlen, welche Berechnung durchgefuehrt" << endl
         << " werden soll. Die Optionen sind das Berechnen der Gesamtanzahl der Filme und der Anzahl der Filme, welche in den Lagern" << endl
         << " zu finden sind. Geben Sie dafuer in die Usereingabe die Zahl 1 fuer die erste Berechnung oder die Zahl 2 fuer die" << endl
         << " zweite Berechnung ein. Haben Sie Zahl 1 eingegeben, wird Ihnen erstmals gezeigt, welche Anzahl an einzelnen Filmen" << endl
         << " vorhanden ist. Weiter unten finden Sie die Gesamtanzahl der Filme. Zudem will das Programm danach einen Export des" << endl
         << " Wertes in eine Textdatei ausfuehren. Auch hier geben Sie in die Usereingabe nur einen Dateinamen ein, keine" << endl
         << " Dateiendung. Es wird automatisch eine Textdatei erstellt, welche im Debugger Ordner danach zu finden ist. " << endl
         << " Haben Sie Zahl 2 eingegeben, wird Ihnen erstmals gezeigt, wie viele Filme in den Lagern A1,A2,B1,B2,C1,C2,D1,D2,D3" << endl
         << " gelagert sind. Auch danach will das Programm einen Export der Werte durchfuehren. Geben Sie auch hier einen Dateinamen"<< endl
         << " ein und es wird automatisch eine Textdatei erstellt, welche im Debugger Ordner zu finden ist." << endl << endl
         << " Anzeigen der DTD-Datei:" << endl << endl
         << " Beim Waehlen dieser Option wird Ihnen die DTD-Datei, welche die vorgegebene Struktur fuer die " << endl
         << " Datei 'filminventur.xml' darstellt, angezeigt und vereinfacht dargestellt. An der Darstellung koennen" << endl
         << " Sie ablesen, welche Elemente welche Tags besitzen. Weiter unten finden Sie die Anzeige, dass die Struktur der" << endl
         << " XML-Datei der DTD-Datei entspricht." << endl << endl
         << " **********ACHTUNG**********" << endl << endl
         << " Das Programm wird 8 Mal durchgefuehrt. Das heisst, dass 8 Mal die Option Konvertieren, Berechnen," << endl
         << " Anzeigen der DTD Datei und Hilfe ausgewaehlt werden kann, sobald Sie das Programm zum ersten Mal starten." << endl
         << " Danach wird das Programm beendet und Sie muessten es neu starten, falls Sie es weiter benutzen moechten. " << endl << endl;

}
