#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string PUBLISHER_SEND_MESSAGE_ON = "HIGH";
string PUBLISHER_SEND_MESSAGE_OFF = "LOW";

string mqttData_L;
string mqttData_R;
string a;
string formattedSensorData;

void setSensorData(string iData_L, string iData_R){
    mqttData_L = iData_L;
    mqttData_R = iData_R;
    //sprintf(a, "%c %c %c", mqttData_L, ':', mqttData_R);
    formattedSensorData = mqttData_L + ":" + mqttData_R;
}

string getSensorData(){
    return formattedSensorData;
}

int main(){
    bool sensorStatus_L = 1;
    bool sensorStatus_R = 0;
    setSensorData((sensorStatus_L ?  PUBLISHER_SEND_MESSAGE_ON 
                               : PUBLISHER_SEND_MESSAGE_OFF),    
    (sensorStatus_R ? PUBLISHER_SEND_MESSAGE_ON 
                               : PUBLISHER_SEND_MESSAGE_OFF));
    
    a = getSensorData();
    printf("%s", a);    

   // cout<<"a : "<< a <<endl;
}