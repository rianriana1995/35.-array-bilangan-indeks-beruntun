#include<stdio.h>
int main(int argc,char const *argv[]){
int array_A[5]={10,8,6,4,2};
int i,cari,flag=0;

for (i=0; i<5; i++){
    printf("data ke-%d = $d\n",i,array_A[i]);
}
printf("masukan data yang ingin di cari :\n");
scanf("%i",&cari);
for (i=0;i<5;i++){
    if(array_A[i]==cari){
        flag=1;
        break;
    }
}
if(flag==1){
    printf("data yang anda cari di temukan pada indeks ke-%i\n",i );
  }  else {
    printf("data tidak di temukan\n");
}
return 0;

}
