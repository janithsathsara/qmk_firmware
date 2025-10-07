# Lily58 Keyboard

![Lily58 RP2040](https://user-images.githubusercontent.com/6285554/84393842-13960900-ac37-11ea-811e-65db2948ca73.jpg)

Sofle is 6×4+5 keys column-staggered split keyboard.

## Build Firmware

To build Lily58 firmware for RP2040 Controller(must be Pro Micro footprint), use following command

```bash
qmk compile -c -kb keebster_labs/lily58/rev2 -km via
```

To flash Lily58 firmware directy into RP2040 Controller(must be Pro Micro footprint), use following command

```bash
qmk flash -c -kb keebster_labs/lily58/rev2 -km via
```

Doubble tap reset button on he keyboard when asked.

Disconnect the first half, connect the second one and repeat the process.
