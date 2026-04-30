from pymodbus.client import ModbusSerialClient as Client
from . import endeffector


effector = endeffector()


#initializing the arm is done by writing to the 0x0100 register with either 0x01 or 0xA5
