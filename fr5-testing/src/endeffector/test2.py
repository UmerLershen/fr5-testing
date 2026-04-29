from pymodbus.client import ModbusSerialClient

client = ModbusSerialClient(
    port="/dev/ttyUSB0",
    baudrate=115200,        # default baud@35
    bytesize=8,
    parity='N',             # no parity@35
    stopbits=1,
    timeout=2,             # default slave address@34
)

if client.connect():
    # write 1 to register 0x0200 to initialise
    resp = client.write_register(address=0x0100, value=0x01, device_id=1)
    if resp.isError():
        print("Init write error:", resp)
    else:
        print("Init command sent")
    client.close()
else:
    print("Failed to open /dev/ttyUSB0")
