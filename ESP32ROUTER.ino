#include "SparkFunLSM6DSO.h"
#include "Wire.h"

LSM6DSO myIMU; 

void setup() {
  Serial.begin(115200);
  delay(500); 

  Wire.begin();
  if (myIMU.begin()) {
    Serial.println("Ready.");
  } else {
    Serial.println("Could not connect to IMU.");
    Serial.println("Freezing");
    while (1); // Detiene el programa si no se puede conectar al IMU
  }

  // Configuración inicial del sensor, si es necesario
  if (myIMU.initialize(SOFT_INT_SETTINGS)) {
    Serial.println("Loaded Settings.");
  }
}

void loop() {
  int data = myIMU.listenDataReady();

  // Verifica si los datos del giroscopio están listos
  if (data == ALL_DATA_READY || data == GYRO_DATA_READY) {
    Serial.print("Gyroscope:\n");
    Serial.print(" X = ");
    Serial.println(myIMU.readFloatGyroX(), 3);
    Serial.print(" Y = ");
    Serial.println(myIMU.readFloatGyroY(), 3);
    Serial.print(" Z = ");
    Serial.println(myIMU.readFloatGyroZ(), 3);
  }

  delay(5000); // Espera 1 segundo antes de la siguiente lectura
}

