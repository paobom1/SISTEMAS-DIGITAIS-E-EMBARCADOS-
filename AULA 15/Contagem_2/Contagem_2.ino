#define botaoA 3
#define botaoB 2

int conta = 0;
int tic1 = 0;
int tic2 = 0;

void setup() {
pinMode(botaoA, INPUT);
pinMode(botaoB, INPUT);
pinMosw(led1, OUTPUT)
Serial.begin(9600);
}

void loop() {

bool estado1 = digitalRead(botaoA);
bool estado2 = digitalRead(botaoB);
Serial.println(conta);

if (estado1 == 1 && tic1 == 0) {
conta += 1;
tic1 += 1;
}
if (estado1 == 0) {
  tic1 = 0;
  }
if (estado2 == 1 && tic2 == 0) {

  conta -=1 ;
  tic2 += 1;
}
if (estado2 == 0) {
  tic2 = 0;
}
if 
}