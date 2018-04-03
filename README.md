# semesterarbeit_cplusplus

Einleitung:

Diese Semesterarbeit wurde für den Kurs "C++ - Programmieren 1" erstellt und beinhaltet hauptsächlich
das Parsing von Text - und XML-Dateien in eine neue Datei, das Berechnen von Werten und das Parsing in das Programm selbst.
In diesem README-File soll die Semesterarbeit dabei technisch näher erläutert und dokumentiert werden. 
Dazu sollen die Dateien dieser Semesterarbeit im Abschnitt 'Dateien' erklärt werden. 
Diese Datei lässt sich am besten auf GITHUB lesen. Dazu drückt man auf die README-Datei und klickt auf den RAW-Modus von GITHUB, 
um die Datei im Originalen zu lesen.

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
überhaupt etwas passiert. Es gibt fünf Funktionen.
Die erste Funktion ist die Methode 'laden()' aus der Klasse Clausgabe, welche in der main-Datei durch das Objekt 'daten_laden' 
ausgeführt wird. Die Funktion sorgt dafür, dass die XML-Datei 'filminventur.xml' und die Textdatei 'lager.txt' in eine gemeinsame XML-
Instanz ausgelagert werden. Erstmals wurden die Objekte der Eingabeströme 'eingabe1' und 'eingabe2' definiert sowie ein Objekt des
Ausgabestromes namens 'file' und einen String namens 'dateiname'.  Das Programm bittet den User erstmals um einen Dateinamen, in denen 
die beiden Dateien zusammenkommen sollen. Dieser Name wird in den String gespeichert und durch die Elementfunktionen 'length()' und 
'insert()' von String, wird der Zusatz '.xml' an die letzte Stelle der Zeichenkette von 'dateiname' gespeichert. Die Objekte der 
Eingabe- und Ausgabeströme werden geöffnet und durch eine for-Schleife und einem switch-case sollen die Zeichen der jeweiligen Dateien
in dem Objekt 'file' gespeichert werden. Das Parsing der Textdatei erfolgt zudem in dem switch-case von '>'. Auch dieses Parsing erfolgt
durch eine for-Schleife und einem switch-case. Damit wird gesorgt, dass in der neu entstandenen XML-Instanz die Inhalte der Textdatei am
Anfang zu finden sind und die Inhalte der XML-Datei erscheinen danach. Am Ende der Funktion wird der Nutzer darüber benachrichtigt, dass
das Parsing erfolgreich war und die Datei erstellt wurde. Die Datei ist danach im Debugger-Ordner zu finden. Danach kann der Nutzer eine
neue Funktion des CLI auswählen.
Die zweite Funktion ist die Methode 'hilfeanzeigen()' aus der Klasse Clhilfe, welche in der main-Datei durch das Objekt 'hilfe' ausgeführt wird. Diese Funktion gibt nur Text an das Programm zurück, welche sich der User durchlesen kann, um das Programm und dessen 
Funktionen besser zu verstehen. 
