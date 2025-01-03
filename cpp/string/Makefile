all: calcolo-output find

find: bin-folder
	g++ find.cpp -o bin/find

calcolo-output: es1 es2 es3 es4 es5
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

bin-folder:
	mkdir -p bin

