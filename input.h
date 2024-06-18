
#pragma once

#define ARRAY_SIZE(x) (sizeof(x) / sizeof(x[0]))

static int input[] = {1,  12, 2,  3,  1,  1,  2,  3,  1,  3,  4,  3,  1,  5,  0,  3,  2,  10, 1,  19, 1,  19,
                            9,  23, 1,  23, 13, 27, 1,  10, 27, 31, 2,  31, 13, 35, 1,  10, 35, 39, 2,  9,  39, 43,
                            2,  43, 9,  47, 1,  6,  47, 51, 1,  10, 51, 55, 2,  55, 13, 59, 1,  59, 10, 63, 2,  63,
                            13, 67, 2,  67, 9,  71, 1,  6,  71, 75, 2,  75, 9,  79, 1,  79, 5,  83, 2,  83, 13, 87,
                            1,  9,  87, 91, 1,  13, 91, 95, 1,  2,  95, 99, 1,  99, 6,  0,  99, 2,  14, 0,  0};

static int input_answer()
{
    return 3085697;
}

static int test_vector_1[] = {1, 1, 1, 0, 99};

inline int test_vector_1_answer()
{
    return 2;
}

static int test_vector_2[] = {2, 2, 2, 0, 99};

inline int test_vector_2_answer()
{
    return 4;
}

static int test_vector_3[] = {99};

inline int test_vector_3_answer()
{
    return 99;
}