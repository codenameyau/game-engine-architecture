CC = g++
CFLAGS = -Wall
BIN_NAME = run

# Source and dest
SRC_PATH = src
OUT_PATH = bin

# Main file
FILES = main.cpp
SOURCES = $(FILES:%.cpp=$(SRC_PATH)/%.cpp)

# Library dependencies
ENGINE = $(SRC_PATH)/lib/*.cpp

$(BIN_NAME):
	mkdir -p $(OUT_PATH)
	${CC} ${CFLAGS} ${SOURCES} ${ENGINE} -o $(OUT_PATH)/$(BIN_NAME)
