#include <stdio.h>

#include <stdlib.h>

#include <memory.h>

int *Temp_0;

int *Temp_1;

int *Temp_2;

int *Temp_3;

int *Temp_4;

int *Temp_5;

int *Temp_6;

int *Temp_7;

int *Temp_8;

int *Temp_9;

int *Temp_10;

int *Temp_11;

int *Temp_12;

int *Temp_13;

int *Temp_14;

int *Temp_15;

int *Temp_16;

int *Temp_17;

int *Temp_18;

int *Temp_19;

int *Temp_20;

int *Temp_21;

int *Temp_22;

int *Temp_23;

int *Temp_24;

int *Temp_25;

int *Temp_26;

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

	Temp_3 = (int *) -4;

	Temp_2 =(int *) (((int) fp) + ((int) Temp_3));

	*(Temp_2) = (int) (v0+(0));

	Temp_6 = (int *) -8;

	Temp_5 =(int *) (((int) fp) + ((int) Temp_6));

	*(Temp_5) = (int) (v0+(0));

	Temp_8 = (int *) -12;

	Temp_7 =(int *) (((int) fp) + ((int) Temp_8));

	*(Temp_7) = (int) (v0+(0));

	Temp_12 = (int *) -4;

	Temp_11 =(int *) (((int) fp) + ((int) Temp_12));

	Temp_10 = (int *) *(Temp_11 + 0);

	Temp_13 = (int *) 0;

	Temp_9 =(int *) (((int) Temp_10) + ((int) Temp_13));

	Temp_14 = (int *) 99;

	*(Temp_9) = (int) (Temp_14+(0));

	Temp_18 = (int *) -8;

	Temp_17 =(int *) (((int) fp) + ((int) Temp_18));

	Temp_16 = (int *) *(Temp_17 + 0);

	Temp_19 = (int *) 4;

	Temp_15 =(int *) (((int) Temp_16) + ((int) Temp_19));

	Temp_20 = (int *) 74;

	*(Temp_15) = (int) (Temp_20+(0));

	Temp_24 = (int *) -12;

	Temp_23 =(int *) (((int) fp) + ((int) Temp_24));

	Temp_22 = (int *) *(Temp_23 + 0);

	Temp_25 = (int *) 0;

	Temp_21 =(int *) (((int) Temp_22) + ((int) Temp_25));

	Temp_26 = (int *) 49;

	*(Temp_21) = (int) (Temp_26+(0));

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

