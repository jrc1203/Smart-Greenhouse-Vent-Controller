// Writing COMMENTS(LINES STARTING WITH //) is not mandatory
// For your understanding

#include <DHT.h>
#include <Servo.h>

#define DHTTYPE DHT11  // Type of DHT sensor

const int DHTPIN = 3;     
const int LDRPIN = 5;     
const int SERVOPIN = 9;    

DHT dht(DHTPIN, DHTTYPE);
Servo ventservo;

//Temperature limit set
int templimit = 30;  

void setup() {
  Serial.begin(9600);
  
  dht.begin();
  ventservo.attach(SERVOPIN);

  pinMode(LDRPIN, INPUT);

  //vent closed
  ventservo.write(0);
  
  Serial.println("Smart Greenhouse Vent Controller Started");
}

void loop() {
  // Reading the temperature and humidity
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  int lightstatus = digitalRead(LDRPIN);

// Sensor OUTPUT printing part
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print(" *C , Humidity: ");
  Serial.print(hum);
  Serial.print(" % , Light: ");
  if (lightstatus == 1) {
    Serial.println("Bright");
  } 
  else {
    Serial.println("Dim");
  }

// Decision making part
  if (temp > templimit && lightstatus == 1) {
    Serial.println("Too hot & bright! Opening vent...");
    ventservo.write(90);  // Opening vent
  }
  else {
    Serial.println("Conditions normal. Closing vent...");
    ventservo.write(0);   // Closing vent
  }

  delay(2000);
}
