#include <Arduino.h>

void setup() {

}

void loop() {
    // Entrada de dados do usuário
    String nome;
    Serial.print("Digite o seu nome: ");
    while (!Serial.available());
    nome = Serial.readStringUntil('\n');
    nome.trim(); // Remove os caracteres de quebra de linha }