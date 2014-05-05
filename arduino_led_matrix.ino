//Setup the pins connected to the rows
//and cols of the LED Matrix
int cols[] = {9, 10, 11, 12, 13};
int rows[] = {7, 6, 4, 3, 2, 1, 0};

int a[] = {0, 1, 1, 1, 0, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 1, 1, 1, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1};
           
int b[] = {1, 1, 1, 1, 0, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 1, 1, 1, 0,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1, 
           1, 1, 1, 1, 0};

int c[] = {0, 1, 1, 1, 1,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           0, 1, 1, 1, 1};
           
int d[] = {1, 1, 1, 1, 0, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1, 
           1, 1, 1, 1, 0};
           
int e[] = {1, 1, 1, 1, 1,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 1, 1, 0, 0,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 1, 1, 1, 1};
           
int f[] = {1, 1, 1, 1, 1,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 1, 1, 0, 0,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0};
           
int g[] = {1, 1, 1, 1, 1,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 0, 1, 1, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 1, 1, 1, 1};
           
int h[] = {1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 1, 1, 1, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1};
           
int i[] = {1, 1, 1, 1, 1, 
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0, 
           1, 1, 1, 1, 1};
           
int j[] = {1, 1, 1, 1, 1, 
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0,
           1, 0, 1, 0, 0, 
           1, 1, 1, 0, 0};
           
int k[] = {1, 0, 0, 0, 1, 
           1, 0, 0, 1, 0,
           1, 0, 1, 0, 0,
           1, 1, 0, 0, 0,
           1, 0, 1, 0, 0,
           1, 0, 0, 1, 0, 
           1, 0, 0, 0, 1};
           
int l[] = {1, 0, 0, 0, 0, 
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0, 
           1, 1, 1, 1, 0};
          
int m[] = {1, 0, 0, 0, 1, 
           1, 1, 0, 1, 1,
           1, 0, 1, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1};
           
int n[] = {1, 0, 0, 0, 1, 
           1, 1, 0, 0, 1,
           1, 0, 1, 0, 1,
           1, 0, 0, 1, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1};
           
int o[] = {1, 1, 1, 1, 1, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1, 
           1, 1, 1, 1, 1};
           
int p[] = {1, 1, 1, 1, 0, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 1, 1, 1, 0,
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0, 
           1, 0, 0, 0, 0};
           
int q[] = {1, 1, 1, 1, 1, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 1, 0, 1,
           1, 0, 0, 1, 1, 
           1, 1, 1, 1, 1};
           
int r[] = {1, 1, 1, 1, 0, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 1, 1, 1, 0,
           1, 0, 1, 0, 0,
           1, 0, 0, 1, 0, 
           1, 0, 0, 0, 1};
           
int s[] = {0, 1, 1, 1, 1, 
           1, 0, 0, 0, 0,
           1, 0, 0, 0, 0,
           0, 1, 1, 1, 0,
           0, 0, 0, 0, 1,
           0, 0, 0, 0, 1, 
           1, 1, 1, 1, 0};
           
int t[] = {1, 1, 1, 1, 1, 
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0, 
           0, 0, 1, 0, 0};
           
int u[] = {1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1, 
           1, 1, 1, 1, 1};
           
int v[] = {1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           0, 1, 0, 1, 0, 
           0, 0, 1, 0, 0};
           
int w[] = {1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 0, 0, 1,
           1, 0, 1, 0, 1,
           1, 1, 0, 1, 1, 
           1, 0, 0, 0, 1};
           
int x[] = {1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1,
           0, 1, 0, 1, 0,
           0, 0, 1, 0, 0,
           0, 1, 0, 1, 0,
           1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1};
           
int y[] = {1, 0, 0, 0, 1, 
           1, 0, 0, 0, 1,
           0, 1, 0, 1, 0,
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0,
           0, 0, 1, 0, 0, 
           0, 0, 1, 0, 0};
           
int z[] = {1, 1, 1, 1, 1, 
           0, 0, 0, 0, 1,
           0, 0, 0, 1, 0,
           0, 0, 1, 0, 0,
           0, 1, 0, 0, 0,
           1, 0, 0, 0, 0, 
           1, 1, 1, 1, 1};
           
int space[] = {0, 0, 0, 0, 0, 
               0, 0, 0, 0, 0,
               0, 0, 0, 0, 0,
               0, 0, 0, 0, 0,
               0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 
               0, 0, 0, 0, 0};

void setup() {
  pinMode(cols[0], OUTPUT);
  pinMode(cols[1], OUTPUT);
  pinMode(cols[2], OUTPUT);
  pinMode(cols[3], OUTPUT);
  pinMode(cols[4], OUTPUT);
  
  digitalWrite(cols[0], LOW);
  digitalWrite(cols[1], LOW);
  digitalWrite(cols[2], LOW);
  digitalWrite(cols[3], LOW);
  digitalWrite(cols[4], LOW);

  pinMode(rows[0], OUTPUT);
  pinMode(rows[1], OUTPUT);
  pinMode(rows[2], OUTPUT);
  pinMode(rows[3], OUTPUT);
  pinMode(rows[4], OUTPUT);
  pinMode(rows[5], OUTPUT);
  pinMode(rows[6], OUTPUT);
  
  digitalWrite(rows[0], HIGH);
  digitalWrite(rows[1], HIGH);
  digitalWrite(rows[2], HIGH);
  digitalWrite(rows[3], HIGH);
  digitalWrite(rows[4], HIGH);
  digitalWrite(rows[5], HIGH);
  digitalWrite(rows[6], HIGH);
}

void reset() {
  digitalWrite(cols[0], LOW);
  digitalWrite(cols[1], LOW);
  digitalWrite(cols[2], LOW);
  digitalWrite(cols[3], LOW);
  digitalWrite(cols[4], LOW);
  
  digitalWrite(rows[0], HIGH);
  digitalWrite(rows[1], HIGH);
  digitalWrite(rows[2], HIGH);
  digitalWrite(rows[3], HIGH);
  digitalWrite(rows[4], HIGH);
  digitalWrite(rows[5], HIGH);
  digitalWrite(rows[6], HIGH);  
}

void showLetter(int letter[]){
  int letter_i = 0;
  
  for(int row = 0; row < 7; row++)
  {
    digitalWrite(rows[row], LOW);
    
    for(int col = 0; col < 5; col++)
    {
      if(col == 0){
        if(letter[letter_i] == 0) {
          digitalWrite(cols[col], LOW);
        }
        else {
          digitalWrite(cols[col], HIGH); 
        }
      }
      else {
        if(letter[letter_i] == 0) {
          digitalWrite(cols[col-1], LOW);
          digitalWrite(cols[col], LOW);
        }
        else {
          digitalWrite(cols[col-1], LOW);
          digitalWrite(cols[col], HIGH); 
        }
      }
      letter_i++;
      delay(1);
    }
    reset();
  }
}

int *charToLetter(char ch) {
  switch(ch) {
   case 'a':
    return a;
   case 'b':
    return b;
   case 'c':
    return c;
   case 'd':
    return d;
   case 'e':
    return e;
   case 'f':
    return f;
   case 'g':
    return g;
   case 'h':
    return h;
   case 'i':
    return i;
   case 'j':
    return j;
   case 'k':
    return k;
   case 'l':
    return l;
   case 'm':
    return m;
   case 'n':
    return n;
   case 'o':
    return o;
   case 'p':
    return p;
   case 'q':
    return q;
   case 'r':
    return r;
   case 's':
    return s;
   case 't':
    return t;
   case 'u':
    return u;
   case 'v':
    return v;
   case 'w':
    return w;
   case 'x':
    return x;
   case 'y':
    return y;
   case 'z':
    return z;
   case ' ':
    return space;
   default:
    return space; 
  }
}

void loop() {
  char input[] = "abcdefghijklmnopqrstuvwxyz ";
  
  for(int z = 0; z < sizeof(input); z++) {
    long starttime = millis();

    while((millis() - starttime) <= 500) {
     showLetter(charToLetter(input[z]));
    }
  }
}
