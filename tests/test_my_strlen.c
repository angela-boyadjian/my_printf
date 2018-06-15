/*
** EPITECH PROJECT, 2017
** test_my_strlen.c
** File description:
** test
*/
#include <criterion/criterion.h>

int my_strlen(char c);

Test(my_strlen, return_value_is_good)
{
	cr_expect_eq(my_strlen("hello"), 5);
	cr_expect_eq(my_strlen("hello123"), 8);
	cr_expect_eq(my_strlen(""), 0);
}