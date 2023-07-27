# iSkorpionRa1n

UNOFFICIAL Checkm8 Jailbreak Tool based on OpenRa1n & Palera1n


## Dumped payload from palera1n v2.0.0 beta 7 

- pongoOS_shellcode(already compressed).bin 
- checkra1n-kpf-ploosh.bin
- ramdisk.bin
- overlay.bin

## Usage

0. Set DFU State to your iDevice.
1. Switch apple mobile device driver with libusbK
2. iSkorpionRa1n.exe from output folder
3. Wait for Pongo Device to connect & install drivers (from output folder)
4. & wait, for some reason Pongo detection takes 1 minute.


## BootArgs:

-h : show help ( show full help dialogue )
-V : verbose boot
-f : rootful jailbreak
-e : XNU boot args
-l : rootless jailbreak ( default )
-s : safemode


## Attributions

- [openra1n](https://github.com/mineek/openra1n) - Origin of the project
- [palera1n team](https://github.com/palera1n) - payloads
- [checkra1n](https://checkra.in/) - yeah, do i really need to explain this one?
- [iSkorpion](https://iskorpion.com/products) - The main reason why I did this.
- [Zadiag](https://zadig.akeo.ie/) - for installing drivers

## How to compile

- install Cygwin64
- install git,libusb, libssl, gcc

- clone this repository, CD to repository's folder
- type this command : "make" without quotes.
- you'll find the compiled exe inside output folder.
- if you don't know how to compile just use the attached exe inside output folder.

## Contact:

Telegram: https://t.me/shetouane
Twitter: https://x.com/shetouane
Website: https://iskorpion.com/admin
