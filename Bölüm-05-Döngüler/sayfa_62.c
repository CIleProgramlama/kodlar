# include <stdio.h>
int main()
{
  int i;
  int carpim=1;
  int sayi;
  for(i=1; i<=5; ++i)
  {
    printf("%d. sayıyı giriniz: ", i);
    scanf("%d",&sayi);
    carpim=carpim*sayi;
    printf("Çarpım=%d, çarpan=%d, sayaç=%d\n",carpim,sayi,i);
    if(carpim >200)
    goto tanimliEtiket;
  }
  printf("tanimliEtiket tetiklendiği için burası çalışmadı...\n");
  tanimliEtiket:
  printf("Çarpım = %d", carpim);
  return 0;
}