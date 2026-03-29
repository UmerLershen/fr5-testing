from pymodbus.client import ModbusSerialClient as Client

effector = Client(method = 'rtu' , port = '/dev/ttyUSB0', baudrate=115200, bytesize=8 , parity="N", stopbits=1)




