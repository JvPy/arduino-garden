//Global variables

void setup(){
    Serial.begin(9600);
}

void loop(){
    int humidityValue = 0;
    for (int i = 0; i < 3; i++) {
        humidityValue = analogRead(i);
        Serial.print(humidityValue);
    }
    delay(2000);
}
