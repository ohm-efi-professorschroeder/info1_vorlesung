CC = gcc
BUILD_DIR = build
CFLAGS = -Wall -g -O0

00_00-hello: termin_00/hello.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

01_01-intro: termin_01/01_intro.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
01_02-division: termin_01/02_division.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
01_03-binearUmrechnung: termin_01/03_binaerUmrechnung.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
01_04-binaerZahl: termin_01/04_binaerZahl.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
01_05-bmi: termin_01/05_bmi.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
01_06-bit_shift_operatoren: termin_01/06_bit_shift_operatoren.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
01_07-ledAnsteuern: termin_01/07_ledAnsteuern.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

02_01-intro: termin_02/01_intro.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
02_02-winkel: termin_02/02_winkel.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
02_03-mwst: termin_02/03_mwst.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
02_04-anteile: termin_02/04_anteile.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
02_05-alphabet: termin_02/05_alphabet.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
02_06-rechner: termin_02/06_rechner.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
02_07-zahlenVergleich: termin_02/07_zahlenVergleich.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

03_01-castingLesen: termin_03/01_castingLesen.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
03_02-explizitesCasting: termin_03/02_explizitesCasting.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
03_03-verkehrsteilnehmer: termin_03/03_verkehrsteilnehmer.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
03_04-taschenrechner: termin_03/04_taschenrechner.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
03_05-bedingteBewertung: termin_03/05_bedingteBewertung.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
03_06-ifElseGrab: termin_03/06_ifElseGrab.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

04_01-eingabePruefung: termin_04/01_eingabePruefung.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
04_02-binaerUmrechnungSchleife: termin_04/02_binaerUmrechnungSchleife.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
04_03-asciiTabelle: termin_04/03_asciiTabelle.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
04_04-heron: termin_04/04_heron.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

05_01-maexchen: termin_05/01_maexchen.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
05_02-wuerfeln: termin_05/02_wuerfelspielMain.c termin_05/02_wuerfelspiel.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
05_03-quadPlatten: termin_05/03_quadPlatten.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

06_01-zeigerLesen: termin_06/01_zeigerLesen.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
06_02-reverseEngineering: termin_06/02_reverseEngineering.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
06_03-rotiere: termin_06/03_rotiere.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
06_04-wechselgeld: termin_06/04_wechselgeld.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
06_05_divisionMitRest: termin_06/05_divisionMitRest.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

07_01-roteriereArray: termin_07/01_rotiereArray.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
07_02-selectionSort: termin_07/02_selectionsort.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
07_03-mastermind: termin_07/03_mastermind.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

08_01-noten: termin_08/01_noten.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
08_02-codeNachricht: termin_08/02_codeNachricht.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
08_03-sortiereMatrix: termin_08/03_sortiereMatrix.c
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@


UTILS_SRC = termin_09/utils/stoppuhr.c termin_09/utils/zahlenEingabe.c termin_09/utils/zufallsarray.c
09_01-sortierungTest: termin_09/sortierung/sortierung.c termin_09/sortierung/sortierungTest.c $(UTILS_SRC)
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
09_01-sortierungVergleich: termin_09/sortierung/sortierung.c termin_09/sortierung/sortierungVergleich.c $(UTILS_SRC)
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@
09_01-suche: termin_09/sortierung/suche.c termin_09/sortierung/sucheTest.c $(UTILS_SRC)
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

clean:
	rm -rf $(BUILD_DIR)/*.out