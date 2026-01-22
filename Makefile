CC = gcc
CFLAGS = -Wall
TARGETS = cod comp cor
DEST_DIR = /usr/bin

all: $(TARGETS)
	chmod +x $(TARGETS)

cod: cod.c
	$(CC) $(CFLAGS) cod.c -o cod

comp: comp.c
	$(CC) $(CFLAGS) comp.c -o comp

cor: cor.c
	$(CC) $(CFLAGS) cor.c -o cor

install: all
	sudo mv $(TARGETS) $(DEST_DIR)/

uninstall:
	sudo rm -f $(addprefix $(DEST_DIR)/, $(TARGETS))
