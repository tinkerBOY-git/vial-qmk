# Keyboard converter for IBM terminal keyboard

This is a port of TMK's converter/terminal_usb to QMK.
The ibmpc.c and ibmpc.h code has been moved from 
tmk_core/protocol in TMK to the keyboard directory in 
this version.

It supports PS/2 Scan Code Set 2 (as of now) and runs on USB AVR chips.
I tested the converter on ATMega32U4 with 1391403(102keys).

To support other codesets, ibmpc_usb.h has to be extended.

Original TMK Link/ Article: http://geekhack.org/index.php?topic=27272.0

## Connection

Keyboard | ATMega32U4
:------- | :---------
Data     |  PD0 / 3
Clock    |  PD1 / 2

And VCC and GND, of course. See Resource section for keyboard connector pin assign.


## Build

```
git clone https://github.com/marfrit/qmk_firmware.git
cd qmk_firmware
make converter/ibmpc_usb/promicro:default
```

## Resource

- Soarer's Converter: http://geekhack.org/index.php?topic=17458.0
- 102keys(1392595): http://geekhack.org/index.php?topic=10737.0
- 122keys(1390876): http://www.seasip.info/VintagePC/ibm_1390876.html
- KbdBabel: http://www.kbdbabel.org/
- RJ45 Connector: http://www.kbdbabel.org/conn/kbd_connector_ibmterm.png
- DIN Connector: http://www.kbdbabel.org/conn/kbd_connector_ibm3179_318x_319x.png
- WinAVR: http://winavr.sourceforge.net/

