# Author: Nohemi Morales

CXX = g++ -std=c++11 -g
dependencies = Customer.o

Customer: ${dependencies}
	${CXX} -o $@ $^

clean:
	rm -f *.o Customer

