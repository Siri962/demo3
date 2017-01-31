all:siri
siri : main.o sort.o
     gcc main.o sort.o -o siri.o

main.o : main.c
         gcc -c main.c       

sort.o : sort.c
         gcc -c sort.c     

