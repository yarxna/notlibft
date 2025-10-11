#define _GNU_SOURCE
#include "../includes/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	// ft_isalpha
	color_string("Testing ft_isalpha function:");
	int ft_isalpha1 = ft_isalpha('A');
	int ft_isalpha2 = ft_isalpha('Z');
	int ft_isalpha3 = ft_isalpha('a');
	int ft_isalpha4 = ft_isalpha('z');
	int ft_isalpha5 = ft_isalpha('4');
	int ft_isalpha6 = ft_isalpha('@');
	int ft_isalpha7 = ft_isalpha(65);  // 'A'   
	int ft_isalpha8 = ft_isalpha(99);  // 'c'  
	int ft_isalpha9 = ft_isalpha(0);
	int ft_isalpha10 = ft_isalpha(300);	
	int ft_isalpha11 = ft_isalpha(-10);

	int isalpha_result1 = isalpha('A') != 0;
	int isalpha_result2 = isalpha('Z') != 0;
	int isalpha_result3 = isalpha('a') != 0;
	int isalpha_result4 = isalpha('z') != 0;
	int isalpha_result5 = isalpha('4') != 0;
	int isalpha_result6 = isalpha('@') != 0;
	int isalpha_result7 = isalpha(65) != 0; 
	int isalpha_result8 = isalpha(99) != 0; 
	int isalpha_result9 = isalpha(0) != 0;
	int isalpha_result10 = isalpha(300) != 0;
	int isalpha_result11 = isalpha(-10) != 0;

	test_result(ft_isalpha1 == isalpha_result1, "ft_isalpha('A')", ft_isalpha1, isalpha_result1);
	test_result(ft_isalpha2 == isalpha_result2, "ft_isalpha('Z')", ft_isalpha2, isalpha_result2);
	test_result(ft_isalpha3 == isalpha_result3, "ft_isalpha('a')", ft_isalpha3, isalpha_result3);
	test_result(ft_isalpha4 == isalpha_result4, "ft_isalpha('z')", ft_isalpha4, isalpha_result4);
	test_result(ft_isalpha5 == isalpha_result5, "ft_isalpha('4')", ft_isalpha5, isalpha_result5);
	test_result(ft_isalpha6 == isalpha_result6, "ft_isalpha('@')", ft_isalpha6, isalpha_result6);
	test_result(ft_isalpha7 == isalpha_result7, "ft_isalpha(65)", ft_isalpha7, isalpha_result7);  // 'A'
	test_result(ft_isalpha8 == isalpha_result8, "ft_isalpha(99)", ft_isalpha8, isalpha_result8);  // 'c'
	test_result(ft_isalpha9 == isalpha_result9, "ft_isalpha(0)", ft_isalpha9, isalpha_result9);
	test_result(ft_isalpha10 == isalpha_result10, "ft_isalpha(300)", ft_isalpha10, isalpha_result10);
	test_result(ft_isalpha11 == isalpha_result11, "ft_isalpha(-10)", ft_isalpha11, isalpha_result11);
	color_string("ft_isalpha tests completed.");
	printf("\n");

	// ft_isdigit
	color_string("Testing ft_isdigit function:");
	int ft_isdigit1 = ft_isdigit('0');
	int ft_isdigit2 = ft_isdigit('1');
	int ft_isdigit3 = ft_isdigit('2');
	int ft_isdigit4 = ft_isdigit('3');
	int ft_isdigit5 = ft_isdigit('4');
	int ft_isdigit6 = ft_isdigit('5');
	int ft_isdigit7 = ft_isdigit('6');
	int ft_isdigit8 = ft_isdigit('7');
	int ft_isdigit9 = ft_isdigit('8');
	int ft_isdigit10 = ft_isdigit('9');
	int ft_isdigit11 = ft_isdigit(1);

	int isdigit_result1 = isdigit('0') != 0;
	int isdigit_result2 = isdigit('1') != 0;
	int isdigit_result3 = isdigit('2') != 0;
	int isdigit_result4 = isdigit('3') != 0;
	int isdigit_result5 = isdigit('4') != 0;
	int isdigit_result6 = isdigit('5') != 0;
	int isdigit_result7 = isdigit('6') != 0;
	int isdigit_result8 = isdigit('7') != 0;
	int isdigit_result9 = isdigit('8') != 0;
	int isdigit_result10 = isdigit('9') != 0;
	int isdigit_result11 = isdigit(1) != 0;

	test_result(ft_isdigit1 == isdigit_result1, "ft_isdigit('0')", ft_isdigit1 , isdigit_result1);
	test_result(ft_isdigit2 == isdigit_result2, "ft_isdigit('1')", ft_isdigit2 , isdigit_result2);
	test_result(ft_isdigit3 == isdigit_result3, "ft_isdigit('2')", ft_isdigit3 , isdigit_result3);
	test_result(ft_isdigit4 == isdigit_result4, "ft_isdigit('3')", ft_isdigit4 , isdigit_result4);
	test_result(ft_isdigit5 == isdigit_result5, "ft_isdigit('4')", ft_isdigit5 , isdigit_result5);
	test_result(ft_isdigit6 == isdigit_result6, "ft_isdigit('5')", ft_isdigit6 , isdigit_result6);
	test_result(ft_isdigit7 == isdigit_result7, "ft_isdigit('6')", ft_isdigit7 , isdigit_result7);
	test_result(ft_isdigit8 == isdigit_result8, "ft_isdigit('7')", ft_isdigit8 , isdigit_result8);
	test_result(ft_isdigit9 == isdigit_result9, "ft_isdigit('8')", ft_isdigit9 , isdigit_result9);
	test_result(ft_isdigit10 == isdigit_result10, "ft_isdigit('9')", ft_isdigit10 , isdigit_result10);
	test_result(ft_isdigit11 == isdigit_result11, "ft_isdigit(1)", ft_isdigit11 , isdigit_result11);
	color_string("ft_isdigit tests completed.");
	printf("\n");

	// ft_isalnum
	color_string("Testing ft_isalnum function:");
	int ft_isalnum1 = ft_isalnum('A');
	int ft_isalnum2 = ft_isalnum('Z');	
	int ft_isalnum3 = ft_isalnum('a');
	int ft_isalnum4 = ft_isalnum('z');
	int ft_isalnum5 = ft_isalnum('0');
	int ft_isalnum6 = ft_isalnum('9');
	int ft_isalnum7 = ft_isalnum('@');
	int ft_isalnum8 = ft_isalnum(65);  // 'A'
	int ft_isalnum9 = ft_isalnum(99);  // 'c'
	int ft_isalnum10 = ft_isalnum(0);
	int ft_isalnum11 = ft_isalnum(300);
	int ft_isalnum12 = ft_isalnum(-10);
	int ft_isalnum13 = ft_isalnum('!');
	int ft_isalnum14 = ft_isalnum(' ');

	int isalnum_result1 = isalnum('A') != 0;
	int isalnum_result2 = isalnum('Z') != 0;
	int isalnum_result3 = isalnum('a') != 0;
	int isalnum_result4 = isalnum('z') != 0;
	int isalnum_result5 = isalnum('0') != 0;
	int isalnum_result6 = isalnum('9') != 0;
	int isalnum_result7 = isalnum('@') != 0;
	int isalnum_result8 = isalnum(65) != 0;
	int isalnum_result9 = isalnum(99) != 0;
	int isalnum_result10 = isalnum(0) != 0;
	int isalnum_result11 = isalnum(300) != 0;
	int isalnum_result12 = isalnum(-10) != 0;
	int isalnum_result13 = isalnum('!') != 0;
	int isalnum_result14 = isalnum(' ') != 0;

	test_result(ft_isalnum1 == isalnum_result1, "ft_isalnum('A')", ft_isalnum1, isalnum_result1);
	test_result(ft_isalnum2 == isalnum_result2, "ft_isalnum('Z')", ft_isalnum2, isalnum_result2);
	test_result(ft_isalnum3 == isalnum_result3, "ft_isalnum('a')", ft_isalnum3, isalnum_result3);
	test_result(ft_isalnum4 == isalnum_result4, "ft_isalnum('z')", ft_isalnum4, isalnum_result4);
	test_result(ft_isalnum5 == isalnum_result5, "ft_isalnum('0')", ft_isalnum5, isalnum_result5);
	test_result(ft_isalnum6 == isalnum_result6, "ft_isalnum('9')", ft_isalnum6, isalnum_result6);
	test_result(ft_isalnum7 == isalnum_result7, "ft_isalnum('@')", ft_isalnum7, isalnum_result7);
	test_result(ft_isalnum8 == isalnum_result8, "ft_isalnum(65)", ft_isalnum8, isalnum_result8);  // 'A'
	test_result(ft_isalnum9 == isalnum_result9, "ft_isalnum(99)", ft_isalnum9, isalnum_result9);  // 'c'
	test_result(ft_isalnum10 == isalnum_result10, "ft_isalnum(0)", ft_isalnum10, isalnum_result10);
	test_result(ft_isalnum11 == isalnum_result11, "ft_isalnum(300)", ft_isalnum11, isalnum_result11);
	test_result(ft_isalnum12 == isalnum_result12, "ft_isalnum(-10)", ft_isalnum12, isalnum_result12);
	test_result(ft_isalnum13 == isalnum_result13, "ft_isalnum('!')", ft_isalnum13, isalnum_result13);
	test_result(ft_isalnum14 == isalnum_result14, "ft_isalnum(' ')", ft_isalnum14, isalnum_result14);
	color_string("ft_isalnum tests completed.");
	printf("\n");

	// ft_isascii
	color_string("Testing ft_isascii function:");
	int ft_isascii1 = ft_isascii('A');
	int ft_isascii2 = ft_isascii('Z');
	int ft_isascii3 = ft_isascii('a');
	int ft_isascii4 = ft_isascii('z');
	int ft_isascii5 = ft_isascii('0');
	int ft_isascii6 = ft_isascii('9');
	int ft_isascii7 = ft_isascii('@');
	int ft_isascii8 = ft_isascii(65);  // 'A'
	int ft_isascii9 = ft_isascii(99);  // 'c'
	int ft_isascii10 = ft_isascii(0);
	int ft_isascii11 = ft_isascii(127);
	int ft_isascii12 = ft_isascii(128);
	int ft_isascii13 = ft_isascii(300);
	int ft_isascii14 = ft_isascii(-10);

	int isascii_result1 = isascii('A') != 0;
	int isascii_result2 = isascii('Z') != 0;
	int isascii_result3 = isascii('a') != 0;
	int isascii_result4 = isascii('z') != 0;
	int isascii_result5 = isascii('0') != 0;
	int isascii_result6 = isascii('9') != 0;
	int isascii_result7 = isascii('@') != 0;
	int isascii_result8 = isascii(65) != 0;
	int isascii_result9 = isascii(99) != 0;
	int isascii_result10 = isascii(0) != 0;
	int isascii_result11 = isascii(127) != 0;
	int isascii_result12 = isascii(128) != 0;
	int isascii_result13 = isascii(300) != 0;
	int isascii_result14 = isascii(-10) != 0;

	test_result(ft_isascii1 == isascii_result1, "ft_isascii('A')", ft_isascii1, isascii_result1);
	test_result(ft_isascii2 == isascii_result2, "ft_isascii('Z')", ft_isascii2, isascii_result2);
	test_result(ft_isascii3 == isascii_result3, "ft_isascii('a')", ft_isascii3, isascii_result3);
	test_result(ft_isascii4 == isascii_result4, "ft_isascii('z')", ft_isascii4, isascii_result4);
	test_result(ft_isascii5 == isascii_result5, "ft_isascii('0')", ft_isascii5, isascii_result5);
	test_result(ft_isascii6 == isascii_result6, "ft_isascii('9')", ft_isascii6, isascii_result6);
	test_result(ft_isascii7 == isascii_result7, "ft_isascii('@')", ft_isascii7, isascii_result7);
	test_result(ft_isascii8 == isascii_result8, "ft_isascii(65)", ft_isascii8, isascii_result8);  // 'A'
	test_result(ft_isascii9 == isascii_result9, "ft_isascii(99)", ft_isascii9, isascii_result9);  // 'c'
	test_result(ft_isascii10 == isascii_result10, "ft_isascii(0)", ft_isascii10, isascii_result10);
	test_result(ft_isascii11 == isascii_result11, "ft_isascii(127)", ft_isascii11, isascii_result11);
	test_result(ft_isascii12 == isascii_result12, "ft_isascii(128)", ft_isascii12, isascii_result12);
	test_result(ft_isascii13 == isascii_result13, "ft_isascii(300)", ft_isascii13, isascii_result13);
	test_result(ft_isascii14 == isascii_result14, "ft_isascii(-10)", ft_isascii14, isascii_result14);
	color_string("ft_isalnum tests completed.");
	printf("\n");

	// ft_isprint
	color_string("Testing ft_isprint function:");
	int ft_isprint1 = ft_isprint('A');
	int ft_isprint2 = ft_isprint('Z');
	int ft_isprint3 = ft_isprint('a');
	int ft_isprint4 = ft_isprint('z');	
	int ft_isprint5 = ft_isprint('0');
	int ft_isprint6 = ft_isprint('9');
	int ft_isprint7 = ft_isprint('@');
	int ft_isprint8 = ft_isprint(65);  // 'A'
	int ft_isprint9 = ft_isprint(99);  // 'c'
	int ft_isprint10 = ft_isprint(0);
	int ft_isprint11 = ft_isprint(127);
	int ft_isprint12 = ft_isprint(128);
	int ft_isprint13 = ft_isprint(300);
	int ft_isprint14 = ft_isprint(-10);
	int ft_isprint15 = ft_isprint(' ');
	int ft_isprint16 = ft_isprint('\n'); // newline

	int isprint_result1 = isprint('A') != 0;
	int isprint_result2 = isprint('Z') != 0;
	int isprint_result3 = isprint('a') != 0;
	int isprint_result4 = isprint('z') != 0;
	int isprint_result5 = isprint('0') != 0;
	int isprint_result6 = isprint('9') != 0;
	int isprint_result7 = isprint('@') != 0;
	int isprint_result8 = isprint(65) != 0;
	int isprint_result9 = isprint(99) != 0;
	int isprint_result10 = isprint(0) != 0;
	int isprint_result11 = isprint(127) != 0;
	int isprint_result12 = isprint(128) != 0;
	int isprint_result13 = isprint(300) != 0;
	int isprint_result14 = isprint(-10) != 0;
	int isprint_result15 = isprint(' ') != 0;
	int isprint_result16 = isprint('\n') != 0;

	test_result(ft_isprint1 == isprint_result1, "ft_isprint('A')", ft_isprint1, isprint_result1);
	test_result(ft_isprint2 == isprint_result2, "ft_isprint('Z')", ft_isprint2, isprint_result2);
	test_result(ft_isprint3 == isprint_result3, "ft_isprint('a')", ft_isprint3, isprint_result3);
	test_result(ft_isprint4 == isprint_result4, "ft_isprint('z')", ft_isprint4, isprint_result4);
	test_result(ft_isprint5 == isprint_result5, "ft_isprint('0')", ft_isprint5, isprint_result5);
	test_result(ft_isprint6 == isprint_result6, "ft_isprint('9')", ft_isprint6, isprint_result6);
	test_result(ft_isprint7 == isprint_result7, "ft_isprint('@')", ft_isprint7, isprint_result7);
	test_result(ft_isprint8 == isprint_result8, "ft_isprint(65)", ft_isprint8, isprint_result8);  // 'A'
	test_result(ft_isprint9 == isprint_result9, "ft_isprint(99)", ft_isprint9, isprint_result9);  // 'c'
	test_result(ft_isprint10 == isprint_result10, "ft_isprint(0)", ft_isprint10, isprint_result10);
	test_result(ft_isprint11 == isprint_result11, "ft_isprint(127)", ft_isprint11, isprint_result11);
	test_result(ft_isprint12 == isprint_result12, "ft_isprint(128)", ft_isprint12, isprint_result12);
	test_result(ft_isprint13 == isprint_result13, "ft_isprint(300)", ft_isprint13, isprint_result13);
	test_result(ft_isprint14 == isprint_result14, "ft_isprint(-10)", ft_isprint14, isprint_result14);
	test_result(ft_isprint15 == isprint_result15, "ft_isprint(' ')", ft_isprint15, isprint_result15);
	test_result(ft_isprint16 == isprint_result16, "ft_isprint('\\n')", ft_isprint16, isprint_result16);

	color_string("ft_isprint tests completed.");
	printf("\n");

	// ft_toupper
	color_string("ft_toupper function tests:");
	int ft_toupper1 = ft_toupper('a');
	int ft_toupper2 = ft_toupper('z');
	int ft_toupper3 = ft_toupper('A');
	int ft_toupper4 = ft_toupper('Z');
	int ft_toupper5 = ft_toupper('0');
	int ft_toupper6 = ft_toupper('1');
	int ft_toupper7 = ft_toupper('@');
	int ft_toupper8 = ft_toupper(65);  // 'A'
	int ft_toupper9 = ft_toupper(99);  // 'c'
	int ft_toupper10 = ft_toupper(0);
	int ft_toupper11 = ft_toupper(-10);
	int ft_toupper12 = ft_toupper(' ');
	int ft_toupper13 = ft_toupper('\n'); // newline
	int ft_toupper14 = ft_toupper(-2);

	int toupper_result1 = toupper('a');
	int toupper_result2 = toupper('z');
	int toupper_result3 = toupper('A');
	int toupper_result4 = toupper('Z');
	int toupper_result5 = toupper('0');
	int toupper_result6 = toupper('1');
	int toupper_result7 = toupper('@');
	int toupper_result8 = toupper(65);
	int toupper_result9 = toupper(99);
	int toupper_result10 = toupper(0);
	int toupper_result11 = toupper(-10);
	int toupper_result12 = toupper(' ');
	int toupper_result13 = toupper('\n');
	int toupper_result14 = toupper(-2);

	test_result(ft_toupper1 == toupper_result1, "ft_toupper('a')", ft_toupper1, toupper_result1); // 'a' to 'A'
	test_result(ft_toupper2 == toupper_result2, "ft_toupper('z')", ft_toupper2, toupper_result2); // 'z' to 'Z'
	test_result(ft_toupper3 == toupper_result3, "ft_toupper('A')", ft_toupper3, toupper_result3);
	test_result(ft_toupper4 == toupper_result4, "ft_toupper('Z')", ft_toupper4, toupper_result4);
	test_result(ft_toupper5 == toupper_result5, "ft_toupper('0')", ft_toupper5, toupper_result5);
	test_result(ft_toupper6 == toupper_result6, "ft_toupper('1')", ft_toupper6, toupper_result6);
	test_result(ft_toupper7 == toupper_result7, "ft_toupper('@')", ft_toupper7, toupper_result7);
	test_result(ft_toupper8 == toupper_result8, "ft_toupper(65)", ft_toupper8, toupper_result8);    // 'A'
	test_result(ft_toupper9 == toupper_result9, "ft_toupper(99)", ft_toupper9, toupper_result9);    // 'C'
	test_result(ft_toupper10 == toupper_result10, "ft_toupper(0)", ft_toupper10, toupper_result10);
	test_result(ft_toupper11 == toupper_result11, "ft_toupper(-10)", ft_toupper11, toupper_result11);
	test_result(ft_toupper12 == toupper_result12, "ft_toupper(' ')", ft_toupper12, toupper_result12);
	test_result(ft_toupper13 == toupper_result13, "ft_toupper('\\n')", ft_toupper13, toupper_result13);
	test_result(ft_toupper14 == toupper_result14, "ft_toupper(-2)", ft_toupper14, toupper_result14);
	color_string("ft_toupper tests completed.");
	printf("\n");

	// ft_tolower
	color_string("ft_tolower function tests:");
	int ft_tolower1 = ft_tolower('A');
	int ft_tolower2 = ft_tolower('Z');
	int ft_tolower3 = ft_tolower('a');
	int ft_tolower4 = ft_tolower('z');
	int ft_tolower5 = ft_tolower('0');
	int ft_tolower6 = ft_tolower('1');
	int ft_tolower7 = ft_tolower('@');
	int ft_tolower8 = ft_tolower(65);  // 'A'
	int ft_tolower9 = ft_tolower(67);  // 'C'
	int ft_tolower10 = ft_tolower(0);
	int ft_tolower11 = ft_tolower(-10);
	int ft_tolower12 = ft_tolower(' ');
	int ft_tolower13 = ft_tolower('\n'); // newline

	int tolower_result1 = tolower('A');
	int tolower_result2 = tolower('Z');
	int tolower_result3 = tolower('a');
	int tolower_result4 = tolower('z');
	int tolower_result5 = tolower('0');
	int tolower_result6 = tolower('1');
	int tolower_result7 = tolower('@');
	int tolower_result8 = tolower(65);
	int tolower_result9 = tolower(67);
	int tolower_result10 = tolower(0);
	int tolower_result11 = tolower(-10);
	int tolower_result12 = tolower(' ');
	int tolower_result13 = tolower('\n');

	test_result(ft_tolower('A') == tolower_result1, "ft_tolower('A')", ft_tolower1, tolower_result1); // 'A' to 'a'
	test_result(ft_tolower('Z') == tolower_result2, "ft_tolower('Z')", ft_tolower2, tolower_result2); // 'Z' to 'z'
	test_result(ft_tolower('a') == tolower_result3, "ft_tolower('a')", ft_tolower3, tolower_result3);
	test_result(ft_tolower('z') == tolower_result4, "ft_tolower('z')", ft_tolower4, tolower_result4);
	test_result(ft_tolower('0') == tolower_result5, "ft_tolower('0')", ft_tolower5, tolower_result5);
	test_result(ft_tolower('1') == tolower_result6, "ft_tolower('1')", ft_tolower6, tolower_result6);
	test_result(ft_tolower('@') == tolower_result7, "ft_tolower('@')", ft_tolower7, tolower_result7);
	test_result(ft_tolower(65) == tolower_result8, "ft_tolower(65)", ft_tolower8, tolower_result8);    // 'A'
	test_result(ft_tolower(67) == tolower_result9, "ft_tolower(67)", ft_tolower9, tolower_result9);    // 'C'
	test_result(ft_tolower(0) == tolower_result10, "ft_tolower(0)", ft_tolower10, tolower_result10);
	test_result(ft_tolower(-10) == tolower_result11, "ft_tolower(-10)", ft_tolower11, tolower_result11);
	test_result(ft_tolower(' ') == tolower_result12, "ft_tolower(' ')", ft_tolower12, tolower_result12);
	test_result(ft_tolower('\n') == tolower_result13, "ft_tolower('\\n')", ft_tolower13, tolower_result13);
	color_string("ft_tolower tests completed.");
	printf("\n");

	// ft_strlen
	color_string("Testing ft_strlen function:");
	int ft_strlen1 = ft_strlen("Hello");
	int ft_strlen2 = ft_strlen("World");
	int ft_strlen3 = ft_strlen("");
	int ft_strlen4 = ft_strlen("12345");
	int ft_strlen5 = ft_strlen("!@#$%");
	int ft_strlen6 = ft_strlen(" ");
	int ft_strlen7 = ft_strlen("Hello, World!");
	int ft_strlen8 = ft_strlen("1234567890");
	int ft_strlen9 = ft_strlen("A");
	int ft_strlen10 = ft_strlen("Z");
	int ft_strlen11 = ft_strlen("abcdefghijklmnopqrstuvwxyz");

	int strlen_result1 = strlen("Hello");
	int strlen_result2 = strlen("World");
	int strlen_result3 = strlen("");
	int strlen_result4 = strlen("12345");
	int strlen_result5 = strlen("!@#$%");
	int strlen_result6 = strlen(" ");
	int strlen_result7 = strlen("Hello, World!");
	int strlen_result8 = strlen("1234567890");
	int strlen_result9 = strlen("A");
	int strlen_result10 = strlen("Z");
	int strlen_result11 = strlen("abcdefghijklmnopqrstuvwxyz");

	test_result(ft_strlen1 == strlen_result1, "ft_strlen(\"Hello\")", ft_strlen1, strlen_result1);
	test_result(ft_strlen2 == strlen_result2, "ft_strlen(\"World\")", ft_strlen2, strlen_result2);
	test_result(ft_strlen3 == strlen_result3, "ft_strlen(\"\")", ft_strlen3, strlen_result3);
	test_result(ft_strlen4 == strlen_result4, "ft_strlen(\"12345\")", ft_strlen4, strlen_result4);
	test_result(ft_strlen5 == strlen_result5, "ft_strlen(\"!@#$%\")", ft_strlen5, strlen_result5);
	test_result(ft_strlen6 == strlen_result6, "ft_strlen(\" \")", ft_strlen6, strlen_result6);
	test_result(ft_strlen7 == strlen_result7, "ft_strlen(\"Hello, World!\")", ft_strlen7, strlen_result7);
	test_result(ft_strlen8 == strlen_result8, "ft_strlen(\"1234567890\")", ft_strlen8, strlen_result8);
	test_result(ft_strlen9 == strlen_result9, "ft_strlen(\"A\")", ft_strlen9, strlen_result9);
	test_result(ft_strlen10 == strlen_result10, "ft_strlen(\"Z\")", ft_strlen10, strlen_result10);
	test_result(ft_strlen11 == strlen_result11, "ft_strlen(\"abcdefghijklmnopqrstuvwxyz\")", ft_strlen11, strlen_result11);
	color_string("ft_strlen tests completed.");
	printf("\n");

	// ft_strchr
	color_string("Testing ft_strchr function:");
	char *str = "Hello World!";
    char *ft_strchr1 = ft_strchr(str, 'H');
    char *ft_strchr2 = ft_strchr(str, 'd');
    char *ft_strchr3 = ft_strchr(str, '!');
    char *ft_strchr4 = ft_strchr(str, 'x');
    char *ft_strchr5 = ft_strchr(str, '\0');
    char *ft_strchr6 = ft_strchr(str, 'h');
    char *ft_strchr7 = ft_strchr(str, 'e');
    char *ft_strchr8 = ft_strchr(str, 'l');
    char *ft_strchr9 = ft_strchr(str, 'o');
    char *ft_strchr10 = ft_strchr(str, 'W');
    char *ft_strchr11 = ft_strchr(str, 'r');
    char *ft_strchr12 = ft_strchr(str, ' ');

	char *strchr_result1 = strchr(str, 'H');
	char *strchr_result2 = strchr(str, 'd');
	char *strchr_result3 = strchr(str, '!');
	char *strchr_result4 = strchr(str, 'x');
	char *strchr_result5 = strchr(str, '\0');
	char *strchr_result6 = strchr(str, 'h');
	char *strchr_result7 = strchr(str, 'e');
	char *strchr_result8 = strchr(str, 'l');
	char *strchr_result9 = strchr(str, 'o');
	char *strchr_result10 = strchr(str, 'W');
	char *strchr_result11 = strchr(str, 'r');
	char *strchr_result12 = strchr(str, ' ');

    test_resultc(ft_strchr1 == strchr_result1, "ft_strchr(\"Hello World!\", 'H')", ft_strchr1, strchr_result1);
	test_resultc(ft_strchr2 == strchr_result2, "ft_strchr(\"Hello World!\", 'd')", ft_strchr2, strchr_result2);
	test_resultc(ft_strchr3 == strchr_result3, "ft_strchr(\"Hello World!\", '!')", ft_strchr3, strchr_result3);
	test_resultc(ft_strchr4 == strchr_result4, "ft_strchr(\"Hello World!\", 'x')", ft_strchr4, strchr_result4);
	test_resultc(ft_strchr5 == strchr_result5, "ft_strchr(\"Hello World!\", '\\0')", ft_strchr5, strchr_result5);
	test_resultc(ft_strchr6 == strchr_result6, "ft_strchr(\"Hello World!\", 'h')", ft_strchr6, strchr_result6);
	test_resultc(ft_strchr7 == strchr_result7, "ft_strchr(\"Hello World!\", 'e')", ft_strchr7, strchr_result7);
	test_resultc(ft_strchr8 == strchr_result8, "ft_strchr(\"Hello World!\", 'l')", ft_strchr8, strchr_result8);
	test_resultc(ft_strchr9 == strchr_result9, "ft_strchr(\"Hello World!\", 'o')", ft_strchr9, strchr_result9);
	test_resultc(ft_strchr10 == strchr_result10, "ft_strchr(\"Hello World!\", 'W')", ft_strchr10, strchr_result10);
	test_resultc(ft_strchr11 == strchr_result11, "ft_strchr(\"Hello World!\", 'r')", ft_strchr11, strchr_result11);
	test_resultc(ft_strchr12 == strchr_result12, "ft_strchr(\"Hello World!\", ' ')", ft_strchr12, strchr_result12);
	color_string("ft_strchr tests completed.");
	printf("\n");

	// ft_strrchr
	color_string("Testing ft_strrchr function:");
	char *ft_strrchr1 = ft_strrchr(str, 'H');
	char *ft_strrchr2 = ft_strrchr(str, 'e');
	char *ft_strrchr3 = ft_strrchr(str, 'l');
	char *ft_strrchr4 = ft_strrchr(str, 'o');
	char *ft_strrchr5 = ft_strrchr(str, 'W');
	char *ft_strrchr6 = ft_strrchr(str, 'r');
	char *ft_strrchr7 = ft_strrchr(str, ' ');
	char *ft_strrchr8 = ft_strrchr(str, 'd');
	char *ft_strrchr9 = ft_strrchr(str, '!');
	char *ft_strrchr10 = ft_strrchr(str, 'x');
	char *ft_strrchr11 = ft_strrchr(str, '\0');
	char *ft_strrchr12 = ft_strrchr(str, 'h');
	char *ft_strrchr13 = ft_strrchr(str, '1');

	char *strrchr_result1 = strrchr(str, 'H');
	char *strrchr_result2 = strrchr(str, 'e');
	char *strrchr_result3 = strrchr(str, 'l');
	char *strrchr_result4 = strrchr(str, 'o');
	char *strrchr_result5 = strrchr(str, 'W');
	char *strrchr_result6 = strrchr(str, 'r');
	char *strrchr_result7 = strrchr(str, ' ');
	char *strrchr_result8 = strrchr(str, 'd');
	char *strrchr_result9 = strrchr(str, '!');
	char *strrchr_result10 = strrchr(str, 'x');
	char *strrchr_result11 = strrchr(str, '\0');
	char *strrchr_result12 = strrchr(str, 'h');
	char *strrchr_result13 = strrchr(str, '1');

	test_resultc(ft_strrchr1 == strrchr_result1, "ft_strrchr(\"Hello World!\", 'H')", ft_strrchr1, strrchr_result1);
	test_resultc(ft_strrchr2 == strrchr_result2, "ft_strrchr(\"Hello World!\", 'e')", ft_strrchr2, strrchr_result2);
	test_resultc(ft_strrchr3 == strrchr_result3, "ft_strrchr(\"Hello World!\", 'l')", ft_strrchr3, strrchr_result3);
	test_resultc(ft_strrchr4 == strrchr_result4, "ft_strrchr(\"Hello World!\", 'o')", ft_strrchr4, strrchr_result4);
	test_resultc(ft_strrchr5 == strrchr_result5, "ft_strrchr(\"Hello World!\", 'W')", ft_strrchr5, strrchr_result5);
	test_resultc(ft_strrchr6 == strrchr_result6, "ft_strrchr(\"Hello World!\", 'r')", ft_strrchr6, strrchr_result6);
	test_resultc(ft_strrchr7 == strrchr_result7, "ft_strrchr(\"Hello World!\", ' ')", ft_strrchr7, strrchr_result7);
	test_resultc(ft_strrchr8 == strrchr_result8, "ft_strrchr(\"Hello World!\", 'd')", ft_strrchr8, strrchr_result8);
	test_resultc(ft_strrchr9 == strrchr_result9, "ft_strrchr(\"Hello World!\", '!')", ft_strrchr9, strrchr_result9);
	test_resultc(ft_strrchr10 == strrchr_result10, "ft_strrchr(\"Hello World!\", 'x')", ft_strrchr10, strrchr_result10);
	test_resultc(ft_strrchr11 == strrchr_result11, "ft_strrchr(\"Hello World!\", '\\0')", ft_strrchr11, strrchr_result11);
	test_resultc(ft_strrchr12 == strrchr_result12, "ft_strrchr(\"Hello World!\", 'h')", ft_strrchr12, strrchr_result12);
	test_resultc(ft_strrchr13 == strrchr_result13, "ft_strrchr(\"Hello World!\", '1')", ft_strrchr13, strrchr_result13);
	color_string("ft_strrchr tests completed.");
	printf("\n");

	// ft_strncmp
	color_string("Testing ft_strncmp function:");
	int ft_strncmp1 = ft_strncmp("Hello", "Hello", 5);
	int ft_strncmp2 = ft_strncmp("Hello", "World", 5);
	int ft_strncmp3 = ft_strncmp("World", "Hello", 5);
	int ft_strncmp4 = ft_strncmp("Hello", "Hello!", 5);
	int ft_strncmp5 = ft_strncmp("Hello", "Hello", 3);
	int ft_strncmp6 = ft_strncmp("Hello", "Hello", 0);
	int ft_strncmp7 = ft_strncmp("Hello", "Hello", 10);
	int ft_strncmp8 = ft_strncmp("Hello", "Hello World", 5);
	int ft_strncmp9 = ft_strncmp("ab\0c", "ab\0d", 4);
	int ft_strncmp10 = ft_strncmp("Hello", "HelLo", 5);

	int strncmp_result1 = strncmp("Hello", "Hello", 5);
	int strncmp_result2 = strncmp("Hello", "World", 5);
	int strncmp_result3 = strncmp("World", "Hello", 5);
	int strncmp_result4 = strncmp("Hello", "Hello!", 5);
	int strncmp_result5 = strncmp("Hello", "Hello", 3);
	int strncmp_result6 = strncmp("Hello", "Hello", 0);
	int strncmp_result7 = strncmp("Hello", "Hello", 10);
	int strncmp_result8 = strncmp("Hello", "Hello World", 5);
	int strncmp_result9 = strncmp("ab\0c", "ab\0d", 4);
	int strncmp_result10 = strncmp("Hello", "HelLo", 5);

	test_result(ft_strncmp1 == strncmp_result1, "ft_strncmp(\"Hello\", \"Hello\", 5)", ft_strncmp1, strncmp_result1);
	test_result(ft_strncmp2 == strncmp_result2, "ft_strncmp(\"Hello\", \"World\", 5)", ft_strncmp2, strncmp_result2);
	test_result(ft_strncmp3 == strncmp_result3, "ft_strncmp(\"World\", \"Hello\", 5)", ft_strncmp3, strncmp_result3);
	test_result(ft_strncmp4 == strncmp_result4, "ft_strncmp(\"Hello\", \"Hello!\", 5)", ft_strncmp4, strncmp_result4);
	test_result(ft_strncmp5 == strncmp_result5, "ft_strncmp(\"Hello\", \"Hello\", 3)", ft_strncmp5, strncmp_result5);
	test_result(ft_strncmp6 == strncmp_result6, "ft_strncmp(\"Hello\", \"Hello\", 0)", ft_strncmp6, strncmp_result6);
	test_result(ft_strncmp7 == strncmp_result7, "ft_strncmp(\"Hello\", \"Hello\", 10", ft_strncmp7, strncmp_result7);
	test_result(ft_strncmp8 == strncmp_result8, "ft_strncmp(\"Hello\", \"Hello World\", 5)", ft_strncmp8, strncmp_result8);
	test_result(ft_strncmp9 == strncmp_result9, "ft_strncmp(\"ab\\0c\", \"ab\\0d\", 4)", ft_strncmp9, strncmp_result9);
	test_result(ft_strncmp10 == strncmp_result10, "ft_strncmp(\"Hello\", \"HelLo\", 5)", ft_strncmp10, strncmp_result10);
	color_string("ft_strncmp tests completed.");
	printf("\n");

	// ft_strnstr
	color_string("Testing ft_strnstr function:");
	char *ft_strnstr1 = ft_strnstr(str, "World", 11);
	char *ft_strnstr2 = ft_strnstr(str, "Hello", 11);
	char *ft_strnstr3 = ft_strnstr(str, "!", 11);
	char *ft_strnstr4 = ft_strnstr(str, "Hello World", 11);
	char *ft_strnstr5 = ft_strnstr(str, "Hello", 5);

	
	char *strnstr_result1 = strnstr(str, "World", 11);
	char *strnstr_result2 = strnstr(str, "Hello", 11);
	char *strnstr_result3 = strnstr(str, "!", 11);
	char *strnstr_result4 = strnstr(str, "Hello World", 11);
	char *strnstr_result5 = strnstr(str, "Hello", 5);

	test_resultc(ft_strnstr1 == strnstr_result1, "ft_strnstr(\"Hello World\", \"World\", 11)", ft_strnstr1, strnstr_result1);
	test_resultc(ft_strnstr2 == strnstr_result2, "ft_strnstr(\"Hello World\", \"Hello\", 11)", ft_strnstr2, strnstr_result2);
	test_resultc(ft_strnstr3 == strnstr_result3, "ft_strnstr(\"Hello World\", \"!\", 11)", ft_strnstr3, strnstr_result3);
	test_resultc(ft_strnstr4 == strnstr_result4, "ft_strnstr(\"Hello World\", \"Hello World\", 11)", ft_strnstr4, strnstr_result4);
	test_resultc(ft_strnstr5 == strnstr_result5, "ft_strnstr(\"Hello World\", \"Hello\", 5)", ft_strnstr5, strnstr_result5);
	color_string("ft_strnstr tests completed.");
	printf("\n");

	// ft_strlcpy
	color_string("Testing ft_strlcpy function:");
	char buffer[10];
	int ft_strlcpy1 = ft_strlcpy(buffer, "Hello", 5);
	int ft_strlcpy2 = ft_strlcpy(buffer, "World", 10);
	int ft_strlcpy3 = ft_strlcpy(buffer, "Hello World", 10);
	int ft_strlcpy4 = ft_strlcpy(buffer, "Hello", 0);
	int ft_strlcpy5 = ft_strlcpy(buffer, "Hello", 1);

	int strlcpy_result1 = strlcpy(buffer, "Hello", 5);
	int strlcpy_result2 = strlcpy(buffer, "World", 10);
	int strlcpy_result3 = strlcpy(buffer, "Hello World", 10);
	int strlcpy_result4 = strlcpy(buffer, "Hello", 0);
	int strlcpy_result5 = strlcpy(buffer, "Hello", 1);

	test_result(ft_strlcpy1 == strlcpy_result1, "ft_strlcpy(buffer, \"Hello\", 5)", ft_strlcpy1, strlcpy_result1);
	test_result(ft_strlcpy2 == strlcpy_result2, "ft_strlcpy(buffer, \"World\", 10)", ft_strlcpy2, strlcpy_result2);
	test_result(ft_strlcpy3 == strlcpy_result3, "ft_strlcpy(buffer, \"Hello World\", 10)", ft_strlcpy3, strlcpy_result3);
	test_result(ft_strlcpy4 == strlcpy_result4, "ft_strlcpy(buffer, \"Hello\", 0)", ft_strlcpy4, strlcpy_result4);
	test_result(ft_strlcpy5 == strlcpy_result5, "ft_strlcpy(buffer, \"Hello\", 1)", ft_strlcpy5, strlcpy_result5);
	color_string("ft_strlcpy tests completed.");
	printf("\n");

	// ft_strlcat
	color_string("Testing ft_strlcat function:");
	char ft_strlcat1[20] = "Hello";
	char ft_strlcat2[20] = "Hello World";
	char ft_strlcat3[20] = "Hello World!";
	char ft_strlcat4[20] = "Hello World!";
	char ft_strlcat5[20] = "Hello World!";
	char ft_strlcat6[20] = "Hello World!";

	char strlcat1[20] = "Hello";
	char strlcat2[20] = "Hello World";
	char strlcat3[20] = "Hello World!";
	char strlcat4[20] = "Hello World!";
	char strlcat5[20] = "Hello World!";
	char strlcat6[20] = "Hello World!";

	size_t result1 = ft_strlcat(ft_strlcat1, " World", 20);
	size_t result2 = ft_strlcat(ft_strlcat2, " World", 20);
	size_t result3 = ft_strlcat(ft_strlcat3, "!", 5);
	size_t result4 = ft_strlcat(ft_strlcat4, "!", 0);
	size_t result5 = ft_strlcat(ft_strlcat5, "!", 1);
	size_t result6 = ft_strlcat(ft_strlcat6, "!", 15);

	size_t strlcat_result1 = strlcat(strlcat1, " World", 20);
	size_t strlcat_result2 = strlcat(strlcat2, " World", 20);
	size_t strlcat_result3 = strlcat(strlcat3, "!", 5);
	size_t strlcat_result4 = strlcat(strlcat4, "!", 0);
	size_t strlcat_result5 = strlcat(strlcat5, "!", 1);
	size_t strlcat_result6 = strlcat(strlcat6, "!", 15);

	test_result(result1 == strlcat_result1, "ft_strlcat(ft_strlcat1, \" World\", 20)", result1, strlcat_result1);
	test_result(result2 == strlcat_result2, "ft_strlcat(ft_strlcat2, \" World\", 20)", result2, strlcat_result2);
	test_result(result3 == strlcat_result3, "ft_strlcat(ft_strlcat3, \"!\", 5)", result3, strlcat_result3);
	test_result(result4 == strlcat_result4, "ft_strlcat(ft_strlcat4, \"!\", 0)", result4, strlcat_result4);
	test_result(result5 == strlcat_result5, "ft_strlcat(ft_strlcat5, \"!\", 1)", result5, strlcat_result5);
	test_result(result6 == strlcat_result6, "ft_strlcat(ft_strlcat6, \"!\", 15)", result6, strlcat_result6);
	color_string("ft_strlcat tests completed.");
	printf("\n");
	// All Basic Character / String Functions tests completed

	// Memory Functions

	color_string("Testing memory functions:");
	// ft_memset
	color_string("ft_memset function tests:");
	char mem1[11];
	char mem2[11];
	char mem3[11];
	
	char result_mem1[11];
	char result_mem2[11];
	char result_mem3[11];

	ft_memset(mem1, 'A', 10);
	ft_memset(mem2, 'B', 5);
	ft_memset(mem3, 0, 10);

	memset(result_mem2, 'B', 5);
	memset(result_mem1, 'A', 10);
	memset(result_mem3, 0, 10);

	mem1[10] = '\0';
	mem2[10] = '\0';
	mem3[10] = '\0';

	result_mem1[10] = '\0';
	result_mem2[10] = '\0';
	result_mem3[10] = '\0';

	test_resultc(mem1[0] == result_mem1[0] && mem1[9] == result_mem1[9], "ft_memset(mem1, 'A', 10)", mem1, result_mem1);
	test_resultc(mem2[0] == result_mem2[0] && mem2[4] == result_mem2[4], "ft_memset(mem2, 'B', 5)", mem2, result_mem2);
	test_resultc(mem3[0] == result_mem3[0] && mem3[9] == result_mem3[9], "ft_memset(mem4, 0, 10)", mem3, result_mem3);
	color_string("ft_memset tests completed.");
	printf("\n");

	// ft_bzero
	color_string("ft_bzero function tests:");
	char bzero1[10];
	char bzero2[10];
	char bzero3[10];
	char bzero4[10];

	char result_bzero1[10];
	char result_bzero2[10];
	char result_bzero3[10];
	char result_bzero4[10];

	for (int i = 0; i < 10; i++) bzero1[i] = 'A';
	for (int i = 0; i < 10; i++) bzero2[i] = 'B';
	for (int i = 0; i < 10; i++) bzero3[i] = 'C';
	for (int i = 0; i < 10; i++) bzero4[i] = 'D';

	for (int i = 0; i < 10; i++) result_bzero1[i] = 'A';
	for (int i = 0; i < 10; i++) result_bzero2[i] = 'B';
	for (int i = 0; i < 10; i++) result_bzero3[i] = 'C';
	for (int i = 0; i < 10; i++) result_bzero4[i] = 'D';

	ft_bzero(bzero1, 10);
	ft_bzero(bzero2, 5);
	ft_bzero(bzero3, 0);
	ft_bzero(bzero4, 10);

	bzero(result_bzero1, 10);
	bzero(result_bzero2, 5);
	bzero(result_bzero3, 0);
	bzero(result_bzero4, 10);

	test_resultc(bzero1[0] == result_bzero1[0] && bzero1[9] == result_bzero1[9], "ft_bzero(bzero1, 10)", bzero1, result_bzero1);
	test_resultc(bzero2[0] == result_bzero2[0] && bzero2[4] == result_bzero2[4] && bzero2[5] == result_bzero2[5], "ft_bzero(bzero2, 5)", bzero2, result_bzero2);
	test_resultc(bzero3[0] == result_bzero3[0] && bzero3[9] == result_bzero3[9], "ft_bzero(bzero3, 0)", bzero3, result_bzero3);
	test_resultc(bzero4[0] == result_bzero4[0] && bzero4[9] == result_bzero4[9], "ft_bzero(bzero4, 10)", bzero4, result_bzero4);
	color_string("ft_bzero tests completed.");
	printf("\n");

	// ft_memcpy
	color_string("ft_memcpy function tests:");
	char src1[] = "Hello";
	char src2[] = "World";
	char src3[] = "12345";
	char src4[] = "Short";

	char dest1[10];
	char dest2[10];
	char dest3[10];
	char dest4[10];

	char dest1_result[10];
	char dest2_result[10];
	char dest3_result[10];
	char dest4_result[10];

	memset(dest1, 'X', 10);
	memset(dest2, 'X', 10);
	memset(dest3, 'X', 10);
	memset(dest4, 'X', 10);
	memset(dest1_result, 'X', 10);
	memset(dest2_result, 'X', 10);
	memset(dest3_result, 'X', 10);
	memset(dest4_result, 'X', 10);

	ft_memcpy(dest1, src1, 5);
	ft_memcpy(dest2, src2, 3);	
	ft_memcpy(dest3, src3, 0);
	ft_memcpy(dest4, src4, 5);
	
	memcpy(dest1_result, src1, 5);
	memcpy(dest2_result, src2, 3);
	memcpy(dest3_result, src3, 0);
	memcpy(dest4_result, src4, 5);

	dest1[5] = '\0';
	dest2[3] = '\0';
	dest3[0] = '\0';
	dest4[5] = '\0';

	dest1_result[5] = '\0';
	dest2_result[3] = '\0';
	dest3_result[0] = '\0';
	dest4_result[5] = '\0';

	test_resultc(dest1[0] == dest1_result[0] && dest1[4] == dest1_result[4], "ft_memcpy(dest1, src1, 5)", dest1, dest1);
	test_resultc(dest2[0] == dest2_result[0] && dest2[2] == dest2_result[2], "ft_memcpy(dest2, src2, 3)", dest2, dest2);
	test_resultc(dest3[0] == dest3_result[0] && dest3[9] == dest3_result[9], "ft_memcpy(dest3, src3, 0)", dest3, dest3);
	test_resultc(dest4[0] == dest4_result[0] && dest4[4] == dest4_result[4], "ft_memcpy(dest5, src5, 5)", dest4, dest4);
	color_string("ft_memcpy tests completed.");
	printf("\n");

	// ft_memmove
	color_string("ft_memmove function tests:");
	char move1[] = "HelloWorld";
	char move2[] = "1234567890";
	char move3[] = "ABCDE";
	char move4[] = "NoOverlap";
	char move5[] = "OverlapTest";

	char move1_result[] = "HelloWorld";
	char move2_result[] = "1234567890";
	char move3_result[] = "ABCDE";
	char move4_result[] = "NoOverlap";
	char move5_result[] = "OverlapTest";

	ft_memmove(move1 + 2, move1, 5); // overlapping 
	ft_memmove(move2 + 5, move2, 5); // overlapping
	ft_memmove(move3, move3 + 2, 3); // overlapping
	ft_memmove(move4, "NewData", 7); // non overlapping
	ft_memmove(move5 + 3, move5, 7); // overlapping

	memmove(move1_result + 2, move1_result, 5);
	memmove(move2_result + 5, move2_result, 5);
	memmove(move3_result, move3_result + 2, 3);
	memmove(move4_result, "NewData", 7);
	memmove(move5_result + 3, move5_result, 7);

	test_resultc(ft_strcmp(move1, "HeHelloorld") == ft_strcmp(move1_result, "HeHelloorld"), "ft_memmove(move1 + 2, move1, 5)", move1, move1_result);
	test_resultc(ft_strcmp(move2, "1234512345") == ft_strcmp(move2_result, "1234512345"), "ft_memmove(move2 + 5, move2, 5)", move2, move2_result);
	test_resultc(ft_strcmp(move3, "CDEDE") == ft_strcmp(move3_result, "CDEDE"), "ft_memmove(move3, move3 + 2, 3) ", move3, move3_result);
	test_resultc(ft_strcmp(move4, "NewData") == ft_strcmp(move4_result, "NewData"), "ft_memmove(move4, \"NewData\", 7)", move4, move4_result);
	test_resultc(ft_strcmp(move5, "OveOverlap") == ft_strcmp(move5_result, "OveOverlap"), "ft_memmove(move5 + 3, move5, 7)", move5, move5_result);
	color_string("ft_memmove tests completed.");
	printf("\n");

	// ft_memchr
	color_string("ft_memchr function tests:");
	char memchr1[] = "Hello World";
	char memchr2[] = "1234567890";
	char memchr3[] = "ABCDE";
	char memchr4[] = "NoMatch";
	char memchr5[] = "Está acontecendo!";

	char *res1 = ft_memchr(memchr1, 'W', 11);
	char *res2 = ft_memchr(memchr2, '5', 10);
	char *res3 = ft_memchr(memchr3, 'C', 5);
	char *res4 = ft_memchr(memchr4, 'x', 7);
	char *res5 = ft_memchr(memchr5, 'e', 17);

	char *res1_result = memchr(memchr1, 'W', 11);
	char *res2_result = memchr(memchr2, '5', 10);
	char *res3_result = memchr(memchr3, 'C', 5);
	char *res4_result = memchr(memchr4, 'x', 7);
	char *res5_result = memchr(memchr5, 'e', 17);

	test_resultc((res1 - memchr1) == (res1_result - memchr1), "ft_memchr(memchr1, 'W', 11)", res1, res1_result);
	test_resultc((res2 - memchr2) == (res2_result - memchr2), "ft_memchr(memchr2, '5', 10)", res2, res2_result);
	test_resultc((res3 - memchr3) == (res3_result - memchr3), "ft_memchr(memchr3, 'C', 5)", res3, res3_result);
	test_resultc(res4 == res4_result, "ft_memchr(memchr4, 'x', 7)", res4, res4_result);
	test_resultc((res5 - memchr5) == (res5_result - memchr5), "ft_memchr(memchr5, 'e', 17)", res5, res5_result);

	color_string("ft_memchr tests completed.");
	printf("\n");

	// ft_memcmp
	color_string("ft_memcmp function tests:");
	int memcmp1 = ft_memcmp("Hello", "Hello", 5);
	int memcmp2 = ft_memcmp("Hello", "World", 5);
	int memcmp3 = ft_memcmp("World", "Hello", 5);
	int memcmp4 = ft_memcmp("Hello", "Hello!", 5);
	int memcmp5 = ft_memcmp("Hello", "Hello", 3);
	int memcmp6 = ft_memcmp("Hello", "Hello", 0);
	int memcmp7 = ft_memcmp("Hello", "Hello", 10);
	int memcmp8 = ft_memcmp("ab\0c", "ab\0d", 4);
	int memcmp9 = ft_memcmp("Hello", "HelLo", 5);

	int memcmp1_result = memcmp("Hello", "Hello", 5);
	int memcmp2_result = memcmp("Hello", "World", 5);
	int memcmp3_result = memcmp("World", "Hello", 5);
	int memcmp4_result = memcmp("Hello", "Hello!", 5);
	int memcmp5_result = memcmp("Hello", "Hello", 3);
	int memcmp6_result = memcmp("Hello", "Hello", 0);
	int memcmp7_result = memcmp("Hello", "Hello", 10);
	int memcmp8_result = memcmp("ab\0c", "ab\0d", 4);
	int memcmp9_result = memcmp("Hello", "HelLo", 5);

	test_result(memcmp1 == memcmp1_result, "ft_memcmp(\"Hello\", \"Hello\", 5)", memcmp1, memcmp1_result);
	test_result(memcmp2 == memcmp2_result, "ft_memcmp(\"Hello\", \"World\", 5)", memcmp2, memcmp2_result);
	test_result(memcmp3 == memcmp3_result, "ft_memcmp(\"World\", \"Hello\", 5)", memcmp3, memcmp3_result);
	test_result(memcmp4 == memcmp4_result, "ft_memcmp(\"Hello\", \"Hello!\", 5)", memcmp4, memcmp4_result);
	test_result(memcmp5 == memcmp5_result, "ft_memcmp(\"Hello\", \"Hello\", 3)", memcmp5, memcmp5_result);
	test_result(memcmp6 == memcmp6_result, "ft_memcmp(\"Hello\", \"Hello\", 0)", memcmp6, memcmp6_result);
	test_result(memcmp7 == memcmp7_result, "ft_memcmp(\"Hello\", \"Hello\", 10)", memcmp7, memcmp7_result);
	test_result(memcmp8 == memcmp8_result, "ft_memcmp(\"ab\\0c\", \"ab\\0d\", 4)", memcmp8, memcmp8_result);
	test_result(memcmp9 == memcmp9_result, "ft_memcmp(\"Hello\", \"HelLo\", 5)", memcmp9, memcmp9_result);
	color_string("ft_memcmp tests completed.");
	printf("\n");

	// All memory Functions tests completed

	return (0);
}
