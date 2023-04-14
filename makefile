CC = g++
CFLAGS = -Wall -Wextra

.DEFAULT_GOAL := main


all : clean main


main : main.o Figure.o Polygone.o Rectangle.o Carre.o TriangleEquilateral.o Cercle.o
	$(CC) $(CFLAGS) -o main main.o Figure.o Polygone.o Rectangle.o Carre.o TriangleEquilateral.o Cercle.o

main.o: main.cpp Figure.h Polygone.h Rectangle.h Carre.h TriangleEquilateral.h Cercle.h
	$(CC) $(CFLAGS) -c main.cpp

# Figure.o : Figure.h 

# Polygone.o : Polygone.h

# Rectangle.o : Rectangle.h

# Carre.o : Carre.h

# Cercle.o : Cercle.h

# TriangleEquilateral.o : TriangleEquilateral.h

# Define a pattern rule that compiles every .c file into a .o file
%.o : %.cpp
		$(CC) -c $(CFLAGS) $< -o $@

clean: 
	$(RM) main *.o