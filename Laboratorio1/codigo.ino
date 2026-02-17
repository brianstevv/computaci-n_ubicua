// Función que se ejecuta solo una vez al inicio
void setup() {

  pinMode(2, INPUT);   // define el pin 2 como entrada (para el pulsador o sensor)
  pinMode(3, OUTPUT);  // define el pin 3 como salida (para el LED u otro actuador)

}

// Función principal, se repite de manera infinita
void loop(){
  
  // Si el pin 2 detecta un valor alto (el botón está presionado)
  if (digitalRead(2) == HIGH){  
    digitalWrite(3, HIGH);    // enciende el LED conectado al pin 3
  }
  else {
    digitalWrite(3, LOW);     // de lo contrario, apaga el LED
  }
}
