objects = polygon.o rectangle.o rhombus.o IsoTrapezoid.o main.o


test: 	$(objects)
	g++ -o test $(objects)
polygon.o: polygon.cpp polygon.h
	g++ -c polygon.cpp
rectangle.o: rectangle.cpp rectangle.h polygon.h
	g++ -c rectangle.cpp
rhombus.o: rhombus.cpp rhombus.h polygon.h
	g++ -c rhombus.cpp
IsoTrapezoid.o: IsoTrapezoid.cpp IsoTrapezoid.h polygon.h
	g++ -c IsoTrapezoid.cpp

.PHONY: clean
clean: 
	rm test $(objects)

.PHONY: run
run: 
	make
	./test
