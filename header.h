class Clausgabe{
private:
    int zaehler_stock;
    int laenge;
    char puffer[20];
    char zeichen;
    int zaehler;
public:
    void laden();

};

class Clausgabe2{
private:
public:
    char zeichen_xml;
    char puffer_xml[50];
    int zaehler_xml;

};

class Clberechnen{
private:
    char puffer_berechnung[50];
    char zeichen_berechnung;
    int zaehler_berechnung;
    char puffer[50];
    char zeichen;
    int zaehler;
    int zaehlera1=0,zaehlera2=0,zaehlerb1=0,zaehlerb2=0,zaehlerc1=0,zaehlerc2=0,zaehlerd1=0,zaehlerd2=0,zaehlerd3=0;
    int anzahl=249;
    int filmanzahl=1;
    int laenge_txt;
    int laenge_txt2;
public:
    void berechnen();
    void berechnen_anzahl();
    void berechnen_lager();
};

class Cldtd{
private:
    char zeichen_dtd;
    char puffer_dtd[100];
    int zaehler_dtd;
    int element_zaehler_dtd;
public:
    void dtd_anzeigen();
};

class Clhilfe{
private:
public:
    void hilfeanzeigen();
};
