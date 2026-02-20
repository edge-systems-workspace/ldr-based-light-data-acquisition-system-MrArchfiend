#include <Arduino.h>

// TODO 1: Define LDR analog pin (Use A0)
const int LDR_PIN = A0;

// TODO 2: Create variable to store sensor reading
int ldrReading = 0;

// Define brightness threshold (adjust based on calibration)
const int LIGHT_THRESHOLD = 500;

void setup() {

    // TODO 3: Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4: Print system initialization message
    Serial.println("======================================");
    Serial.println(" Embedded Light Intensity Monitor ");
    Serial.println("======================================");
    Serial.println("Monitoring LDR sensor on A0...");
}

void loop() {

    // TODO 5: Read analog value from LDR
    ldrReading = analogRead(LDR_PIN);

    // TODO 6: Print raw ADC value
    Serial.print("Raw ADC Value: ");
    Serial.println(ldrReading);

    // TODO 7: Apply threshold logic (Bright / Dark detection)
    if (ldrReading > LIGHT_THRESHOLD) {

        // TODO 8: Print brightness status
        Serial.println("Environment Status: Bright");
    } 
    else {
        Serial.println("Environment Status: Dark");
    }

    Serial.println("------------------------------");

    // TODO 9: Add delay (1 second)
    delay(1000);
}
