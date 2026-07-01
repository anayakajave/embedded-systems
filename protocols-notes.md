# Communication Protocols

## UART
- 2 wires: TX, RX
- One to one only
- Asynchronous (no clock)
- Baud rate must match on both sides
- Used for: GPS, Serial Monitor

## SPI
- 4 wires: MOSI, MISO, SCLK, CS
- One master, multiple slaves
- Synchronous (has clock)
- Fast speed
- Used for: SD cards, displays

## I2C
- 2 wires: SDA, SCL
- Up to 127 devices
- Each device has unique address
- Synchronous
- Used for: sensors, OLED

## Protocol Selection Guide
- Continuous streaming → UART
- High speed data → SPI
- Many slow sensors → I2C