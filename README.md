# a-ttiny-piano

`a-ttiny-piano` is a custom circuit plate can plays piano notes using an attiny85.

https://user-images.githubusercontent.com/80235345/222784531-9010c156-465d-4e6f-8f8a-89e5a80ac3d4.mp4

## You will need...

- Basic knowledges about electronic circuits, soldier circuits and [ironing method](https://youtu.be/xMz-ayK_slk).
- Attiny85.
- Arduino UNO.
- Piezoeectric (or buzzer).
- 12 resistors 220 Ohms.
- Socket for attiny85.
- SMD switch.
- CR225 Lithium Cell 3V.
- Some SMD pins.
- Jumpers/wires.
- Protoboard.

## How to build

To build this circuit you need to print the `pianoV2_etch_copper_bottom.svg` file inside `printables` folder on photo paper or propacolte paper for use the [ironing method](https://youtu.be/xMz-ayK_slk).

> If you don't want use this technique, you can create your PCB using a PCB online service like *PCBWay*, just download the `attiny-gerber.zip` file.

## Programming Attiny85

You can program the attiny using your Arduino UNO in [Arduino ISP mode](https://youtu.be/gXXdoeu7yWw).

Once you can send sketchs to your attiny, you need to send the `piano.ino` file.

## Schematic Circuit

![pianoV2_schem](https://user-images.githubusercontent.com/80235345/222785410-8b09fd43-f917-49c6-8c0d-10c873c4f564.jpg)

## PCB

![pianoV2_pcb](https://user-images.githubusercontent.com/80235345/222785458-f9b7613d-3895-4fd2-b97b-6f4fc813cd16.jpg)
