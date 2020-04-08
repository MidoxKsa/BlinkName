// Blink your First name (Mido)

// assign D7 to be led we'll use
int led = D7;

void setup() {
// assign the D7 as an output
  pinMode(led, OUTPUT);

}

void loop() {
// this is for letter M which is ( - - )
// this is for -
  digitalWrite(led, HIGH); // light the LED
  delay(1000);
  digitalWrite(led, LOW); // turn off the LED
// delay between the blinks
  delay(500);
// this is for -
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  
// delay between the letter 1.5 sec /////////////////////
  delay (1500);
/////////////////////////////////////////////////////////
// this is for letter I which is ( . . )
// this is for .
  digitalWrite(led, HIGH);
  delay(300);
  digitalWrite(led, LOW);
// delay between the blinks
  delay(500);
// this is for .
  digitalWrite(led, HIGH);
  delay(300);
  digitalWrite(led, LOW);
  
// delay between the letter 1.5 sec /////////////////////
  delay (1500);
/////////////////////////////////////////////////////////
// this is for letter D which is ( - . . )
// this is for -
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
// delay between the blinks
  delay(500);
// this is for -
  digitalWrite(led, HIGH);
  delay(300);
  digitalWrite(led, LOW);
// delay between the blinks
  delay(500);
// this is for -
  digitalWrite(led, HIGH);
  delay(300);
  digitalWrite(led, LOW);
  
// delay between the letter 1.5 sec /////////////////////
  delay (1500);
/////////////////////////////////////////////////////////
// this is for letter O which is ( - - - )
// this is for -
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
// delay between the blinks
  delay(500);
// this is for -
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
// delay between the blinks
  delay(500);
// this is for -  
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  
// delay 3 sec before the loop restart  /////////////////////
  delay (3000);
}
