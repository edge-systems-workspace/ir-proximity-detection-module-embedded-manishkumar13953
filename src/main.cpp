#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author manish_kumar
 * @date 2026-02-09
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

int irPin = 2;
 // Define IR sensor digital pin (Use pin 2)

bool obstacleDetected = false;
 // Create variable to store sensor state

void setup() {

 pinMode(irPin, INPUT);

 Serial.begin(9600);
 // Initialize serial communication
}

void loop() {

    // TODO 6:
    // Read digital value from IR sensor

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"

    // TODO 8:
    // Add small delay (200–500ms)
}
