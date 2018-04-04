# semesterarbeit_cplusplus

Einleitung:

Diese Semesterarbeit wurde für den Kurs "C++ - Programmieren 1" erstellt und beinhaltet hauptsächlich
das Parsing von Text - und XML-Dateien in eine neue Datei, das Berechnen von Werten und das Parsing in das Programm selbst.
In diesem README-File soll die Semesterarbeit dabei technisch näher erläutert und dokumentiert werden. 
Dazu sollen die Dateien dieser Semesterarbeit im Abschnitt 'Dateien' erklärt werden. 
Diese Datei lässt sich am besten auf GITHUB lesen. Dazu drückt man auf die README-Datei und klickt auf den RAW-Modus von GITHUB, 
um die Datei im Originalen zu lesen.
Für diese Semesterarbeit wurde Stufe I der Anforderung und Stufe IV erledigt.
Der Repository Name lautet 'semesterarbeit_cplusplus'.
Die Semesterarbeit wurde zudem mit dem Compiler MinGw 5.3.0 auf QT erstellt. Dazu sollte zusätzlich das Kommandozeilenargument 'install'
für make in das leere Zeilenfeld geschrieben werden, damit die Dateien geparst werden können.


Anwendungsfall:

In einer Videothek hat eine Inventur stattgefunden. In der XML-Instanz 'filminventur.xml'sind Filme hinterlegt.Die Txt-Datei 'lager.txt'
enthält die Kennung des Artikels, den Platz in der Schublade und die Anzahl der Filme. In einem kleinen CLI sollen nun diese Dateien 
zusammengeführt werden sowie andere Funktionen. Die Datei 'filminventur_struktur.dtd' stellt dabei die Struktur für die XML-Datei dar.

Dateien:

- main.cpp:

Die Main-Datei stellt die Hauptdatei dieses Projektes dar. Sie beinhaltet die Menüführung durch das CLI und die Usereingabe. Sobald
der User einen Buchstaben eingibt, soll die Funktion des Objektes, zu welchem es gehört, ausgeführt werden. So wurden anfangs erstmals 
Objekte der Klassen Clausgabe, Clberechnen, Cldtd und Clhilfe definiert. Deren Definition lässt sich in der Header-Datei finden. In 
einer For-Schleife ist die Usereingabe beinhaltet und der Integer i wurde definiert, sodass das Programm insgesamt 8 Mal ausgeführt 
werden kann, somit 8 Mal eine Usereingabe geschehen darf. Danach wird das Programm beendet. In einem if -else Case wird definiert,
dass wenn der User einen bestimmten Buchstaben eingibt, eine Funktion des Objektes ausgeführt werden soll. Falls die Buchstaben nicht
bekannt sind, gibt das Programm aus, dass ein neuer Buchstabe eingegeben werden soll. 

- header.h:

In der Header-Datei sind fünf Klassen definiert. Die Klassen Clausgabe, Clberechnen und Cldtd sind fast gleich aufgebaut und beinhalten 
unter public jeweils Methoden, welche in der Bibliothek der Semesterarbeit 'semesterarbeitlib.cpp' definiert wurden. Unter private
wurden Variablen wie der Puffer (für den Zeicheninhalt der Text- und XML-Dateien), Zähler und Zeichen definiert, vom Datentypen char 
oder int, wobei einige Werte von Variablen, vor allem für die Klasse Clberechnen, bereits vordefiniert wurden, wie die zaehlera1 bis 
zaehler d3 und schon 0 sind. Die Klasse Clausgabe2 lässt sich der XML-Datei 'filminventur.xml' zuordnen und beinhaltet auch hier als 
Ausnahme nur die Variablen zu Zeichen, Puffer und Zähler bereits unter public, da auf diese in der Bibliothek mit dem definierten Objekt
ausgabe_xml direkt zugegriffen wird. Die Klasse Clhilfe beinhaltet nur eine Methode undzwar hilfeanzeigen(). Das Objekt dieser Klasse 
mit dem Namen 'hilfe', welche in der main-Datei definiert wurde, kann also nur auf diese Funktion zurückgreifen. 

- semesterarbeitlib.cpp

In der Bibliothek sind alle wichtigen Funktionen des Projektes und der Klasse definiert. Nur diese sorgen dafür, dass in dem Projekt
überhaupt etwas passiert. Es gibt sechs Funktionen.
Die erste Funktion ist die Methode 'laden()' aus der Klasse Clausgabe, welche in der main-Datei durch das Objekt 'daten_laden' 
ausgeführt wird. Die Funktion sorgt dafür, dass die XML-Datei 'filminventur.xml' und die Textdatei 'lager.txt' in eine gemeinsame XML-
Instanz ausgelagert werden. Erstmals wurden die Objekte der Eingabeströme 'eingabe1' und 'eingabe2' definiert sowie ein Objekt des
Ausgabestromes namens 'file' und einen String namens 'dateiname'.  Das Programm bittet den User erstmals um einen Dateinamen, in denen 
die beiden Dateien zusammenkommen sollen. Dieser Name wird in dem String gespeichert und durch die Elementfunktionen 'length()' und 
'insert()' von String, wird der Zusatz '.xml' an die letzte Stelle der Zeichenkette von 'dateiname' gespeichert. Die Objekte der 
Eingabe- und Ausgabeströme werden geöffnet und durch eine for-Schleife und einem switch-case, bei dem die einzelnen Zeichen jeweils im 
Puffer gespeichert und durch die cases ausgegeben werden, sollen die Zeichen der jeweiligen Dateien in dem Objekt 'file' gespeichert 
werden. Das Parsing der Textdatei erfolgt zudem in dem switch-case von '>'. Auch dieses Parsing erfolgt durch eine for-Schleife und 
einem switch-case. Damit wird gesorgt, dass in der neu entstandenen XML-Instanz die Inhalte der Textdatei am Anfang zu finden sind und 
die Inhalte der XML-Datei erscheinen danach. Am Ende der Funktion wird der Nutzer darüber benachrichtigt, dass das Parsing erfolgreich 
war und die Datei erstellt wurde. Die Datei ist danach im Debugger-Ordner zu finden. Danach kann der Nutzer eine neue Funktion des CLI 
auswählen. 
Die zweite Funktion ist die Methode 'hilfeanzeigen()' aus der Klasse Clhilfe, welche in der main-Datei durch das Objekt 'hilfe' 
ausgeführt wird. Diese Funktion gibt nur Text an das Programm zurück, welche sich der User durchlesen kann, um das Programm und dessen
Funktionen besser zu verstehen.
Die dritte Funktion ist die Methode 'berechnen()' aus der Klasse Clberechnen, welche in der main-Datei durch das Objekt 'rechnung'
ausgeführt wird. Diese dient im Grunde genommen nur dazu, dass die richtige Methode für die weitere Berechnung ausgewählt wird. Es 
wurde nur ein String namens 'eingabe' deklariert. Das Programm fragt den User nach der Zahl 1 oder 2. Diese wird in dem String 
gespeichert und durch ein if-else case wird definiert, dass wenn die Zahl 1 eingegeben wurde, die Methode 'berechnen_anzahl()' 
ausgeführt werden soll und bei der Zahl 2 die Methode 'berechnen_lager()'. Falls die Usereingabe etwas anderes beinhaltet, wird der 
Nutzer dazu aufgefordert, es nochmal zu versuchen. 
Die Methode 'berechnen_anzahl()' der Klasse Clberechnen wird ausgeführt, sobald der User die Zahl 1 bei der Methode 'berechnen()' 
eingibt. Auch in diesem wurden erstmals Objekte der Eingabe - und Ausgabeströme definiert. Das Programm zeigt dem Nutzer durch ein 
anderes Parsing der Datei 'lager.txt' erstmals nur die Anzahl des jeweiligen Filmes an, welche verfügbar sind. Auch dies geschieht durch
eine for-Schleife und dem switch-case, welcher diesmal aber nur bei dem case '\n' etwas ausgeben soll. Nachdem dies passiert ist, gibt
das Programm die Nachricht aus, wieviele Filme das insgesamt macht. Die Anzahl dessen wurde im Vornherein in dem Integer 'anzahl' 
gespeichert, welche in der Header-Datei unter dem Punkt Clberechnen deklariert wurde. Daraufhin fragt das Programm wieder nach einem 
neuen Dateinamen, welcher bereits als 'dateiname1_txt' als String deklariert wurde. Wie bereits bei der Methode 'laden()' wird durch die
Zusatzfunktionen von String der Text'.txt' an die letzte Stelle der Zeichenkette gespeichert, damit eine Textdatei gespeichert wird. Die
Anzahl der Filme wird in dieser gespeichert und danach wird der Nutzer auch hier darüber benachrichtigt, dass die Datei erstellt wurde 
und sie im Debugger-Ordner zu finden ist.
Die Methode 'berechnen_lager' funktioniert nach dem selben Prinzip. Nachdem erstmals ein Objekt des Eingabe- und Ausgabestroms 
deklariert wurde, beginnt schon wieder ein Parsing der Datei 'lager.txt'. Diesmal sollen die im Header deklarierten Integer namens 
'zaehlera1' bis 'zaehlerd3' immer um eine Zahl angehoben werden, sobald der switch-case bei ' ' angelangt ist. Die gespeicherten
Zeichen sollen dabei im Puffer betrachtet werden und somit soll der richtige Zähler um die Zahl 1 angehoben werden. Danach gibt das 
Programm das Ergebnis des Parsings und somit die in den Integers gespeicherte Zahl aus. Nun wird wieder nach einem Dateinamen gefragt,
damit die Werte exportiert werden können. Auch dies funktioniert wieder durch die Zusatzfunktionen von String. Danach gibt das Programm 
erneut aus, dass die Datei erstellt wurde und im Debugger-Ordner zu finden ist. 
Die letzte Funktion des Programmes ist die Methode 'dtd_anzeigen()' aus der Klasse Cldtd, welche in der main-Datei durch das Objekt 
'dtdladen' aufgerufen wird. In diesem wurde erstmals nur ein Objekt des Eingabestromes definiert. Danach beginnt das Parsing der
Datei 'filminventur_struktur.dtd', welche auch hier durch eine for-Schleife und einem switch-case geschieht. Das Parsing wird in das
Hauptprogramm übertragen und der Nutzer kann sehen, welche Elemente der XML-Datei welchen Tag besitzt. Am Ende wird ausgegeben, dass die
XML-Datei der Filminventur der Struktur der DTD-Datei entspricht.
