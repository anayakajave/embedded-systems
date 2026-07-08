

## Analog vs Digital Sensors

### Analog Sensor
- Outputs continuous voltage (0V to 3.3V)
- ESP32 reads using ADC (12-bit = 4096 levels)
- Example: MQ-135 air quality sensor

### Digital Sensor
- Outputs binary data (1s and 0s)
- ESP32 reads via GPIO
- Example: DHT22 temperature + humidity

## Data Types in C++
- int   → whole numbers (pin numbers, counters)
- float → decimal numbers (temperature, humidity)

## DHT22
- Single wire protocol
- Reads temperature and humidity
- Powered at 3.3V on ESP32
- Library: Adafruit DHT sensor library