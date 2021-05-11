#include <stdio.h>
#include "../101_basic_tests.h"
#include "../../framework/libunit.h"

int	misc_launcher(void)
{
	t_unit_test *testlist;
	puts("MISCELLANEOUS: ");
	testlist = NULL;
	load_test(&testlist, "Sleep Test", &sleep_test);
	load_test(&testlist, "Alarm Test", &alarm_test);
	return(launch_tests(&testlist));
}
