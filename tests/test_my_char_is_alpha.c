/*
** EPITECH PROJECT, 2017
** test_my_char_is_alpha.c
** File description:
** test
*/
#include <criterion/criterion.h>

int my_char_is_alpha(char c);

Test(my_char_is_alpha, return_value_is_good)
{
	cr_expect_eq(my_char_is_alpha('4'), 0);
	cr_expect_eq(my_char_is_alpha('h'), 1);
	cr_expect_eq(my_char_is_alpha('+'), 0);
}