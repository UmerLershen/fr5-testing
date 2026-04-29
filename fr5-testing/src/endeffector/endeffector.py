from pymodbus.client import ModbusSerialClient as Client
import time


class endeffector:

    def __init__(self, init_state =0) -> None:
        self.modClient = Client(port = '/dev/ttyUSB0', baudrate=115200, bytesize=8 , parity='N', stopbits=1)
        try:
            self.modClient.connect()
        except:
            print("There is an issue with connecting to the effector")

        if init_state==0:
            self.modClient.write_register(address=0x0100 , value=0x01, device_id=1)
        else: 
            self.modClient.write_register(address=0x0100, value=0xA5, device_id=1)

    def set_position(self, num):
        if (num<0 or num>1000):
            print("Error: Please set position between 0-1000%")
        else: 
            self.modClient.write_register(address=0x0103,value=num,device_id=1)

    def set_force(self , num):
        if (num <20 or num > 100):
            print("Error: Please set force between 20-100%")
        else:
            self.modClient.write_register(address= 0x0101, value=num , device_id=1)

    def initialize_standard(self):
        self.modClient.write_register(address=0x0100 , value=0x01, device_id=1)

    def initialize_full(self):
        self.modClient.write_register(address=0x0100, value=0xA5, device_id=1)

    def get_init_state(self):
        response = self.modClient.read_holding_registers(address=0x0200, count=1 , device_id=1)
        state = response.registers[0]
        match state:
            case 0:
                print(f"{state} means the robot is not initialized.")
                
            case 1:
                print(f"{state} means the robot is initialized.")
                



    def get_gripper_state(self):
        response = self.modClient.read_holding_registers(address=0x0201, count=1, device_id=1)
        state = response.registers[0]  
        match state:
            case 0:
                print(f"{state}: In motion")
                
            case 1:
                print(f"{state}: Reach position")
                
            case 2:
                print(f"{state}: Object caught")
        
            case 3:
                print(f"{state}: Object dropped")
            


    def get_position(self):
        response = self.modClient.read_holding_registers(address=0x0202, count=1 , device_id=1)
        state = response.registers[0]
        print(f"Current Position: {state}")
        



