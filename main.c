#include <stdio.h>
void BubbleSort(int Scores[],int Size);


int main() {
    const int SIZE=5;
    int Scores[SIZE]={0,60,70,100,90};


    BubbleSort(Scores,SIZE);

   return 0;
}

void BubbleSort(int Scores[],int Size){
    int i,j,k,tmp;
    printf("scores=");
    for(k=0;k<Size;k++){
        printf("%d ",Scores[k]);
    }

    for(i=0;i<(Size-1);i++){
        for(j=(Size-1);j>i;j--){
            if(Scores[j-1]<Scores[j]){
                tmp=Scores[j];
                Scores[j]=Scores[j-1];
                Scores[j-1]=tmp;
            }
        }
    }
    printf("\nresults=");
    for(k=0;k<Size;k++){
        printf("%d ",Scores[k]);
    }
}