// This message is obfuscated, you'll have to compile the file to see it!

#define X1 o
#define X6 y
#define X9 a
#define X3 -
#define X2 f
#define X7 w
#define X4 t
#define X5 r
#define X8 !

#define Y4 X3
#define Y7 X8
#define Y5 X9
#define Y1 X7
#define Y9 X1
#define Y6 X5
#define Y2 X4
#define Y3 X2
#define Y8 X6

#define STR_(x) #x
#define STR(x) STR_(x)
#pragma message "The flag is: " STR(Y3) STR(Y9) STR(Y6) STR(Y2) STR(Y8) STR(Y4) STR(Y2) STR(Y1) STR(Y9)

int main() {
  return 0;
}
