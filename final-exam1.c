#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    int num;
    int i=0;
    int j;
    int res;
    float x[20];
    int max;
    char ch[100][7];
    float ex;
    int cnt=0;

    struct student
    {
        int number;
        char name[20];
        int kor;
        int math;
        int eng;
    }student;
    
    struct student Student[20]={0};
    while(1)
    {
        printf("\n");

    printf("1.input\n");
    printf("2.print\n");
    printf("3.restore\n");
    printf("4.loading\n");
    printf("5.exit\n");
    printf("put number : ");
    scanf("%d", &num);
    if(num==1)
    {
            while(1)
            {

                printf("\ninput student info\n");
                printf("number : ");
                res=scanf("%d", &Student[i].number);
                if(res==EOF)
                    break;
                printf("name : ");
                res=scanf("%s", Student[i].name);
                if(res==EOF)
                    break;
                printf("kor : ");
                res=scanf("%d", &Student[i].kor);
                if(res==EOF)
                    break;
                printf("math : ");
                res=scanf("%d", &Student[i].math);
                if(res==EOF)
                    break;
                printf("eng : ");
                res=scanf("%d", &Student[i].eng);
                if(res==EOF)
                    break;
                cnt++;
                i++;
            }
    }
    else if(num==2)
    {

                for(i=0;i<cnt;i++)
                {

                    x[i]=(Student[i].kor+Student[i].math+Student[i].eng)/3;
                }
                for(i=0;i<cnt;i++)
                {
                    for(j=1;j<cnt;j++)
                    {
                        if(x[i]<x[j])
                        {
                           ex=x[i];
                           x[i]=x[j];
                           x[j]=ex;
                        }
                    }
                }

                for(i=0;i<cnt;i++)
                {
                    if(x[i]=0)
                        break;
                    printf("%.1lf ", x[i]);
                }
    }
    else if(num==3)
    {
            fp=fopen("student.txt","w");
            fgets(ch[0],sizeof(ch),fp);
            

            fclose(fp);
    }
    else if(num==5)
        break;
    }

    return 0;
}

