void koin(){
  
  w1 = scale.get_units(); // Pembacaan uang koin oleh modul penguat
  delay(1);
  w2 = scale.get_units(10);
  
  while (abs(w1 - w2) > 10) //kalibrasi berat
  {
     w1 = w2;
     w2 = scale.get_units();
     delay(1);
  }
  if (w1 < 1.5)
  {
//    Serial.println("Tidak Ada Uang Koin!");
    }
  else if (w1 >= 1.50 && w1 <= 1.90) // kondisi uang Rp.
  {
    mp3_play (1);
    delay(3000);
  }
  else if (w1 >= 2.25 && w1 <= 2.60) // kondisi uang Rp.
  {
    mp3_play (2);
    delay(3000); 
  }
  else if (w1 >= 3.00 && w1 <= 3.30) // kondisi uang Rp.
  {
    mp3_play (3);
    delay(3000);
  }
  else if (w1 >= 4.30 && w1 <= 4.70) // kondisi uang Rp.
  {
    mp3_play (4);
    delay(3000); 
  }
  else
  {
    previous = w1;
  }
  delay(1);
  
  }
