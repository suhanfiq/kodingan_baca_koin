void kertas(){
  
  //Klasifikasi Uang kertas oleh Sensor Warna
 
  digitalWrite(S2,LOW);//Mengatur filter photodiodes Red
  digitalWrite(S3,LOW);   
  redFrequency = pulseIn(sensorOut, LOW);// Pembacaan frekuensi output
  redValue = map(redFrequency, 72, 149, 255,0);//Remaping nilai Red
    
    if (redValue >255) //faktor kalibrasi
     { 
      redValue = redValue - 43;  
    }
    
  digitalWrite(S2,HIGH);  //Mengatur filter photodiodes Green
  digitalWrite(S3,HIGH);
  greenFrequency = pulseIn(sensorOut, LOW);  //Pembacaan frekuensi output
  greenValue = map(greenFrequency, 124, 214, 255, 0); //Remaping nilai Green
     
    if (greenValue >255) //faktor kalibrasi
    {
      greenValue = greenValue - 175;  
    }
    
  digitalWrite(S2,LOW); // Mengatur filter photodiodes Blue
  digitalWrite(S3,HIGH);
  blueFrequency = pulseIn(sensorOut, LOW); // Pembacaan frekuensi output
  blueValue = map(blueFrequency, 86, 163, 255, 0); // Remaping nilai Blue
  
     if (blueValue >255)//faktor kalibrasi
     {
      blueValue = blueValue - 228;  
     }


  // Klasifikasi
  
  if(redValue <=100 && greenValue <=100 && blueValue <=100) // kondisi tidak ada uang kertas
  {
//    Serial.println("Tidak Ada Uang Kertas!");
    }
    
  else if (redValue >=136 && redValue <=159 && greenValue >=99 && greenValue <=119 && blueValue >=185 && blueValue <=205){
    jumlah = jumlah +1;
      if(jumlah == 5){
        mp3_play(4);
        delay(3000);
        jumlah =0;
       }
  } 
  else if(redValue >=216 && redValue <=236 && greenValue >=210 && greenValue <=230 && blueValue >=219 && blueValue <=222){
  jumlah = jumlah +1;
    if(jumlah == 5){
      mp3_play(4);
      delay(3000);
      jumlah =0;
    }
  }

  else if(redValue >=203 && redValue <=212 && greenValue >=179 && greenValue <=199 && blueValue >=209 && blueValue <=212){
  jumlah = jumlah +1;
      if(jumlah == 5){
      mp3_play(4);
      delay(3000);
      jumlah =0;
    }
  }
  
  else if(redValue >=113 && redValue <=136 && greenValue >=102 && greenValue <=122 && blueValue >=176 && blueValue <=199){
  jumlah = jumlah +1;
      if(jumlah == 5){
      mp3_play(4);
      delay(3000);
      jumlah =0;
    }
  }

  
  else if(redValue >=163 && redValue <=186 && greenValue >=148 && greenValue <=165 && blueValue >=199 && blueValue <=202){
  jumlah = jumlah+1;
      if(jumlah == 5){
      mp3_play(5);
      delay(3000);
      jumlah =0;
    }
  }

  
  else if(redValue >=219 && redValue <=222 && greenValue >=204 && greenValue <=218 && blueValue >=222 && blueValue <=225){
  jumlah = jumlah+1;
     if(jumlah == 5){
      mp3_play(5);
      delay(3000);
      jumlah =0;
    }
  }
  
  else if(redValue >=183 && redValue <=186 && greenValue >=179 && greenValue <=182 && blueValue >=212 && blueValue <=215){
  jumlah = jumlah+1;
     if(jumlah == 5){
      mp3_play(5);
      delay(3000);
      jumlah =0;
    }
  }
  
  else if(redValue >=83 && redValue <=110 && greenValue >=97 && greenValue <=116 && blueValue >=179 && blueValue <=202){
  jumlah = jumlah +1;
    if(jumlah == 5){
      mp3_play(5);
      delay(3000);
      jumlah =0;
    }
  }
  
  else if(redValue >=215 && redValue <=249 && greenValue >=187 && greenValue <=204 && blueValue >=215 && blueValue <=219){
  jumlah = jumlah+1;
    if(jumlah == 5){
      mp3_play(6);
      delay(3000);
      jumlah =0;
    }
  }
  
  else if(redValue >=218 && redValue <=221 && greenValue >=213 && greenValue <=216 && blueValue >=225 && blueValue <=229){
  jumlah = jumlah+1;
    if(jumlah == 5){
      mp3_play(6);
      delay(3000);
      jumlah =0;
    }
  }
  
  else if(redValue >=238 && redValue <=241 && greenValue >=221 && greenValue <=224 && blueValue >=229 && blueValue <=232){
  jumlah = jumlah+1;
    if(jumlah == 5){
      mp3_play(6);
      delay(3000);
      jumlah =0;
    }
  }
  
  else if(redValue >=179 && redValue <=203 && greenValue >=116 && greenValue <=119 && blueValue >=192 && blueValue <=212){
  jumlah = jumlah+1;
   if(jumlah == 5){
  mp3_play(6);
  delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=150 && redValue <=173 && greenValue >=131 && greenValue <=148 && blueValue >=199 && blueValue <=222){
  jumlah = jumlah+1;
   if(jumlah == 5){
  mp3_play(7);
  delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=218 && redValue <=242 && greenValue >=224 && greenValue <=227 && blueValue >=235 && blueValue <=238){
  jumlah = jumlah+1;
   if(jumlah == 5){
  mp3_play(7);
  delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=189 && redValue <=209 && greenValue >=179 && greenValue <=199 && blueValue >=219 && blueValue <=222){
  jumlah = jumlah+1;
   if(jumlah == 5){
  mp3_play(7);
  delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=83 && redValue <=103 && greenValue >=119 && greenValue <=122 && blueValue >=195 && blueValue <=219){
  jumlah = jumlah+1;
  if(jumlah == 5){
    mp3_play(7);
  delay(3000);
    jumlah =0;
  }
  }
  
  
  else if(redValue >=143 && redValue <=166 && greenValue >=176 && greenValue <=193 && blueValue >=205 && blueValue <=209){
  jumlah = jumlah+1;
    if(jumlah == 5){
  mp3_play(8);
  delay(3000);
    jumlah =0;
  }
  }

  
  else if(redValue >=209 && redValue <=212 && greenValue >=221 && greenValue <=224 && blueValue >=225 && blueValue <=248){
  jumlah = jumlah +1;
   if(jumlah == 5){
  mp3_play(8);
  delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=169 && redValue <=173 && greenValue >=196 && greenValue <=213 && blueValue >=212 && blueValue <=215){
  jumlah = jumlah+1;
   if(jumlah == 5){
  mp3_play(8);
  delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=87 && redValue <=110 && greenValue >=99 && greenValue <=119 && blueValue >=172 && blueValue <=179){
  jumlah = jumlah+1;
   if(jumlah == 5){
  mp3_play(8);
  delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=163 && redValue <=166 && greenValue >=182 && greenValue <=201 && blueValue >=209 && blueValue <=212){
  jumlah = jumlah+1;
   if(jumlah == 5){
  mp3_play(9);
  delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=226 && redValue <=246 && greenValue >=238 && greenValue <=241 && blueValue >=235 && blueValue <=238){
  jumlah = jumlah+1;
    if(jumlah == 5){
  mp3_play(9);
  delay(3000);
    jumlah =0;
  }
  }

  
  else if(redValue >=176 && redValue <=179 && greenValue >=204 && greenValue <=207 && blueValue >=222 && blueValue <=225){
  jumlah = jumlah+1;
   if(jumlah == 5){
  mp3_play(9);
  delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=80 && redValue <=103 && greenValue >=122 && greenValue <=139 && blueValue >=189 && blueValue <=209){
  jumlah = jumlah+1;
   if(jumlah == 5){
  mp3_play(9);
  delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=226 && redValue <=229 && greenValue >=167 && greenValue <=170 && blueValue >=215 && blueValue <=219){
  jumlah = jumlah+1;
    if(jumlah == 5){
  mp3_play(10);
  delay(3000);
    jumlah =0;
  }
  }

  
  else if(redValue >=235 && redValue <=255 && greenValue >=210 && greenValue <=230 && blueValue >=232 && blueValue <=255){
  jumlah = jumlah+1;
    if(jumlah == 5){
   delay(3000);
    jumlah =0;
  }
  }
  
  else if(redValue >=215 && redValue <=218 && greenValue >=193 && greenValue <=213 && blueValue >=225 && blueValue <=248){
  jumlah = jumlah+1;
   if(jumlah == 5){
    mp3_play(10);
    delay(3000);
    jumlah =0;
  }
  }
 
  
  else if(redValue >=173 && redValue <=196 && greenValue >=102 && greenValue <=105 && blueValue >=189 && blueValue <=209){
  jumlah = jumlah+1;
    if(jumlah == 5){
      mp3_play(10);
      delay(3000);
      jumlah =0;
    } 
  }

  }
