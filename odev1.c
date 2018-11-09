  #include <stdio.h>
  int main(){
  
  int a,b,c,sonuc;
  printf("Yapmak istediğiniz işlemi seçin. Toplamak için 1, çıkarmak için 2, çarpmak için 3, bölmek için 4, mod almak için 5 yazın.");
  scanf("%d",&a);
  
  printf("2 adet sayı girin.");
  scanf("%d %d",&b,&c);
  
  if      (a==1) sonuc=b+c;
  else if (a==2) sonuc=b-c;
  else if (a==3) sonuc=b*c;
  else if (a==4) sonuc=b/c;
  else if (a==5) sonuc=b%c;
  
  printf("Sonuç %d",&sonuc);
    
    return 0;
}
