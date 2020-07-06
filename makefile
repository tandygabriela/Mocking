testMain : MockTestMain.o Person.o
    g++ -std=c++11 MockTestMain.o Person.o -lgmock -lgtest -lgtest_main -pthread -o testMain

MockTestMain.o : MockTestMain.cpp Person.hpp PersonDao.hpp PersonDaoMock.hpp
    g++ -std=c++11 -c MockTestMain.cpp

Person.o : Person.cpp Person.hpp
    g++ -std=c++11 -c Person.cpp

clean :
    rm testMain MockTestMain.o Person.o