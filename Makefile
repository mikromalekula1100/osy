testFirst: firstLib
	gcc testFirst.c -L./libs -lfirstLib -o testFirst
	export LD_LIBRARY_PATH=/home/maks/Desktop/Library/libs && ./testFirst

testSecond: secondLib
	gcc testSecond.c -L./libs -lsecondLib -o testSecond
	export LD_LIBRARY_PATH=/home/maks/Desktop/Library/libs && ./testSecond

testThird: testThird.c
	gcc testThird.c -fPIC -ldl -o testThird
	export LD_LIBRARY_PATH=/home/maks/Desktop/Library/libs && ./testThird

firstLib:
	cd ./libs && gcc -o libfirstLib.so -shared -fPIC ../src/firstFunctions.c ../src/supportFunctions.c -lm

secondLib: 
	cd ./libs && gcc -o libsecondLib.so -shared -fPIC ../src/secondFunctions.c ../src/supportFunctions.c -lm 


	
