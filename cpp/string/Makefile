all: calcolo-output intro

intro: bin-folder
	g++ intro.cpp -o bin/intro

calcolo-output: es1 es2 es3 es4 es5 es6 es7 es8
es1: bin-folder
	g++ calcolo_output/es1.cpp -o bin/es1
es2: bin-folder
	g++ calcolo_output/es2.cpp -o bin/es2
es3: bin-folder
	g++ calcolo_output/es3.cpp -o bin/es3
es4: bin-folder
	g++ calcolo_output/es4.cpp -o bin/es4
es5: bin-folder
	g++ calcolo_output/es5.cpp -o bin/es5
es6: bin-folder
	g++ calcolo_output/es6.cpp -o bin/es6
es7: bin-folder
	g++ calcolo_output/es7.cpp -o bin/es7
es8: bin-folder
	g++ calcolo_output/es8.cpp -o bin/es8

bin-folder:
	mkdir -p bin

