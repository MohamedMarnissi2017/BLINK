/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                          BLINK                              **
**                                                             **
**  NOM: MOHAMED EL MARNISSI                  DATA: 23/01/2017 **
****************************************************************/
//************************ INCLUDE ****************************** 



//*********************** VARIABLES *****************************



//************************** SETUP ******************************

void setup() {                 // configura el final de salida
 pinMode(LED_BUILTIN, OUTPUT);//Inicia pin digital LED_BUILTIN com a sortida

}

//*************************** LOOP ******************************

void loop() {                 // inicia el bucle del programa
  digitalWrite(LED_BUILTIN, HIGH);   // Encen LED
  delay(1000);                       // Espera 1 segon
  digitalWrite(LED_BUILTIN, LOW);    // Apaga el LED
  delay(1000);                       // Espera 1 segon

}

//************************** FUNCIONS ***************************
