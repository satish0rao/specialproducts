
specialproducts: specialproducts.h specialproducts.o driver.o utils.o
	gcc driver.o specialproducts.o utils.o -o specialproducts

specialproducts.o: specialproducts.c utils.h
	gcc -c specialproducts.c 

driver.o: driver.c specialproducts.h
	gcc -c driver.c

utlis.o: utils.o utils.h
	gcc -c utils.c



