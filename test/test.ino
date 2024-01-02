// src: https://github.com/arduino/arduino-cli
// lib: https://github.com/WEEEMAKE/Weeemake_Libraries_for_Arduino
// arduino-cli --config-file .\arduino-cli.yaml core update-index
// arduino-cli --config-file .\arduino-cli.yaml core install arduino:avr
// arduino-cli --config-file .\arduino-cli.yaml compile --library Weeemake --fqbn arduino:avr:uno test & arduino-cli --config-file .\arduino-cli.yaml upload -p COM5 --fqbn arduino:avr:uno test


#include<WeELFMini.h>
WeDCMotor dc_1(M1);
WeDCMotor dc_2(M2);
WeServo servo_A(PORT_A);

void setup(){
    Serial.begin(115200);

    
    Serial.println('hello world!!');

}
void loop(){
    // Serial.println('tick');
    /*
    dc_1.run(-50);
    dc_2.run(-50);
    delay(1000);
    dc_1.stop();
    dc_2.stop();
    servo_A.write(0);
    delay(1000);
    servo_A.write(90);
    delay(1000);
    */
}