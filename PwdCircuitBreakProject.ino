#include <Wire.h>
#include <LiquidCrystal_I2C.h> #include <Keypad.h>
const byte ROWS = 4; const byte COLS = 3;
char keys[ROWS][COLS] = { {'1', '2', '3'},
{'4', '5', '6'},
{'7', '8', '9'},
{'*', '0', '#'} };
byte rowPins[ROWS] = {2, 3, 4, 5}; byte colPins[COLS] = {6, 7, 8};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS); LiquidCrystal_I2C lcd(0x27, 16, 2);
String enteredPassword = "";
const String relay1Password = "1111"; // Password for relay 1
const String relay2Password = "2222"; // Password for relay 2
const String bothRelaysPassword = "1234"; // Password for both relays int passwordIndex = 0;
const int relay1Pin = 9; // Relay 1 pin
const int relay2Pin = 10; // Relay 2 pin
void setup() { Serial.begin(9600); lcd.begin(16, 2); pinMode(relay1Pin, OUTPUT); pinMode(relay2Pin, OUTPUT);
 lcd.clear();
lcd.print("Enter Password:"); }
void loop() {
char key = keypad.getKey(); if (key != NO_KEY) {
if (key == '*') {
// Clear entered password enteredPassword = ""; passwordIndex = 0; lcd.clear();
lcd.print("Enter Password:");
}elseif(key=='#'){
// Check passwords
if (enteredPassword == relay1Password) {
openRelay(relay1Pin);
} else if (enteredPassword == relay2Password) {
openRelay(relay2Pin);
} else if (enteredPassword == bothRelaysPassword) {
openRelay(relay1Pin);
openRelay(relay2Pin); }else{
lcd.clear();
lcd.print("Wrong Password!"); delay(2000);
}
lcd.clear();
lcd.print("Enter Password:"); enteredPassword = ""; passwordIndex = 0;
}else{
// Append key to entered password and print it on LCD enteredPassword += key; lcd.setCursor(passwordIndex, 1);
lcd.print(key);

passwordIndex++; }
} }
void openRelay(int pin) {
lcd.clear();
lcd.print("Password OK");
digitalWrite(pin, LOW); // Open relay circuit delay(2000); // Wait for 2 seconds digitalWrite(pin, HIGH); // Close relay circuit lcd.clear();
lcd.print("Circuit Closed");
delay(2000); }