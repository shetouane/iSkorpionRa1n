CFLAGS = -I./include -Wall -Wno-pointer-sign
CFLAGS += -Os
BIN = output/iSkorpionRa1n
SOURCE = iSkorpionRa1n.c lz4/lz4.c lz4/lz4hc.c log.c usb_libusb.c pongo_helper.c lock_vars.c fake_embedded.c boyermoore_memmem.c override_file.c optparse.c xxd-binpack.dmg.o xxd-checkra1n-kpf-pongo.o xxd-Pongo.bin.o xxd-ramdisk.dmg.o

	CC = gcc
	CFLAGS += -DHAVE_LIBUSB  -DUSE_LIBUSB=1
	LDFLAGS += -lusb-1.0 


.PHONY: all clean payloads iSkorpionRa1n

all: payloads iSkorpionRa1n

payloads:
	@mkdir -p include/payloads
	@for file in payloads/*; do \
		echo " XXD    $$file"; \
		xxd -i $$file > include/$$file.h; \
	done

iSkorpionRa1n: payloads
	@echo " CC     $(BIN)"
	@$(CC) $(CFLAGS) $(SOURCE) $(LDFLAGS) -o $(BIN)
	strip $(BIN)

clean:
	@echo " CLEAN  $(BIN)"
	@rm -f $(BIN)
	@echo " CLEAN  include/payloads"
	@rm -rf include/payloads
