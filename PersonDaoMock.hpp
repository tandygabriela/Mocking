// PersonDaoMock.hpp
#ifndef PersonDaoMock_h
#define PersonDaoMock_h

#include "PersonDao.hpp"
#include <gmock/gmock.h>

class Person;

class PersonDaoMock: public PersonDao {
public:
  // YOUR CODE
	MOCK_METHOD(void, save, (Person *p), (override));
	MOCK_METHOD(Person, find, (string name), (override));
	MOCK_METHOD(void, update, (Person* p), (override));
	MOCK_METHOD(void, remove, (Person* p), (override));




};

#endif /* PersonDaoMock_h */
