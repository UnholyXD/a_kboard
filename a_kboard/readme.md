# a_kboard

![a_kboard](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [unholyxd](https://github.com/unholyxd)
* Hardware Supported: ATMega32U4 

Make example for this keyboard (after setting up your build environment):

    make a_kboard:default

Flashing example for this keyboard:

    make a_kboard:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
