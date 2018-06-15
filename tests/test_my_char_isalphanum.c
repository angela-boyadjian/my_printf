/*
** EPITECH PROJECT, 2017
** test_my_char_isalphanum.c
** File description:
** test
*/
#include <criterion/criterion.h>

int my_char_is_alphanum(char c);

Test(my_char_isalphanum, return_value_is_good)
{
	cr_expect_eq(my_char_is_alphanum('4'), 1);
	cr_expect_eq(my_char_is_alphanum('h'), 1);
}