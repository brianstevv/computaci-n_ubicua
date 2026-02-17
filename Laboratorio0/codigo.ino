// Función de configuración: se ejecuta una sola vez al iniciar el programa
void setup() {
  pinMode(13, OUTPUT);   // establece el pin digital 13 como salida
}

// Función principal: se repite de manera continua
void loop(){
  digitalWrite(13, HIGH);   // enciende el pin 13 (manda voltaje)
  delay(1000);              // mantiene ese estado durante 1 segundo
  digitalWrite(13, LOW);    // apaga el pin 13 (sin voltaje)
  delay(1000);              // espera 1 segundo antes de repetir
}
