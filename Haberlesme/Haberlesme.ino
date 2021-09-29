int dogruLED = 13;
int yanlisLED = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(yanlisLED, OUTPUT);
  pinMode(dogruLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) //seri haberlesme var mi
  {
     if(Serial.available() > 0) //seri haberlesmeden veri geldi mi
     {
        String deger;
        int sayi;
  
        deger = Serial.readString();
        sayi = deger.toInt();
  
        if(sayi == 1923)
        {
          digitalWrite(dogruLED, HIGH);
          Serial.println("Giris Yapabilir");
          delay(2000);
          digitalWrite(dogruLED, LOW);
        }
        else 
        {
          digitalWrite(yanlisLED, HIGH);
          Serial.println("Giris Yapamaz");
          delay(2000);
          digitalWrite(yanlisLED, LOW);
        }
      
     }
  }
}
