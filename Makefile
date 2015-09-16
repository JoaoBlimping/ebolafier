CC=gcc
SRC_DIR=src
BIN_DIR=bin
INSTALL_DIR=/usr/local/bin
OUTPUT=ebolafier


all:
	$(CC) $(SRC_DIR)/*.cc -o $(BIN_DIR)/$(OUTPUT)

install:
	cp $(BIN_DIR)/$(OUTPUT) $(INSTALL_PATH)/$(OUTPUT)
