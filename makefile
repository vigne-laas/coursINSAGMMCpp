CC = g++
CFLAGS = -Wall -Wextra
EXEC_NAME = main
OBJ_FILES = Figure.o Polygone.o Rectangle.o Carre.o TriangleEquilateral.o Cercle.o main.o

all : $(EXEC_NAME)

$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) -o $(EXEC_NAME) $(OBJ_FILES)

# Define a pattern rule that compiles every .c file into a .o file
%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	rm -f *.o $(EXEC_NAME)