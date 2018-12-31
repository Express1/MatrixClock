////////////////////////////////////////////////////////////////////////////////////////

//display temp from DS18B20
void display_temp() {

#if XDS3231==0
  // measure temperature
  sensors.requestTemperaturesByAddress(tempDeviceAddress);  // sends command for one device to perform a temperature by address
  float TempC = sensors.getTempC(tempDeviceAddress);
#endif

#if XDS3231==1
  float TempC = rtc.getTemp();
  TempC=TempC+TempCorrection;
  //float TempC = Clock.getTemperature();
  Serial.print(F("T="));
  Serial.println(TempC, 2);
#endif

  dtostrf(TempC, 4, 1, tempi);       //4 is mininum width, 1 is precision; float value is copied to buffer
  tempi[4] = '#'; // degree-symbol
  tempi[5] = 'C';

  //set intensity for all 4 devices to 0 (for fading up later)
  //for (byte address = 0; address < 4; address++) {
  //  lc.setIntensity(address, 0);
  //}

  int date_delay = 70;  // delay between displaying next character

  // print temp
  byte offset = 6;
  puttinychar(0 + offset, 1, tempi[0]); //print the 1st temp number (10 degrees)
  delay(date_delay);
  puttinychar(4 + offset, 1, tempi[1]); //print the 2nd temp number (1 degrees)
  delay(date_delay);
  puttinychar(8 + offset, 1, tempi[2]); //print the 3rd temp number (.)
  delay(date_delay);
  puttinychar(10 + offset, 1, tempi[3]); //print the 4th temp number (first decimal place)
  delay(date_delay);
  puttinychar(14 + offset, 1, tempi[4]); //print degree-symbol
  delay(date_delay);
  puttinychar(18 + offset, 1, tempi[5]); //print the 6th temp number C(elsius)

  //fade_high();
  delay(2000);
  //setBright();  // set brightness depending of value read from LDR

  cls();

#if XDS3231==0
  // repeat for F
  sensors.requestTemperaturesByAddress(tempDeviceAddress);  // sends command for one device to perform a temperature by address
  float TempF = sensors.getTempF(tempDeviceAddress);
#endif

#if XDS3231==1
  float TempF = TempC * 1.8 + 32;
#endif

  dtostrf(TempF, 4, 0, tempi);       //4 is mininum width, 1 is precision; float value is copied to buffer, no decimal poit for F

  // if (debug) {
  //   Serial.println(F(""));
  //   Serial.print(F("TempF: "));
  //   Serial.println(sensors.getTempF(tempDeviceAddress)); // the first temp-sensor on I2C
  //   Serial.print(tempi[0]);
  //   Serial.print(tempi[1]);
  //   Serial.print(tempi[2]);
  //   Serial.print(tempi[3]);
  //   Serial.println("");
  // }

  tempi[4] = '#'; // degree-symbol
  tempi[5] = 'F';

  //set intensity for all 4 devices to 0 (for fading up later)
  //for (byte address = 0; address < 4; address++) {
  //  lc.setIntensity(address, 0);
  //}

  //int date_delay = 70;  // delay between displaying next character

  // print temp
  //byte offset = 6;
  puttinychar(0 + offset, 1, tempi[1]); //print the 1st temp number (100)
  delay(date_delay);
  puttinychar(4 + offset, 1, tempi[2]); //print the 2nd temp number (10 degrees)
  delay(date_delay);
  puttinychar(8 + offset, 1, tempi[3]); //print the 3rd temp number (1)
  //delay(date_delay);
  //puttinychar(10 + offset, 1, tempi[3]); //print the 4th temp number (-)
  //delay(date_delay);
  puttinychar(12 + offset, 1, tempi[4]); //print degree-symbol
  delay(date_delay);
  puttinychar(16 + offset, 1, tempi[5]); //print the 6th temp number F

  //fade_high();
  delay(2000);
  //setBright();  // set brightness depending of value read from LDR

}

