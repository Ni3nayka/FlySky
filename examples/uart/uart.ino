/*
  Arduino lib for receiver FlySky:
  https://github.com/Ni3nayka/FlySky

  author: Egor Bakay <egor_bakay@inbox.ru> Ni3nayka
  write:  Feb 2025
  modify: Feb 2025
*/  

// подключаем библиотеку
#include <FlySky_uart.h>

void setup() {
  Serial.begin(9600);    // Инициализируем монитор порта для отладки
  flysky.begin(Serial2); // Инициализируем FlySky приемник, подключенный к Serial2
}

void loop () {
  // Считываем значения различных каналов пульта и выводим в монитор порта
  Serial.print(flysky.readChannel(0));
  Serial.print(" ");
  Serial.print(flysky.readChannel(1));
  Serial.print(" ");
  Serial.print(flysky.readChannel(2));
  Serial.print(" ");
  Serial.print(flysky.readChannel(3));
  Serial.print(" ");
  Serial.print(flysky.readChannel(4));
  Serial.print(" ");
  Serial.print(flysky.readChannel(5));
  Serial.print(" ");
  Serial.print(flysky.readChannel(6));
  Serial.print(" ");
  Serial.print(flysky.readChannel(7));
  Serial.print(" ");
  Serial.print(flysky.readChannel(8));
  Serial.print(" ");
  Serial.print(flysky.readChannel(9));
  Serial.println();
  delay(100); // Ограничиваем скорость вывода
}

