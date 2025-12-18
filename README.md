# ChessGame
A chess game made from C language, playable through the terminal 

## Create your library:

##### Create the header of your library, it must contains the line where there are what the function returns, the name of the function and the arguments of the funtion of every functions that your library contains. To see an example, check the myLib.h file. Finally, your main file must include the header's file.

##### Create the objects:
```zsh
gcc -c check.c -o check.o 
gcc -c get.c -o get.o 
gcc -c printBoard.c -o printBoard.o 
gcc -c split.c -o split.o 
gcc -c upperCase.c -o upperCase.o 
```

##### Create a library from your objects and name it lib.a:
```zsh
ar rcs lib.a check.o get.o printBoard.o split.o upperCase.o 
```

##### Create an object from your main code:
```zsh
gcc -c main.c -o main.o
```

##### Link that object with your library:
```zsh
gcc -o main main.o -L. lib.a
```

## Launch your code:
```zsh
./main
```