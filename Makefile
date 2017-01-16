BASEDIR = .

INCLUDES = -I$(BASEDIR)

CXX = g++ -std=c++11
CXXFLAGS = $(INCLUDES) -g

.SUFFIXES: .cc

.cc.o:
	$(CXX) $(CXXFLAGS) -c $<

.cc :
	$(CXX) $(CXXFLAGS) $< -o $@

SRC = GarbageCollection.cpp \
      main.cpp

OBJ = $(addsuffix .o, $(basename $(SRC)))

GarbageCollection : $(OBJ)
		$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

clean:
	rm -f $(OBJ) GarbageCollection *~
