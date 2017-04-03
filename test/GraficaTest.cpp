//
// Created by Edoardo Re on 03/04/17.
//

#include "gtest/gtest.h"
#include "../Grafica.h"

//test del cosruttore con lista di inizializzazione
TEST(GraficaTest, Test_Costruttore) {
    FileManage *f = new FileManage;
    Grafica bar(f);
    ASSERT_EQ(0, bar.getBUp());
    ASSERT_EQ(0, bar.getFUp());
    ASSERT_EQ("Unknown", bar.getCurrentName());
}

//test del metodo update
TEST(GraficaTest, Test_Update) {
    FileManage *f = new FileManage;
    Grafica bar(f);
    bar.update(16, 1, "Test");
    ASSERT_EQ(16, bar.getBUp());
    ASSERT_EQ(1, bar.getFUp());
    ASSERT_EQ("Test", bar.getCurrentName());
}

//test2 del metodo update
TEST(GraficaTest, Test2_Update) {
    FileManage *f = new FileManage;
    Grafica bar(f);
    bar.update(8, 1, "Test2");
    ASSERT_EQ(8, bar.getBUp());
    ASSERT_EQ(1, bar.getFUp());
    ASSERT_EQ("Test2", bar.getCurrentName());
}
