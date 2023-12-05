testFirst: firstLib
	gcc test_first.c -L./libs -lfirstLib -o test_first
	export LD_LIBRARY_PATH=/home/maks/Desktop/Library/libs && ./test_first

testSecond: secondLib
	gcc test_second.c -L./libs -lsecondLib -o test_second
	export LD_LIBRARY_PATH=/home/maks/Desktop/Library/libs && ./test_second

testThird: test_third.c secondLib firstLib
	gcc test_third.c -fPIC -ldl -o test_third
	export LD_LIBRARY_PATH=/home/maks/Desktop/Library/libs && ./test_third

firstLib:
	cd ./libs && gcc -o libfirstLib.so -shared -fPIC ../src/first_functions.c ../src/support_functions.c -lm

secondLib: 
	cd ./libs && gcc -o libsecondLib.so -shared -fPIC ../src/second_functions.c ../src/support_functions.c -lm 


	
