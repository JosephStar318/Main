 #include <stdio.h>
  int main(void){
  
  int a,b,c,sonuc;
  printf("Yapmak istediginiz islemi secin. Toplamak icin 1, cikarmak icin 2, carpmak icin 3, bolmek icin 4, mod almak icin 5 yazin.\n");
  scanf("%d",&a);
  
  printf("2 adet sayi girin.\n");
  scanf("%d %d",&b,&c);
  printf("Bu sayilari girdiniz %d %d\n",b,c);
  if      (a==1) sonuc=(b+c);
  else if (a==2) sonuc=(b-c);
  else if (a==3) sonuc=(b*c);
  else if (a==4) sonuc=(b/c);
  else if (a==5) sonuc=(b%c);

  
  printf("Sonuç %d\n",sonuc);
    
    getch();
    main();
}
