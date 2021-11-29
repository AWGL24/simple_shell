#include <stdio.h>
int main(void)
{
	char userinput[MAXCOM];
	char *parsedArgs[MAXLIST];
	int execFlag = 0;

	while (1)
	{
		print_line();

		if (takeInput(userinput))
			continue;

		execFlag = processString(userinput, parsedArgs, parsedArgsPiped);

		if (execFlag == 1)
			execArgs(parsedArgs);

		if (execFlag == 2)
			execArgsPiped(parsedArgs, parsedArgsPiped);
	}
	return (0);
}
