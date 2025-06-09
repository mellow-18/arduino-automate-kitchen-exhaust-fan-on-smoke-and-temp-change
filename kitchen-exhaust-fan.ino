#include "DHT.h"
#define RELAY_PIN 7
#define MQ2_PIN 8  
#define DHTPIN 2           // DHT sensor connected to digital pin 2
#define DHTTYPE DHT22     // or DHT22, depending on your sensor       // DO pin of MQ2 connected here
DHT dht(DHTPIN, DHTTYPE); 

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(MQ2_PIN, INPUT);
  Serial.begin(9600);
  dht.begin();    
}

void loop() {
  float temp = dht.readTemperature(); 
   float humidity = dht.readHumidity();
  int gasDetected = digitalRead(MQ2_PIN); // 0 = gas detected, 1 = clean air

  if (isnan(humidity)) {
    Serial.println("Failed to read humidity!");
    delay(2000);
    return;
  }

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" C | Gas: ");
  Serial.println(gasDetected == LOW ? "Detected" : "Clean");
  Serial.print("Humidity: ");
  Serial.print(humidity);

  if (temp > 30 || gasDetected == LOW || humidity >= 85) {
  digitalWrite(RELAY_PIN, HIGH); // relay ON (active-LOW)
  Serial.println("Fan ON (Temp/Gas)");
  } else {
    digitalWrite(RELAY_PIN, LOW);  // relay OFF
    Serial.println("Fan OFF");
  }

  delay(2000); // adjust as needed
}
