// Define LM35 sensor pin
#define LM35 A0

// Macro for delaying execution in milliseconds
#define DELAY_MS(ms) do { unsigned long _start = millis(); \
                          while(millis() - _start < (ms)) { } \
                       } while(0)

// Global variables
int sensorData;
float voltageIn,temperature;

void setup()
{
  // Initialize serial communication
  Serial.begin(9600);
  
  // Set internal reference voltage for analog input
  analogReference(INTERNAL);   
}

void loop()
{
  // Read sensor data
  sensorData = analogRead(LM35);

  // Convert sensor data to voltage
  voltageIn = (sensorData / 1023.0) * 1.1;
  
  // Convert voltage to temperature (in Celsius)
  temperature = sensorData / 9.3 - 50;
  
  // Print temperature data
  if(temperature <= 30)
  {
    // Print temperature data
    digitalWrite(8, LOW);
    DELAY_MS(250);
    digitalWrite(8, HIGH); // Turn LED on
  }
  else
  {
    // LED off for 500 milliseconds
    digitalWrite(8, LOW);
    DELAY_MS(500);
    digitalWrite(8, HIGH); // Turn LED on
  }
}
