# HenryWau's BludPad

![HenryWauPad](<assets/alltogether.png>)

* Keyboard Maintainer: [Henry Wauzivuff](https://github.com/heofottoman)

This is my very first macropad (and hardware project!) made for Hackpad. I designed it to be optimised for my little desk, being long and narrow, and also having a pretty cool pcb :>

Currently, the firmware binds the keys to Ctrl Z, numpad 1,3,7 & mswhl up/down, designed to help me with creative software, Blender specifically.


## Specifications
### BOM
- 1x Seeed Xiao RP4020
- 1x EC11 Rotary Encoder
- 4x Cherry MX switches
- 4x Blank Keycaps
- 4x SK6812 MINI-E LEDs
- 4x Screws

### Others
- Custom PCB
- QMK Firmware
- Case.STL

### Schematic
![imgSchematic](assets/imgschematic.png) 
https://cdn.hackclub.com/019d466b-ad1f-7994-9d12-ee104b858810/image.png

### PCB
![imgPcb](assets/imgpcb.png)

Dimensions at max: 38.496 x 97.794 mm
Top left corner to USB - 7.452 mm

Keyhole dimensions:
x = 2.635
y = 0.233

### Case
![imgCase](assets/imgcase.png)
![imgCasePlate](assets/imgcaseplate.png)

## References 
A list of the resources I used to hopefully help others and keep their own piece of sanity where I've lost it..

- [Xiao RP2040 Pin Reference](https://wiki.seeedstudio.com/XIAO-RP2040/) - Used the GPIO pins in the table provided for firmware code 
- [Legacy Blueprint Hackpad Guide](https://web.archive.org/web/20251224215247/https://blueprint.hackclub.com/hackpad/index.md) - https://web.archive.org/web/20251224215247/https://blueprint.hackclub.com/hackpad/index.md
- [Porting your keyboard to qmk](https://docs.qmk.fm/porting_your_keyboard_to_qmk)
- [Hackpad Github](https://github.com/hackclub/hackpad/) - Filled with examples of other macropads
- 

