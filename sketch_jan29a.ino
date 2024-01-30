byte but_az=3;
byte but_art=4;
byte but_kont=5;

byte rastgele_sayi;
int sayac=0;
void setup() {
   Serial.begin(9600);
   pinMode(but_az,INPUT);
   pinMode(but_art,INPUT);
   pinMode(but_kont,INPUT);
   

}
void loop() {
 
 rastgele_sayi=random(6);
 if(digitalRead(but_az)==1)
 {
  while(digitalRead(but_az)==1);
  sayac--;
  delay(100);
 }
 else if(digitalRead(but_art)==1)
 {
  while(digitalRead(but_art)==1);
  sayac++;
  delay(100);
 }
 else if(digitalRead(but_kont)==1)
 {
  Serial.print("Pcde tahmin edilen Sayı: ");
  Serial.println(rastgele_sayi);
  Serial.print("Senin tahmin ettiğin Sayı: ");
  Serial.println(sayac);
   if(sayac==rastgele_sayi)
   {
     Serial.println("Sayı tahmininiz Dogru \n !!");
     sayac=0;
   }
   else
   {
     Serial.println("Sayı tahmınız yanlıs\n");
      sayac=0;
   }
   
   delay(100);

 }
}
