#include <gtest/gtest.h>
#include "../handler.h"

TEST(Handler_Tests, Check_YES_Answer) {   
    std::string regular = "ab+c.aba.*.bac.+.+*";
    int k = 3;
    int l = 2;
    Handler solution(regular, k, l);
    ASSERT_EQ("YES", solution.getAns());
}


TEST(Handler_Tests, NO_Answer) {   
    std::string regular = "acb..bab.c.*.ab.ba.+.+*a.";
    int k = 3;
    int l = 0;
    Handler solution(regular, k, l);
    ASSERT_EQ("NO", solution.getAns());
}

TEST(Handler_Tests, Stack_Non_Empty_ERROR_Answer) {   
    std::string regular = "acb..*a+ab.";
    int k = 5;
    int l = 2;
    Handler solution(regular, k, l);
    ASSERT_EQ("ERROR", solution.getAns());
}

TEST(Handler_Tests, Klini_Stack_Empty_ERROR_Answer) {   
    std::string regular = "*ab+.";
    int k = 5;
    int l = 2;
    Handler solution(regular, k, l);
    ASSERT_EQ("ERROR", solution.getAns());
}

TEST(Handler_Tests, Plus_Stack_Empty_ERROR_Answer) {   
    std::string regular = "ab+.a.*";
    int k = 5;
    int l = 2;
    Handler solution(regular, k, l);
    ASSERT_EQ("ERROR", solution.getAns());
}

TEST(Handler_Tests, Dot_Stack_Empty_ERROR_Answer) {   
    std::string regular = "ab+.";
    int k = 5;
    int l = 2;
    Handler solution(regular, k, l);
    ASSERT_EQ("ERROR", solution.getAns());
} 
