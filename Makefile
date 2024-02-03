The program should be compile as

$ gcc `pkg-config --cflags gtk+-3.0` -Wall -o ex calci.c `pkg-config --libs gtk+-3.0` -lm

and run as

./ex
