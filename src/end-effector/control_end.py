from pymodbus.client import ModbusSerialClient as Client
import time

effector = Client(port = '/dev/ttyUSB0', baudrate=115200, bytesize=8 , parity='N', stopbits=1)


def set_position(num):
    if (num<0 or num>1000):
        print("Error: Please set position between 0-1000%")
    else: 
        effector.write_register(address=0x0103,value=num,device_id=1)

def set_force(num):
    if (num <20 or num > 100):
        print("Error: Please set force between 20-100%")
    else:
        effector.write_register(address= 0x0101, value=num , device_id=1)

def initialize_standard():
    effector.write_register(address=0x0100 , value=0x01, device_id=1)

def initialize_full():
    effector.write_register(address=0x0100, value=0xA5, device_id=1)

def get_init_state():
    response = effector.read_holding_registers(address=0x0200, count=1 , device_id=1)
    state = response.registers[0]
    match state:
        case 0:
            print(f"{state} means the robot is not initialized.")
            
        case 1:
            print(f"{state} means the robot is initialized.")
            



def get_gripper_state():
    response = effector.read_holding_registers(address=0x0201, count=1, device_id=1)
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
        


def get_position():
    response = effector.read_holding_registers(address=0x0202, count=1 , device_id=1)
    state = response.registers[0]
    print(f"Current Position: {state}")
    


if effector.connect():
    initialize_standard()
    time.sleep(2)
    set_position(500)
    time.sleep(1)
    get_position()
    time.sleep(4)
    set_position(300)
    time.sleep(1)
    get_position()
    time.sleep(4)
    set_position(0)

else:
    print("Effector is not connected. Make sure permissions are correct.")
