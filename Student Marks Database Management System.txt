#include<stdio.h>
int main(){

char name[100][100];
char fname[100][100];
char id[100][100];
int subject[100][100];
float totalmarks;
int input;
int inputs;
float position=0;
char subjectname[100][100];

printf("Enter Student Number:");
scanf("%d",&inputs);
printf("Enter Subject Numbers:");
scanf("%d",&input);
for(int oo=0;oo<input;oo++){
    printf("Enter (%d) Subject Name:",oo+1);
    scanf("%s",subjectname[oo]);
}
for(int k=0;k<inputs;k++){
    printf("Enter %d Student Name:",k+1);
    scanf("%s",name[k]);
    printf("Enter %d student F/Name:",k+1);
    scanf("%s",fname[k]);
    printf("Enter %s Id:",name[k]);
    scanf("%s",id[k]);
for(int q=0;q<input;q++){
    printf("Enter %s Marks for %s : ",subjectname[q],name[k]);
    scanf("%d",&subject[k][q]);
    printf("|========================|\n");
}}
printf("|******************************************|\n");
for(int e=0;e<inputs;e++){
int other=input;
printf("|== |-%d-| Student Details ==|\n",e+1);
printf("Name Is |-%s-|\n",name[e]);
printf("F/Name Is |-%s-|\n",fname[e]);
printf("ID Is [|%s|]\n",id[e]);
totalmarks=0;
position=0;
for(int ee=0;ee<input;ee++){
printf("[|%s|] Mark is ||%d||\n",subjectname[ee],subject[e][ee]);
totalmarks +=subject[e][ee];
if(subject[e][ee]>=55){
    printf("||%s|| is ||Pass|| in %s\n",name[e],subjectname[ee]);
}
else if(subject[e][ee]<55){
    printf("||%s|| is ||fail|| in ||%s||\n",name[e],subjectname[ee]);

}
else{
    printf("FAIL IN EXAM\n");
}
}
printf("Total Mark is = [%.2f]\n",totalmarks);
printf("Percentage Of Mark Is = [%.2f]\n",totalmarks/input);
position=totalmarks/input;
printf("|-------------------------------------------------");
if(position>=90){
        if(subject[e][e]>=55){
            printf("|%s| GPA is %.2fl = |A|",name[e],position*4/100);
            printf("|-------------------------------------------------|\n");
        }
        else{
        printf("%s is |Fail| In %s",name[e],subjectname[e]);
        printf("|-------------------------------------------------|\n");
        }
    }
else if(position>=80){
        if(subject[e][e]>=55){
            printf("|%s| GPA is %.2fl = |B|",name[e],position*4/100);
            printf("|-------------------------------------------------|\n");
        }
        else{
        printf("%s is |Fail| In %s",name[e],subjectname[e]);
        printf("|-------------------------------------------------|\n");
        }
    }
else if(position>=70){
        if(subject[e][e]>=55){
            printf("|%s| GPA is %.2fl = |C|",name[e],position*4/100);
            printf("|-------------------------------------------------|\n");
        }
        else{
    printf("%s is |Fail| In %s",name[e],subjectname[e]);
    printf("|-------------------------------------------------|\n");
        }
    }
else if(position>=55){
    if(subject[e][e]>=55){
     printf("|%s| GPA is %.2fl = |D|",name[e],position*4/100);
     printf("|-------------------------------------------------|\n");
        }
    else{
   printf("%s is |Fail| In %s",name[e],subjectname[e]);
   printf("|-------------------------------------------------|\n");
        }
}
else if(position<55){
    printf("|%s| is Fail in Exam",name[e]);
    printf("|-------------------------------------------------|\n");
}
else{
    printf("something wrong");
    printf("|-------------------------------------------------|\n");
}
}
return 0;
}

