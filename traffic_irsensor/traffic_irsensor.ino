const int GREEN1 = 3;    // First green LED
const int GREEN2 = 5;    // Second green LED
const int RED1 = 2;      // First red LED
const int RED2 = 4;      // Second red LED

const int IR1 = 6;       // IR sensor 1
const int IR2 = 7;       // IR sensor 2

void setup() {
  pinMode(GREEN1, OUTPUT);
  pinMode(GREEN2, OUTPUT);
  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);

  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);

  defaultState();
}

void loop() {
  bool detect1 = digitalRead(IR1) == HIGH; 
  bool detect2 = digitalRead(IR2) == HIGH;

  if (detect1 || detect2) {
    digitalWrite(GREEN1, HIGH);
    digitalWrite(GREEN2, HIGH);
    digitalWrite(RED1, LOW);
    digitalWrite(RED2, LOW);
  } else {
    defaultState();
  }
}

void defaultState() {
  digitalWrite(GREEN1, LOW);
  digitalWrite(GREEN2, LOW);
  digitalWrite(RED1, HIGH);
  digitalWrite(RED2, HIGH);
}