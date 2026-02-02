int max3(int say1,int say2,int say3) {
    int en_buyuk = (say1>say2)?say1:say2;
    en_buyuk = (en_buyuk>say3)?en_buyuk:say3;
    return en_buyuk;
} 
int main(void) {
  int say1;
  int say2;
  int say3;
  printf("uc tamsayi girin: \n");
  scanf("%d %d %d",&say1,&say2,&say3);
  printf("%d, %d ve %d sayilarinin en buyugu %d \n",say1,say2,say3,max3(say1,say2,say3));

double max3(double say1,double say2, double say3) {
    double en_buyuk = (say1>say2)?say1:say2;
    en_buyuk = (en_buyuk>say3)?en_buyuk:say3;
    return en_buyuk;
}
int main(void) {
    double say1,say2,say3;

    printf("uc gercek sayi girin: \n");
    scanf("%lf %lf %lf",&say1,&say2,&say3); 
    printf("%f, %f ve %f sayilarinin en buyugu %f \n",say1,say2,say3,max3(say1,say2,say3));



