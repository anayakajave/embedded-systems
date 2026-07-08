# PCB Design Theory

## What is a PCB?
A Printed Circuit Board permanently connects electronic 
components using copper traces etched onto a fiberglass 
(FR4) substrate. More reliable and compact than breadboards.

## PCB Structure
- Solder Mask (green coating)
- Copper Layer (actual connections)
- FR4 Substrate (fiberglass base)
- Copper Layer (bottom)
- Solder Mask (bottom)

## Key Terms
- Schematic: electrical connections diagram
- PCB Layout: physical placement of components
- Footprint: physical size/shape of component on board
- Symbol: schematic representation of component
- Trace: copper line connecting two points
- Via: hole connecting traces between layers
- Pad: metal area where component is soldered
- Gerber: manufacturing files sent to factory
- BOM: Bill of Materials (component list)
- ERC: Electrical Rules Check (schematic errors)
- DRC: Design Rules Check (manufacturing errors)

## PCB Design Workflow
1. Draw schematic
2. Run ERC
3. Assign footprints
4. PCB layout
5. Route traces
6. Run DRC
7. Generate Gerber files
8. Send to manufacturer

## Manufacturing
- JLCPCB: 5 PCBs for ~₹600 including shipping
- Minimum trace width: 0.1mm
- Delivery to India: 7-15 days

## Why Copper?
- Excellent electrical conductor
- Doesn't corrode easily
- Same material used in VLSI chip interconnects