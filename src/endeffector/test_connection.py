from pymodbus.client import ModbusSerialClient as Client


effector = Client(port = '/dev/ttyUSB0', baudrate=115200, bytesize=8 , parity='N', stopbits=1 )

if effector.connect()
#initializing the arm is done by writing to the 0x0100 register with either 0x01 or 0xA5
    effector.write_register(address=0x0100, value= 0x01, device_id=1)

else:
    print("There was a connection error. Make sure permissions are proper.")

effector.close()