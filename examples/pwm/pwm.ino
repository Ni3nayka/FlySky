/*
  Arduino lib for receiver FlySky:
  https://github.com/Ni3nayka/FlySky

  author: Egor Bakay <egor_bakay@inbox.ru> Ni3nayka
  write:  Feb 2025
  modify: Feb 2025
*/  

// подключаем библиотеку
#include <FlySky_pwm.h>

const int FLYSKY_CHANNEL_1 = A0;
const int FLYSKY_CHANNEL_2 = 12;
const int FLYSKY_CHANNEL_3 = 13;

void setup() {
  Serial.begin(9600);    // Инициализируем монитор порта для отладки
  pinMode(FLYSKY_CHANNEL_1,INPUT);
  pinMode(FLYSKY_CHANNEL_2,INPUT);
  pinMode(FLYSKY_CHANNEL_3,INPUT);
}

void loop () {
  // Считываем значения различных каналов пульта и выводим в монитор порта
  Serial.print(flysky.readChannel(FLYSKY_CHANNEL_1));
  Serial.print(" ");
  Serial.print(flysky.readChannel(FLYSKY_CHANNEL_2));
  Serial.print(" ");
  Serial.print(flysky.readChannel(FLYSKY_CHANNEL_3));
  Serial.println();
  delay(100); // Ограничиваем скорость вывода
}

