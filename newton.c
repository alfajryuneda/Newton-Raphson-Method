//En başta gerekli olan kütüphanelerimiz ekliyoruz.
#include<conio.h>
#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)-2*pow(x,2)-5//Fonksiyonumuzu tanımlıyoruz.
#define g(x) 3*x*x - 4*x//Fonksiyonumuzun türevini tanımlıyoruz
#define e 0.01//Hata sınırını tanımlıyoruz.
int main()
{
float x0=2,x1,f0,g0,kok;//Değişkenlerimizi float cinsinde tanımlıyoruz
int i=1;
printf("Iterasyon(#)\t\tXn\t\tXn+1\t\tHATA\n");//Tablomuzu oluşturuyoruz.
b:f0=f(x0);//Newton rapshon metodunun gerekli adımlarını gerçekleştiriyoruz.
g0=g(x0);
x1=x0-(f0/g0);
float hatadeger = fabs(x1-x0);//Hata değerimizi bir değişkenin içine mutlak değerli olarak atıyoruz.

printf("\t%d\t\t%f\t%f\t%f\n",i,x0,x1,hatadeger);//Tablomuzun değerlerini yazdırıyoruz.
i++;
if(fabs((x1-x0)/x1)<=e)//Daha sonra durma koşulunu kontrol edip durması gereken iterasyonda durmasını sağlıyoruz.
{
kok=x1;//Kök değerimizi belirliyoruz.
printf("\n");
printf("Sart saglandigindan kok X4 degeri: %f",kok);//Kök değerimizi yazdırıyoruz.
goto c;
}
else
{
x0=x1;//Xn'in içine değişen değeri atıyoruz
goto b;
}
c:
getch();
}//M.MEHMET
