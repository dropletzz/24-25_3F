all: esempi esercizi

esempi: hello-world hello-name tipi-semplici operazioni-matematiche array stringhe
hello-world: bin-folder
	g++ 01_hello-world.cpp -o bin/hello-world
hello-name: bin-folder
	g++ 02_hello-name.cpp -o bin/hello-name
tipi-semplici: bin-folder
	g++ 03_tipi-semplici.cpp -o bin/tipi-semplici
operazioni-matematiche: bin-folder
	g++ 04_operazioni-matematiche.cpp -o bin/operazioni-matematiche
array: bin-folder
	g++ 05_array.cpp -o bin/array
stringhe: bin-folder
	g++ 06_stringhe.cpp -o bin/stringhe
stringhe: bin-folder
	g++ 07_numeri-casuali.cpp -o bin/numeri-casuali

esercizi: segnapunti morra-cinese morra-cinese-a-punti
segnapunti: bin-folder
	g++ esercizi/segnapunti.cpp -o bin/segnapunti
morra-cinese: bin-folder
	g++ esercizi/morra-cinese.cpp -o bin/morra-cinese
morra-cinese-a-punti: bin-folder
	g++ esercizi/morra-cinese-a-punti.cpp -o bin/morra-cinese-a-punti

bin-folder:
	mkdir -p bin

