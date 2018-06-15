/*
** EPITECH PROJECT, 2017
** test_my_char_is_num.c
** File description:
** test
*/
#include <criterion/criterion.h>

int my_char_is_num(char c);

Test(my_char_is_num, return_value_is_good)
{
	cr_expect_eq(my_char_is_num('4'), 1);
	cr_expect_eq(my_char_is_num('h'), 0);
}