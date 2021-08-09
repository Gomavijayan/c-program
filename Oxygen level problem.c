
//Problem Statement
//Selection of MPCS exams include a fitness test which is conducted on ground. There will be a batch of 3 trainees, appearing for running test in track for 3 rounds.
//You need to record their oxygen level after every round. After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, they all need to be selected.
//Display the most fit trainee (or trainees) and the highest average oxygen level.
//Note:
//⦁    The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
//⦁    If the calculated maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit”
//⦁    Average Oxygen Values should be rounded.




#include <stdio.h>   
int main()  
{
	int trainee[3][3];
	int average[3] = {0};
	int i, j, max=0;
	for(i=0; i<3; i++)
	{
    		for(j=0; j<3; j++)
    		{
        		scanf("%d",&trainee[i][j]);
        		if(trainee[i][j]<1 || trainee[i][j]>100)
        		{
            		trainee[i][j] = 0;
        		}
    		}
	}
	for(i=0; i<3; i++)
	{
    		for(j=0; j<3; j++)
    		{
        			average[i] = average[i] + trainee[j][i];
    		}
    		average[i] = average[i] / 3;
	}
	for(i=0; i<3; i++) { if(average[i]>max)
    		{
        			max = average[i];
    		}
	}
	for(i=0; i<3; i++)
	{
    		if(average[i]==max)
    		{
        			printf("Trainee Number : %d\n",i+1);
    		}
    		if(average[i]<70)
    		{
        			printf("Trainee is Unfit");
    		}
	}
	return 0;
} 
