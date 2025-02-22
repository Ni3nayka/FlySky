/*
   code write for project:
   https://github.com/Ni3nayka/football_alpha/

   author: Egor Bakay <egor_bakay@inbox.ru> Ni3nayka
   write:  May 2024
   modify: Feb 2025

   links:
   https://dronebotworkshop.com/radio-control-arduino-car/
*/

#pragma once

class MyFlySky {
  public:
    int readChannel(int channelInput, int minLimit=-100, int maxLimit=100, int defaultValue=0, int minValue=7){
      int ch = pulseIn(channelInput, HIGH, 30000);
      if (ch < 100) return defaultValue;
      ch = map(ch, 1000, 2000, minLimit, maxLimit);
      if (abs(ch)<minValue) return 0;
      return ch;
    }
  private:
};

MyFlySky flysky;


    