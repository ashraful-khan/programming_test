#include <iostream>
#include <string>
#include <cstring>
//using namespace std;

char* PUBLISHER_SEND_MESSAGE_ON = "HIGH";
char* PUBLISHER_SEND_MESSAGE_OFF = "LOW";

char* mqttData_L;
char* mqttData_R;
char* a;

void setSensorData(int iData_L, int iData_R){
    mqttData_L = iData_L;
    mqttData_R = iData_R;
    sprintf(a, "%c %c %c", mqttData_L, '2', mqttData_R);
}

char* getSensorData(){
    return a;
}

int main(){
    int sensorStatus_L = 1;
    int sensorStatus_R = 0;
    a = (char*)malloc(100);
    setSensorData((sensorStatus_L ?  PUBLISHER_SEND_MESSAGE_ON 
                               : PUBLISHER_SEND_MESSAGE_OFF),    
    (sensorStatus_R ? PUBLISHER_SEND_MESSAGE_ON 
                               : PUBLISHER_SEND_MESSAGE_OFF));
    while (1)
    {
        a = getSensorData();
    }
    
    
    //cout<<a<<endl;
   // cout<<"a : "<< a <<endl;
}