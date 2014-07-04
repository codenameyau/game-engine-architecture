CC = g++
CFLAGS = -Wall
BIN_NAME = run

SRC_PATH = src
OUT_PATH = bin
FILES = main.cpp
SOURCES = $(FILES:%.cpp=$(SRC_PATH)/%.cpp)

# Library dependencies
ENGINE = $(SRC_PATH)/lib/core.cpp

$(BIN_NAME):
	mkdir -p $(OUT_PATH)
	${CC} ${CFLAGS} ${SOURCES} -o $(OUT_PATH)/$(BIN_NAME)
