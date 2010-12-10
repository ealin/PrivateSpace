
AP.exe: AP.c stack.o
	gcc -o AP -g stack.o AP.c

#target:	dependence
#	action
#	action

stack.o:	stack.c stack.h
	gcc -c -g stack.c
	
clean:
	rm AP.exe
	rm *.o	
