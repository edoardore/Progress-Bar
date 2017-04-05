//
// Created by Edoardo Re on 04/04/17.
//

#include "gtest/gtest.h"
#include "../Risorse.h"

TEST(RisorseTest, Test_Costruttore) {
    Risorse *r[2];
    r[0] = new Risorse("Risorsa", 4);
    ASSERT_EQ("Risorsa", r[0]->getFileName());
    ASSERT_EQ(4, r[0]->getBit());
    r[1] = new Risorse("Risorsa_2", 8);
    ASSERT_EQ("Risorsa_2", r[1]->getFileName());
    ASSERT_EQ(8, r[1]->getBit());
    r[2] = new Risorse("Risorsa_3", 16);
    ASSERT_EQ("Risorsa_3", r[2]->getFileName());
    ASSERT_EQ(16, r[2]->getBit());
}
