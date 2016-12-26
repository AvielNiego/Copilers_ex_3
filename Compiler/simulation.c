#include <stdio.h>

#include <stdlib.h>

#include <memory.h>

int *Temp_0;

int *Temp_1;

int *sp;

int *fp;

int *ra;

int *rv;

int *a0;

int *a1;

int *a2;

int *a3;

int *v0;

int *v1;

int *t0;

int *t1;

int *t2;

int *t3;

int *t4;

int *t5;

int *t6;

int *t7;

void main()

{

	int b1=1;
	int b2=2;
	int b3=3;
	int b4=4;
	int b5=5;
	int b6=6;
	sp = &b3;
	fp = &b2;
	__asm
	{
		call _here0
		_here0: pop eax
		add eax,14
		mov ra,eax
	}

	goto Label_0_main;

Label_0_main:

	fp = (int *) ((int) sp + 40);

	exit(0);

Label_1_AllocateRecord:

Label_2_AllocateArray:

Label_3_PrintInt:

	a0 = (int *) *(sp + 0);

	printf("%d ",(int) a0);

	a0 = (int *) 32;

	printf("%c ",(char) a0);

	__asm
	{
		jmp ra
	}

Label_4_Access_Violation:

	a0 = (int *) 65;

	printf("%c ",(char) a0);

	a0 = (int *) 99;

	printf("%c ",(char) a0);

	a0 = (int *) 99;

	printf("%c ",(char) a0);

	a0 = (int *) 101;

	printf("%c ",(char) a0);

	a0 = (int *) 115;

	printf("%c ",(char) a0);

	a0 = (int *) 115;

	printf("%c ",(char) a0);

	a0 = (int *) 32;

	printf("%c ",(char) a0);

	a0 = (int *) 86;

	printf("%c ",(char) a0);

	a0 = (int *) 105;

	printf("%c ",(char) a0);

	a0 = (int *) 111;

	printf("%c ",(char) a0);

	a0 = (int *) 108;

	printf("%c ",(char) a0);

	a0 = (int *) 97;

	printf("%c ",(char) a0);

	a0 = (int *) 116;

	printf("%c ",(char) a0);

	a0 = (int *) 105;

	printf("%c ",(char) a0);

	a0 = (int *) 111;

	printf("%c ",(char) a0);

	a0 = (int *) 110;

	printf("%c ",(char) a0);

	exit(0);

}

