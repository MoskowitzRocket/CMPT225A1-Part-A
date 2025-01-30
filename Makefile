GXX = g++
CFLAGS = -g -Wall -std=c++20

TARGETS = AListTest TestAddLeft TestAddRight TestRemoveLeft TestRemoveRight
OBJECTS = AListTest.o TestAddLeft.o TestAddRight.o TestRemoveLeft.o TestRemoveRight.o

RM = rm -f
RUN = ./ # Default for Linux

# Detect Windows and adjust commands
ifeq ($(OS),Windows_NT)
    RM = del /Q
    RUN =
endif

all: $(TARGETS)

AListTest: AListTest.o
	$(GXX) $(CFLAGS) -o AListTest AListTest.o

TestAddLeft: TestAddLeft.o
	$(GXX) $(CFLAGS) -o TestAddLeft TestAddLeft.o

TestAddRight: TestAddRight.o
	$(GXX) $(CFLAGS) -o TestAddRight TestAddRight.o

TestRemoveLeft: TestRemoveLeft.o
	$(GXX) $(CFLAGS) -o TestRemoveLeft TestRemoveLeft.o

TestRemoveRight: TestRemoveRight.o
	$(GXX) $(CFLAGS) -o TestRemoveRight TestRemoveRight.o

%.o: %.cpp AList.h
	$(GXX) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJECTS) $(TARGETS) 2>nul || true

run: $(TARGETS)
	$(RUN)TestAddLeft || echo "TestAddLeft failed"
	$(RUN)TestAddRight || echo "TestAddRight failed"
	$(RUN)TestRemoveLeft || echo "TestRemoveLeft failed"
	$(RUN)TestRemoveRight || echo "TestRemoveRight failed"
