
#include <NeoPixelBus.h>

const uint16_t PixelCount = 151; // stala z liczba ilosci diod w tasmie
const uint8_t PixelPin = 2;  // wyjscie, gdzie podlaczamy pin transmisji danych

// element biblioteki dla predkosci 800 Kbps
NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);

void setup()
{
    // inicjalizacja biblioteki
    strip.Begin(); 
    strip.Show();
}


void loop()
{

   // ustaw kolorowy
  delay(1000); //poczekaj 
  for(int i=151 ;i>-7; i--)
  {      //tasma randomowa
      strip.SetPixelColor(i+6, RgbColor(random(5, 255), random(5, 255), random(5, 255)));

//przod ktory przewodzi zmieniajac kolor diod
      strip.SetPixelColor(i+5, RgbColor(4, 249, 247));
      strip.SetPixelColor(i+4, RgbColor(4, 249, 247));
      strip.SetPixelColor(i+3,RgbColor(4, 249, 247));
      strip.SetPixelColor(i+2, RgbColor(4, 249, 247));
      strip.SetPixelColor(i+1, RgbColor(4, 249, 247));
 
      strip.Show();     delay(60); //show - pokaz
  }
     // ustaw niebieski
  delay(900);
  for(int i=0 ;i<600; i++)
  {     //tasma rozowa
      strip.SetPixelColor(i-6, RgbColor(0, 98, 238)); //niebieski

      //iskierki
      
      strip.SetPixelColor(i-174, RgbColor(173, 0, 134));  //rozowy
      strip.SetPixelColor(i-175, RgbColor(173, 0, 134));
      strip.SetPixelColor(i-176, RgbColor(0, 98, 238));  
      
      strip.SetPixelColor(i-204, RgbColor(173, 0, 134)); 
      strip.SetPixelColor(i-205, RgbColor(173, 0, 134));
      strip.SetPixelColor(i-206, RgbColor(0, 98, 238));

      strip.SetPixelColor(i-234, RgbColor(173, 0, 134));
      strip.SetPixelColor(i-235, RgbColor(173, 0, 134));
      strip.SetPixelColor(i-236, RgbColor(0, 98, 238));  
       

      strip.SetPixelColor(i-384, RgbColor(173, 0, 134));
      strip.SetPixelColor(i-385, RgbColor(173, 0, 134));
      strip.SetPixelColor(i-386, RgbColor(0, 98, 238));

      strip.SetPixelColor(i-414, RgbColor(173, 0, 134));
      strip.SetPixelColor(i-415, RgbColor(173, 0, 134));
      strip.SetPixelColor(i-416, RgbColor(0, 98, 238));

      strip.SetPixelColor(i-444, RgbColor(173, 0, 134));
      strip.SetPixelColor(i-445, RgbColor(173, 0, 134));
      strip.SetPixelColor(i-446, RgbColor(0, 98, 238));
      
      strip.Show();     delay(21);
  }


  // gaszenie diod
  delay(500);
  int zm = 0;
   for(int i=151 ;i>75; i--)
  {     
      strip.SetPixelColor(i, RgbColor(0, 0, 0)); //przod
      strip.SetPixelColor(zm, RgbColor(0, 0, 0)); //tyl
      zm++;
      strip.Show();     delay(30);
  }

  // animacja
  
  delay(800);
  for(int j=0; j<5; j++){
      int zm1=0;
      int zm2=1;
     for(int i=0 ;i<150; i++)
    {     
        strip.SetPixelColor(zm1, RgbColor(173, 0, 134)); //rozowy 
        strip.SetPixelColor(zm2, RgbColor(0, 0, 0)); //zgaszony 
        zm1=zm1+2;
        zm2=zm2+2;
    }
    strip.Show(); delay(500); 
       
       zm1=0;
       zm2=1;
 
          for(int i=0 ;i<150; i++)
    {     
        strip.SetPixelColor(zm2, RgbColor(173, 0, 134)); //rozowy
        strip.SetPixelColor(zm1, RgbColor(0, 0, 0)); //zgaszony 
        zm1=zm1+2;
        zm2=zm2+2; 
    }
       strip.Show(); delay(500);
  }



   // gaszenie diod
  
   for(int i=151 ;i; i--)
  {     
  strip.SetPixelColor(i, RgbColor(0, 0, 0)); //zgas
 
  }

  strip.Show(); 




}
