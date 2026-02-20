#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

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

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)

    // TODO 8:
    // Print brightness status

    // TODO 9:
    // Add delay (500ms or 1 second)
}
