# pico-sdk-standalone-blink

Minimal example of a standalone app built using the [Raspberry Pi Pico SDK](https://github.com/raspberrypi/pico-sdk).

## Prerequisites

Install the required packages:

```bash
sudo apt update
sudo apt install cmake gcc-arm-none-eabi build-essential
```

And then install the [Pico SDK](https://github.com/raspberrypi/pico-sdk):

```bash
mkdir ~/pico
cd ~/pico
git clone -b master https://github.com/raspberrypi/pico-sdk.git
git submodule update --init
```

## Compiling the project

Set the PICO_SDK_PATH to the installation path of the Pico SDK. For instance, if you installed the Pico SDK
to ~/pico/pico-sdk (as suggested in the documentation), run the following command:

```bash
export PICO_SDK_PATH=~/pico/pico-sdk
```

Then compile the project:

```bash
cd pico-sdk-standalone-blink
mkdir build
cd build
cmake ..
make -j4
```

You'll find the compiled UF2 binary in `build/app.uf2`, and the compiled HEX file in `build/app.hex`. Enjoy!
