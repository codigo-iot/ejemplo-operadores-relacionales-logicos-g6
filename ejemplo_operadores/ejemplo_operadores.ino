
/*
 * Simulador de refrigerasion de servidores
 * Por: Hugo Vargas
 * Fecha: 18 de abril 2022 (32°C)
 * 
 * Este programa ejemplifica el uso de operadores relacionales y operadores
 * logicos:
 * 
 * Condiciones Iniciales
 * Sensor de temperatura y humedad
 * Boton1: Manual. Activa la refrigeración al ser presionado
 * Boton2: Alta demanda
 * Boton3: Sobre carga de funcionamiento
 * 
 * Led1: Refrigeracion manual
 * Led2: Refrigeración automática
 * 
 * -Que se encienda la refrigeracion manual cada que se presione el boton de manual
 * -La refrigeracion manual tiene prioridad a la refrigeracion automática.
 * -Si la termperatura es alta (mayor a 28, por ejemplo), se activa la refrigeracion automática
 * -Si tengo alta demanda o sobre carga, se activa la refrigeración automática
 * -Si tengo alta demanda o sobrecarga de funcionamiento y ademas temperatura alta, se activan ambas refrigeraciones
 * 
 * Conexiones propuestas
 * Botones 14, 15, 13
 * Leds 4, 2
 * DHT11 12
 * 
 */

// Bibliotecas

// Constantes

// Variables

// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código

}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:


}// Fin de void loop

// Funcioes del usuario
