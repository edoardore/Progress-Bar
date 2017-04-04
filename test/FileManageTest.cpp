//
// Created by Edoardo Re on 04/04/17.
//

#include "gtest/gtest.h"
#include "../FileManage.h"
#include "../Grafica.h"
#include "../ProgressBar.h"

//test del costruttore di default
TEST(FileManageTest, CostruttoreDefault) {
    FileManage f;
    ASSERT_EQ(0, f.getFileCaricati());
    ASSERT_EQ(0, f.getBitCaricati());
    ASSERT_EQ(0, f.getObservers().size());
}

//test di iscrizione e disiscrizione
TEST(FileManageTest, Subscribe) {
    FileManage f;
    ProgressBar *b1;
    ProgressBar *b2;
    ProgressBar *b3;
    ProgressBar *b4;
    ProgressBar *b5;
    ProgressBar *b6;
    ProgressBar *b7;
    ProgressBar *b8;
    f.subscribe(b1);
    f.subscribe(b2);
    f.subscribe(b3);
    f.subscribe(b4);
    f.subscribe(b5);
    f.subscribe(b6);
    f.subscribe(b7);
    f.subscribe(b8);
    ASSERT_EQ(8, f.getObservers().size());
    f.unsubscribe(b1);
    f.unsubscribe(b2);
    f.unsubscribe(b3);
    f.unsubscribe(b4);
    f.unsubscribe(b5);
    f.unsubscribe(b6);
    f.unsubscribe(b7);
    f.unsubscribe(b8);
    ASSERT_EQ(0, f.getObservers().size());
    f.subscribe(b1);
    f.subscribe(b2);
    f.unsubscribe(b2);
    ASSERT_EQ(1, f.getObservers().size());
}