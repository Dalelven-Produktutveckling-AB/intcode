#include "input.h"
#include <stdio.h>

int intcode_interpreter(int *data, size_t len)
{
    return data[0];
}

int main()
{
    if (intcode_interpreter(test_vector_1, ARRAY_SIZE(test_vector_1)) != test_vector_1_answer())
    {
        printf("Test vector 1 failure\n");
        return 0;
    }

    if (intcode_interpreter(test_vector_2, ARRAY_SIZE(test_vector_2)) != test_vector_2_answer())
    {
        printf("Test vector 2 failure\n");
        return 0;
    }

    if (intcode_interpreter(test_vector_3, ARRAY_SIZE(test_vector_3)) != test_vector_3_answer())
    {
        printf("Test vector 3 failure\n");
        return 0;
    }

    if (intcode_interpreter(input, ARRAY_SIZE(input)) != input_answer())
    {
        printf("Input failure\n");
        return 0;
    }

    printf("Correct answer: %d\n", input_answer());
}