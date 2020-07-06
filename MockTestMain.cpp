//
//  MockTestMain.cpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#include <stdio.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "Person.hpp"
#include "PersonDaoMock.hpp"

using testing::Return;

TEST(Person_Test, save) {
    //test data
    Person p("Dave", 40);

    //STUDENT WORK
    //mock setup
    PersonDaoMock pdm;
    EXPECT_CALL(pdm, save(&p));
    EXPECT_CALL(pdm, find("Dave"))
    .WillOnce(Return(p));
    EXPECT_CALL(pdm, update(&p));
    EXPECT_CALL(pdm, remove(&p));


    //wiring

    //execution
    p.save();

    //STUDENT WORK
    //test
}

// MORE TESTS -- update, find, remove, constructor(no mocks), etc.


int main(int argc, char **argv) {
  testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}

