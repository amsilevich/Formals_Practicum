#pragma once
#include <gtest/gtest.h>
#include "../handler_src/handler.h"

bool checkVectsEqual(const std::vector<bool> &first, const std::vector<bool> &second);

TEST(Handler_Tests, YES_Test) {   
    std::string regular = "ab+c.aba.*.bac.+.+*";
    int k = 3;
    int l = 2;
    Handler 
    solution(regular, k, l);
    ASSERT_EQ("YES", solution.getAns());
}


TEST(Handler_Tests, NO_Test) {   
    std::string regular = "acb..bab.c.*.ab.ba.+.+*a.";
    int k = 3;
    int l = 0;
    Handler solution(regular, k, l);
    ASSERT_EQ("NO", solution.getAns());
}

TEST(Handler_Tests, Stack_Non_Empty_ERROR_Test) {   
    std::string regular = "acb..*a+ab.";
    int k = 5;
    int l = 2;
    Handler solution(regular, k, l);
    ASSERT_EQ("ERROR", solution.getAns());
}

TEST(Handler_Tests, Klini_Stack_Empty_ERROR_Test) {   
    std::string regular = "*ab+.";
    int k = 5;
    int l = 2;
    Handler solution(regular, k, l);
    ASSERT_EQ("ERROR", solution.getAns());
}

TEST(Handler_Tests, Plus_Stack_Empty_ERROR_Test) {   
    std::string regular = "ab+.a.*";
    int k = 5;
    int l = 2;
    Handler solution(regular, k, l);
    ASSERT_EQ("ERROR", solution.getAns());
}

TEST(Handler_Tests, Dot_Stack_Empty_ERROR_Test) {   
    std::string regular = "ab+.";
    int k = 5;
    int l = 2;
    Handler solution(regular, k, l);
    ASSERT_EQ("ERROR", solution.getAns());
} 

TEST(Node_Tests, Plus_Test1) {
    std::vector<bool> l = {1, 0, 0, 0, 1}, r = {1, 1, 0, 0, 0};
    Node L(l), R(r);
    Node Res(5);
    Res.Plus(L, R);
    std::vector<bool> vres = Res.vectGetter(), ans = {1, 1, 0, 0, 1};
    ASSERT_EQ(true, checkVectsEqual(vres, ans)); 
}

TEST(Node_Tests, Plus_Test2) {
    std::vector<bool> l = {0, 0, 0, 0, 0}, r = {1, 1, 0, 1, 0};
    Node L(l), R(r);
    Node Res(5);
    Res.Plus(L, R);
    std::vector<bool> vres = Res.vectGetter(), ans = {1, 1, 0, 1, 0};
    ASSERT_EQ(true, checkVectsEqual(vres, ans)); 
}

TEST(Node_Tests, Plus_Test3) {
    std::vector<bool> l = {1}, r = {1};
    Node L(l), R(r);
    Node Res(1);
    Res.Plus(L, R);
    std::vector<bool> vres = Res.vectGetter(), ans = {1};
    ASSERT_EQ(true, checkVectsEqual(vres, ans)); 
}

TEST(Node_Tests, Klini_Test1) {
    std::vector<bool> vect = {0, 0, 1, 0, 0};
    Node node(vect);
    Node Res(5);
    Res.KliniStar(node);
    std::vector<bool> vres = Res.vectGetter(), ans = {1, 1, 1, 1, 1};
    ASSERT_EQ(true, checkVectsEqual(vres, ans)); 
}


TEST(Node_Tests, Klini_Test2) {
    std::vector<bool> vect = {0, 0, 1, 0, 0, 0};
    Node node(vect);
    Node Res(6);
    Res.KliniStar(node);
    std::vector<bool> vres = Res.vectGetter(), ans = {1, 0, 1, 0, 1, 0};
    ASSERT_EQ(true, checkVectsEqual(vres, ans)); 
}

TEST(Node_Tests, Klini_Test3) {
    std::vector<bool> vect = {1};
    Node node(vect);
    Node Res(1);
    Res.KliniStar(node);
    std::vector<bool> vres = Res.vectGetter(), ans = {1};
    ASSERT_EQ(true, checkVectsEqual(vres, ans)); 
}

TEST(Node_Tests, Dot_Test1) {
    std::vector<bool> l = {1, 0, 0, 0, 0}, r = {1, 1, 0, 0, 0};
    Node L(l), R(r);
    Node Res(5);
    Res.Dot(L, R);
    std::vector<bool> vres = Res.vectGetter(), ans = {1, 1, 0, 0, 0};
    ASSERT_EQ(true, checkVectsEqual(vres, ans)); 
}

TEST(Node_Tests, Dot_Test2) {
    std::vector<bool> l = {1, 1, 0, 0, 1}, r = {0, 0, 1, 0, 0};
    Node L(l), R(r);
    Node Res(5);
    Res.Dot(L, R);
    std::vector<bool> vres = Res.vectGetter(), ans = {0, 1, 1, 1, 0};
    ASSERT_EQ(true, checkVectsEqual(vres, ans)); 
}

TEST(Node_Tests, Dot_Test3) {
    std::vector<bool> l = {1, 0, 0, 1, 1, 0, 1, 0}, r = {0, 0, 1, 1, 0, 0, 0, 1};
    Node L(l), R(r);
    Node Res(8);
    Res.Dot(L, R);
    std::vector<bool> vres = Res.vectGetter(), ans = {1, 1, 1, 1, 0, 1, 1, 1};
    ASSERT_EQ(true, checkVectsEqual(vres, ans)); 
}