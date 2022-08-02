#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>
#include "HX711.h"

#define S0 6 //PIN Sensor TCS3200
#define S1 5
#define S2 8
#define S3 9
#define sensorOut 7

int redFrequency = 0; // Interger frekuensi sensor warna merah
int greenFrequency = 0; // Interger frekuensi sensor warna hijau
int blueFrequency = 0; // Interger frekuensi sensor warna biru
int redValue = 0; //Interger nilai warna merah
int greenValue = 0;//Interger nilai warna hijau
int blueValue = 0;//Interger nilai warna biru
int jumlah = 0; //Interger jumlah
int count = 0;

uint8_t dataPin = 3; //PIN Data DfPlayerMini
uint8_t clockPin = 2; //PIN clk DfPlayerMini

float w1, w2, previous = 0;

HX711 scale; // Modul Penguat
SoftwareSerial mySerial(0,1);

void setup() {

  mySerial.begin(9600); // Setup dfplayermini
  mp3_set_serial (mySerial);
  delay(5); 
  mp3_set_volume (30);
  mp3_set_EQ (3);
  delay(100);
  
  scale.begin(dataPin, clockPin);  // Setup modul penguat 
  scale.set_scale(-16560.00);      
  scale.tare();
  
  pinMode(S0, OUTPUT); // Setup pin Sensor warna sebagai output
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  
  pinMode(sensorOut, INPUT); //Setup pin sensor warna sebagai input
  digitalWrite (S0,HIGH); //Scaling frekuensi 20% sensor warna
  digitalWrite (S1,LOW);

  Serial.begin(9600);   //Komunikasi serial di baudrate 9600
}

void loop() {
  koin();
  kertas();
}
