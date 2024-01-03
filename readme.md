# Arduino-cli + Weeemake 
This is a side by side install of arduino-cli and third-party library Weeemake

### How to Build Side-By-Side
Use `arduino-cli core install` with a local config file like below. 
```
arduino-cli --config-file .\arduino-cli.yaml core update-index
arduino-cli --config-file .\arduino-cli.yaml core install arduino:avr
```
After above commands, you can distribute the entire zip directory and run commands like below to build any arduino files. Or you can simply run setup.bat in the folder, which will compress everything to arduino_local.zip. 
```
setup.bat
```
### How to build
Make sure you deployed all files in the git repo after running above build commands in a folder with without special characters. 

To build test/test.ino, one need to run following command, replace port name and file name. 
```
arduino-cli --config-file .\arduino-cli.yaml compile --library Weeemake --fqbn arduino:avr:uno test & arduino-cli --config-file .\arduino-cli.yaml upload -p COM5 --fqbn arduino:avr:uno test
```
Pay attention to `--library Weeemake` command, which refers to the Weeemake library folder. The library is actually just the zip git clone from [WEEEMAKE/Weeemake_Libraries_for_Arduino](https://github.com/WEEEMAKE/Weeemake_Libraries_for_Arduino).

Following is a sample file 

```c
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
```

### References:
src: https://github.com/arduino/arduino-cli
lib: https://github.com/WEEEMAKE/Weeemake_Libraries_for_Arduino
