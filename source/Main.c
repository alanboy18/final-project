#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float array_data[5][4] = { 0.6, 0.6, 0.6, 0.6,
						 0.4, 0.3, 1.0, 1.0, 
						 0.3, 1.0, 0.5, 0.5, 
						 1.0, 0.3, 0.4, 0.4, 
						 0, 0.2, 0, 0.2 };

char *array_char[10] = { "���ū�(���}���H",
				   "�K����(���}����",
				   "�]��(���}�����樭",
				   "����(���}���Ѹ���",
				   "�S�ƫ�(���}���i�b��",
				   "��O���Ŧ�D�n�S��)",
				   "�����i�R�����m)",
				   "30�~�צ����j�]�ɤh)",
				   "�Ҳզ�)" ,
				   "�]��P�������H��\n                                                                                       �����A�����m�C�U)"};

char *array_Array_line[8] = { "xxxxxxxxxx", "x--------x", "xxx----xxx", "----xx----", "---x--x---",
	"--x----x--", "-x------x-" , "----------"};
int x, array_number, choice, counter = -1;

float number,hp1 = 30, hp2 = 30, *ad1, *ap1, *pd1, *md1, *ad2, *ap2, *pd2, *md2, ahp1, ahp2;

void battle(float *, float *, float *, float *, float *, float *, float *, float *);

typedef struct _a
{
	char *array[10];
	float pa;
	float pd;
	float ma;
	float md;
}a;

int main(void)
{
	a poke[5];
	int i,j,k,k_c;

	for (i = 0; i < 5; i++)
	{
		poke[i].pa = array_data[i][0];
		poke[i].ma = array_data[i][1];
		poke[i].pd = array_data[i][2];
		poke[i].md = array_data[i][3];
	}
	
	poke[0].array[0] = array_Array_line[0];
	for (i = 1; i < 9; i++)poke[0].array[i] = array_Array_line[1];
	poke[0].array[9] = array_Array_line[0];

	for (i = 0; i < 3 ; i++)poke[1].array[i] = array_Array_line[0];
	for (i = 3; i < 7 ; i++)poke[1].array[i] = array_Array_line[2];
	for (i = 7; i < 10; i++)poke[1].array[i] = array_Array_line[0];

	for (i = 0; i < 2 ; i++)poke[2].array[i] = array_Array_line[7];
	for (i = 2; i < 6 ; i++)poke[2].array[i] = array_Array_line[i + 1];
	poke[2].array[6] = array_Array_line[0];
	for (i = 7; i < 10; i++)poke[2].array[i] = array_Array_line[7];

	for (i = 0; i < 2 ; i++)poke[3].array[i] = array_Array_line[7];
	poke[3].array[2] = array_Array_line[0];
	for (i = 3; i < 7 ; i++)poke[3].array[i] = array_Array_line[9 - i];
	for (i = 7; i < 10; i++)poke[3].array[i] = array_Array_line[7];

	poke[4].array[0] = array_Array_line[1];
	poke[4].array[9] = array_Array_line[1];
	for (i = 1; i < 5 ; i++)poke[4].array[i] = array_Array_line[7 - i];
	for (i = 5; i < 9 ; i++)poke[4].array[i] = array_Array_line[i - 2];

	//for (i = 0; i < 5; i++)
//	{
	for (j = 0; j < 10; j++)printf("%s            %s            %s            %s            %s\n", poke[0].array[j], poke[1].array[j], poke[2].array[j], poke[3].array[j], poke[4].array[j]);
		//printf("\n");
	printf("%s       %s       %s   %s  %s\n", array_char[0], array_char[1], array_char[2], array_char[3], array_char[4]);
	printf("%s   %s     %s   %s              %s\n", array_char[5], array_char[6], array_char[7], array_char[8], array_char[9]);
		//for (j = 0; i < 1; j++)printf("%s", array_Array_line[0]);
		//printf("���\��%.1f �]�\��%.1f ������%.1f �]����%.1f\n\n", poke[i].pa, poke[i].pd, poke[i].ma, poke[i].md);
//	}
	
	/*for (j = 0; j < 10; j++)printf("%s\n", poke[1].array[j]);
	printf("\n");
	for (j = 0; j < 10; j++)printf("%s\n", poke[2].array[j]);
	printf("\n");
	for (j = 0; j < 10; j++)printf("%s\n", poke[3].array[j]);
	printf("\n");
	for (j = 0; j < 10; j++)printf("%s\n", poke[4].array[j]);
	printf("\n");*/
	
	//scanf("%d", &x);
	printf("�п�ܩҭn�}��:");
	scanf("%d", &choice);

	printf("					     �԰��}�l\n");
	for (i = 0; i < 500000000; i++);
	printf("						 3\n\n");
	for (i = 0; i < 500000000; i++);
	printf("						 2\n\n");
	for (i = 0; i < 500000000; i++);
	printf("						 1\n\n");
	for (i = 0; i < 500000000; i++);

	srand(time(NULL));
	array_number = rand() % 5;

	battle(&poke[array_number].pa, &poke[array_number].ma, &poke[array_number].pd, &poke[array_number].md,
		&poke[choice].pa, &poke[choice].ma, &poke[choice].pd, &poke[choice].md);

	for (j = 0; j < 10; j++)printf("%s                          %s\n",
		poke[array_number].array[j], poke[choice].array[j]);

	printf("����:%.1f                            ����:%.1f\n", poke[array_number].pa, poke[choice].pa);
	printf("�]��:%.1f                            �]��:%.1f\n", poke[array_number].ma, poke[choice].ma);
	printf("����:%.1f                            ����:%.1f\n", poke[array_number].pd, poke[choice].pd);
	printf("�]��:%.1f                            �]��:%.1f\n", poke[array_number].md, poke[choice].md);
	printf("��q:%.0f                             ��q:%.0f\n", hp1, hp2);
	printf("                                    ��ܧޯ�\n�ޯ�:(1)����(2)�]��\n");
	//scanf("%d", &k);
	while (hp1 > 0 && hp2 > 0)
	{
		counter++;
		counter = counter % 2;

		switch (counter)
		{
		case 0:
			number = (81 + (rand() % 20)) / 100.0;
			if (hp1>0)scanf("%d", &k);
			switch (k)
			{
			case 1:
				if (number*poke[choice].pa > poke[array_number].pd)
				{
					hp1 -= (number*poke[choice].pa - poke[array_number].pd);
					ahp1 = (number*poke[choice].pa - poke[array_number].pd);
					printf("\n���a��q���y��%.1f�ˮ`�A�q���Ѿl��q:%.1f\n", ahp1, hp1);
				}
				else if (number*poke[choice].pa <= poke[array_number].pd) { printf("�����L�Ĥ�\n"); }

				break;
			case 2:
				if (number*poke[choice].ma > poke[array_number].md)
				{
					hp1 = hp1 - (number*poke[choice].ma - poke[array_number].md);
					ahp1 = (number*poke[choice].ma - poke[array_number].md);
					printf("\n���a��q���y��%.1f�ˮ`�A�q���Ѿl��q:%.1f\n",number, ahp1, hp1);
				}
				else if (number*poke[choice].ma <= poke[array_number].md) { printf("�����L�Ĥ�\n"); }
				break;
			}


			/*if (hp1 > 0)
			{
				printf("\n���a��q���y��%.1f�ˮ`�A�q���Ѿl��q:%.1f\n", ahp1, hp1);
				
				//scanf("%d", &k);
			}*/
			if (hp1 <= 0) printf("�q����q�k�s\n							���a���\n");
			
			break;

		case 1:
			number = (81 + (rand() % 20)) / 100.0;

			k_c = 1 + (rand() % 2);
			switch (k_c)
			{
			case 1:
				if (number*poke[array_number].pa > poke[choice].pd)
				{
					hp2 -= (number*poke[array_number].pa - poke[choice].pd);
					ahp2 = (number*poke[array_number].pa - poke[choice].pd);
					printf("\n�q���缾�a�y��%.1f�ˮ`�A���a�Ѿl��q:%.1f\n", ahp2, hp2);
				}
				else if (number*poke[array_number].pa <= poke[choice].pd) { printf("�����L�Ĥ�\n"); }

				break;
			case 2:
				if (number*poke[array_number].ma > poke[choice].md)
				{
					hp2 -= (number*poke[array_number].ma - poke[choice].md);
					ahp2 = (number*poke[array_number].ma - poke[choice].md);
					printf("\n�q���缾�a�y��%.1f�ˮ`�A���a�Ѿl��q:%.1f\n", ahp2, hp2);
				}
				else if (number*poke[array_number].ma <= poke[choice].md) { printf("�����L�Ĥ�\n"); }
				
				break;
			}

		/*	if (hp2 > 0)
			{
				printf("\n�q���缾�a�y��%.1f�ˮ`�A���a�Ѿl��q:%.1f\n", ahp2, hp2);				
			}*/
			if (hp2 <= 0) printf("���a��q�k�s\n							�q�����\n"); 

			break;
		}	
	}
	//system("CLS");

	system("pause");
	return 0;
}

void battle(float *ad1, float *ap1, float *pd1, float *md1,  float *ad2, float *ap2, float *pd2, float *md2)
{
	int i, j;

	//printf("%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f\n", *ad1, *ap1, *pd1, *md1, *ad2, *ap2, *pd2, *md2);

	number = 1 + (rand() % 10);
	*ad1 = *ad1*number;
	number = 1 + (rand() % 10);
	*ap1 = *ap1*number;
	number = 1 + (rand() % 10);
	*pd1 = *pd1*number;

	number = 1 + (rand() % 10);
	*md1 = *md1*number;

	number = 1 + (rand() % 10);
	*ad2 = *ad2*number;
	number = 1 + (rand() % 10);
	*ap2 = *ap2*number;
	number = 1 + (rand() % 10);
	*pd2 = *pd2*number;
	number = 1 + (rand() % 10);
	*md2 = *md2*number;

	//printf("%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f\n", *ad1, *ap1, *pd1, *md1, *ad2, *ap2, *pd2, *md2);
	system("CLS");
}
