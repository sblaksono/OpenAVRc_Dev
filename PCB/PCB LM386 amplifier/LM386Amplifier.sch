EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:conn_01x02
LIBS:LM386Amplifier-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "LM386 Amplifier with two input"
Date "2017-11-30"
Rev "v1.0"
Comp "©OpenAVRc Team"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L LM386 U1
U 1 1 5A1D4047
P 6800 4150
F 0 "U1" H 6950 4350 60  0000 C CNN
F 1 "LM386" H 6950 4450 60  0000 C CNN
F 2 "Housings_DIP:DIP-8_W7.62mm_LongPads" H 6800 4150 60  0001 C CNN
F 3 "" H 6800 4150 60  0001 C CNN
	1    6800 4150
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR01
U 1 1 5A1D4187
P 4550 4800
F 0 "#PWR01" H 4550 4890 20  0001 C CNN
F 1 "+5V" H 4550 4890 30  0000 C CNN
F 2 "" H 4550 4800 60  0001 C CNN
F 3 "" H 4550 4800 60  0001 C CNN
	1    4550 4800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 5A1D419D
P 4950 3800
F 0 "#PWR02" H 4950 3800 30  0001 C CNN
F 1 "GND" H 4950 3730 30  0000 C CNN
F 2 "" H 4950 3800 60  0001 C CNN
F 3 "" H 4950 3800 60  0001 C CNN
	1    4950 3800
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 5A1D41DC
P 5700 3750
F 0 "R1" V 5780 3750 40  0000 C CNN
F 1 "1,5K" V 5707 3751 40  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 5630 3750 30  0001 C CNN
F 3 "" H 5700 3750 30  0000 C CNN
	1    5700 3750
	1    0    0    -1  
$EndComp
$Comp
L C C4
U 1 1 5A1D4247
P 6400 3350
F 0 "C4" H 6400 3450 40  0000 L CNN
F 1 "100nF" H 6406 3265 40  0000 L CNN
F 2 "Capacitors_THT:C_Rect_L7.0mm_W2.0mm_P5.00mm" H 6438 3200 30  0001 C CNN
F 3 "" H 6400 3350 60  0000 C CNN
	1    6400 3350
	1    0    0    -1  
$EndComp
$Comp
L POT RV1
U 1 1 5A1D5D05
P 4950 3450
F 0 "RV1" H 4950 3350 50  0000 C CNN
F 1 "10K" H 4950 3450 50  0000 C CNN
F 2 "Potentiometer_Trimmer_Bourns_3296W.kicad_mod" H 4950 3450 60  0001 C CNN
F 3 "" H 4950 3450 60  0000 C CNN
	1    4950 3450
	0    1    1    0   
$EndComp
$Comp
L JACK_2P J1
U 1 1 5A1D61ED
P 8750 3200
F 0 "J1" H 8400 3000 60  0000 C CNN
F 1 "JACK_2P" H 8600 3450 60  0000 C CNN
F 2 "Pin_Header_Straight_1x03_Pitch2.54mm" H 8750 3200 60  0001 C CNN
F 3 "" H 8750 3200 60  0000 C CNN
	1    8750 3200
	-1   0    0    1   
$EndComp
$Comp
L CONN_01X02 P2
U 1 1 5A1D6151
P 4100 3800
F 0 "P2" H 4100 3950 50  0000 C CNN
F 1 "CONN_01X02" V 4200 3800 50  0001 C CNN
F 2 "Pin_Header_Straight_1x02_Pitch2.54mm" H 4100 3800 50  0001 C CNN
F 3 "" H 4100 3800 50  0000 C CNN
	1    4100 3800
	-1   0    0    1   
$EndComp
$Comp
L CONN_01X02 P1
U 1 1 5A1D6248
P 4150 5000
F 0 "P1" H 4150 5150 50  0000 C CNN
F 1 "CONN_01X02" V 4250 5000 50  0001 C CNN
F 2 "Pin_Header_Straight_1x02_Pitch2.54mm" H 4150 5000 50  0001 C CNN
F 3 "" H 4150 5000 50  0000 C CNN
	1    4150 5000
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR03
U 1 1 5A1D67AA
P 4950 5000
F 0 "#PWR03" H 4950 5000 30  0001 C CNN
F 1 "GND" H 4950 4930 30  0000 C CNN
F 2 "" H 4950 5000 60  0001 C CNN
F 3 "" H 4950 5000 60  0001 C CNN
	1    4950 5000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR04
U 1 1 5A1D6B61
P 4550 5200
F 0 "#PWR04" H 4550 5200 30  0001 C CNN
F 1 "GND" H 4550 5130 30  0000 C CNN
F 2 "" H 4550 5200 60  0001 C CNN
F 3 "" H 4550 5200 60  0001 C CNN
	1    4550 5200
	1    0    0    -1  
$EndComp
$Comp
L POT RV2
U 1 1 5A1D6F0C
P 4950 4650
F 0 "RV2" H 4950 4550 50  0000 C CNN
F 1 "10K" H 4950 4650 50  0000 C CNN
F 2 "Potentiometer_Trimmer_Bourns_3296W.kicad_mod" H 4950 4650 60  0001 C CNN
F 3 "" H 4950 4650 60  0000 C CNN
	1    4950 4650
	0    1    1    0   
$EndComp
$Comp
L CP1 C1
U 1 1 5A1D71E1
P 5450 3450
F 0 "C1" H 5500 3550 50  0000 L CNN
F 1 "10µF" H 5500 3350 50  0000 L CNN
F 2 "Capacitors_THT:CP_Radial_D6.3mm_P2.50mm" H 5450 3450 60  0001 C CNN
F 3 "" H 5450 3450 60  0000 C CNN
	1    5450 3450
	0    -1   -1   0   
$EndComp
$Comp
L CP1 C2
U 1 1 5A1D7364
P 5450 4650
F 0 "C2" H 5500 4750 50  0000 L CNN
F 1 "10µF" H 5500 4550 50  0000 L CNN
F 2 "Capacitors_THT:CP_Radial_D6.3mm_P2.50mm" H 5450 4650 60  0001 C CNN
F 3 "" H 5450 4650 60  0000 C CNN
	1    5450 4650
	0    -1   -1   0   
$EndComp
$Comp
L R R2
U 1 1 5A1D75D5
P 5700 4350
F 0 "R2" V 5780 4350 40  0000 C CNN
F 1 "1,5K" V 5707 4351 40  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 5630 4350 30  0001 C CNN
F 3 "" H 5700 4350 30  0000 C CNN
	1    5700 4350
	-1   0    0    1   
$EndComp
$Comp
L CP1 C5
U 1 1 5A1D7930
P 6800 4900
F 0 "C5" H 6600 5000 50  0000 L CNN
F 1 "10µF" H 6600 4750 50  0000 L CNN
F 2 "Capacitors_THT:CP_Radial_Tantal_D6.0mm_P2.50mm" H 6800 4900 60  0001 C CNN
F 3 "" H 6800 4900 60  0000 C CNN
	1    6800 4900
	1    0    0    -1  
$EndComp
$Comp
L R R3
U 1 1 5A1D7A9D
P 7050 4950
F 0 "R3" V 7130 4950 40  0000 C CNN
F 1 "1,2K" V 7057 4951 40  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 6980 4950 30  0001 C CNN
F 3 "" H 7050 4950 30  0000 C CNN
	1    7050 4950
	-1   0    0    1   
$EndComp
Wire Wire Line
	4950 3700 4950 3800
Wire Wire Line
	4950 4900 4950 5000
Wire Wire Line
	4350 3750 4300 3750
Wire Wire Line
	4350 3150 4350 3750
Wire Wire Line
	4900 3150 4950 3150
Wire Wire Line
	4950 3150 4950 3200
Wire Wire Line
	4300 3850 4350 3850
Wire Wire Line
	4350 3850 4350 4350
Wire Wire Line
	4900 4350 4950 4350
Wire Wire Line
	4950 4350 4950 4400
Wire Wire Line
	4350 4950 4550 4950
Wire Wire Line
	4550 4950 4550 4800
Wire Wire Line
	4350 5050 4550 5050
Wire Wire Line
	4550 5050 4550 5200
Wire Wire Line
	5250 3450 5100 3450
Wire Wire Line
	5250 4650 5100 4650
Wire Wire Line
	5650 3450 5700 3450
Wire Wire Line
	5650 4650 5700 4650
Wire Wire Line
	5700 4050 6300 4050
Connection ~ 5700 4050
Wire Wire Line
	6700 4550 6700 4600
Wire Wire Line
	6700 4600 6250 4600
Wire Wire Line
	6250 4250 6250 4800
Wire Wire Line
	6250 4250 6300 4250
Wire Wire Line
	7050 5200 7050 5250
Wire Wire Line
	7050 5250 6800 5250
Wire Wire Line
	6800 5250 6800 5100
Wire Wire Line
	6800 4700 6800 4550
Wire Wire Line
	6900 4550 6900 4650
Wire Wire Line
	6900 4650 7050 4650
Wire Wire Line
	7050 4650 7050 4700
Wire Wire Line
	6700 3050 6700 3750
$Comp
L +5V #PWR05
U 1 1 5A1D7F04
P 6700 3050
F 0 "#PWR05" H 6700 3140 20  0001 C CNN
F 1 "+5V" H 6700 3140 30  0000 C CNN
F 2 "" H 6700 3050 60  0001 C CNN
F 3 "" H 6700 3050 60  0001 C CNN
	1    6700 3050
	1    0    0    -1  
$EndComp
$Comp
L CP1 C3
U 1 1 5A1D8089
P 6150 3350
F 0 "C3" H 5950 3450 50  0000 L CNN
F 1 "10µF" H 5950 3200 50  0000 L CNN
F 2 "Capacitors_THT:CP_Radial_D6.3mm_P2.50mm" H 6150 3350 60  0001 C CNN
F 3 "" H 6150 3350 60  0000 C CNN
	1    6150 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	6150 3150 6150 3100
Wire Wire Line
	6150 3100 6700 3100
Connection ~ 6700 3100
Wire Wire Line
	6400 3150 6400 3100
Connection ~ 6400 3100
Wire Wire Line
	6400 3550 6400 3600
Wire Wire Line
	6150 3550 6150 3600
$Comp
L GND #PWR06
U 1 1 5A1D83AF
P 6150 3600
F 0 "#PWR06" H 6150 3600 30  0001 C CNN
F 1 "GND" H 6150 3530 30  0000 C CNN
F 2 "" H 6150 3600 60  0001 C CNN
F 3 "" H 6150 3600 60  0001 C CNN
	1    6150 3600
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR07
U 1 1 5A1D8432
P 6400 3600
F 0 "#PWR07" H 6400 3600 30  0001 C CNN
F 1 "GND" H 6400 3530 30  0000 C CNN
F 2 "" H 6400 3600 60  0001 C CNN
F 3 "" H 6400 3600 60  0001 C CNN
	1    6400 3600
	1    0    0    -1  
$EndComp
Connection ~ 6250 4600
$Comp
L GND #PWR08
U 1 1 5A1D85F5
P 6250 4800
F 0 "#PWR08" H 6250 4800 30  0001 C CNN
F 1 "GND" H 6250 4730 30  0000 C CNN
F 2 "" H 6250 4800 60  0001 C CNN
F 3 "" H 6250 4800 60  0001 C CNN
	1    6250 4800
	1    0    0    -1  
$EndComp
$Comp
L C C6
U 1 1 5A1D86C9
P 7400 4400
F 0 "C6" H 7400 4500 40  0000 L CNN
F 1 "100nF" H 7406 4315 40  0000 L CNN
F 2 "Capacitors_THT:C_Rect_L7.0mm_W2.0mm_P5.00mm" H 7438 4250 30  0001 C CNN
F 3 "" H 7400 4400 60  0000 C CNN
	1    7400 4400
	1    0    0    -1  
$EndComp
$Comp
L R R4
U 1 1 5A1D8753
P 7400 4900
F 0 "R4" V 7480 4900 40  0000 C CNN
F 1 "10" V 7407 4901 40  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 7330 4900 30  0001 C CNN
F 3 "" H 7400 4900 30  0000 C CNN
	1    7400 4900
	-1   0    0    1   
$EndComp
Wire Wire Line
	7300 4150 7500 4150
Wire Wire Line
	7400 4150 7400 4200
Wire Wire Line
	7400 4650 7400 4600
Wire Wire Line
	7400 5150 7400 5200
$Comp
L GND #PWR09
U 1 1 5A1D889E
P 7400 5200
F 0 "#PWR09" H 7400 5200 30  0001 C CNN
F 1 "GND" H 7400 5130 30  0000 C CNN
F 2 "" H 7400 5200 60  0001 C CNN
F 3 "" H 7400 5200 60  0001 C CNN
	1    7400 5200
	1    0    0    -1  
$EndComp
$Comp
L CP1 C7
U 1 1 5A1D896B
P 7700 4150
F 0 "C7" H 7500 4250 50  0000 L CNN
F 1 "10µF" H 7500 4000 50  0000 L CNN
F 2 "Capacitors_THT:CP_Radial_Tantal_D6.0mm_P2.50mm" H 7700 4150 60  0001 C CNN
F 3 "" H 7700 4150 60  0000 C CNN
	1    7700 4150
	0    -1   -1   0   
$EndComp
Connection ~ 7400 4150
Wire Wire Line
	8300 3100 8000 3100
Wire Wire Line
	8000 3100 8000 4150
Wire Wire Line
	8000 4150 7900 4150
Wire Wire Line
	8300 3350 8250 3350
Wire Wire Line
	8250 3350 8250 3450
$Comp
L R R5
U 1 1 5A1D8CF2
P 8250 3700
F 0 "R5" V 8330 3700 40  0000 C CNN
F 1 "1,2K" V 8257 3701 40  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 8180 3700 30  0001 C CNN
F 3 "" H 8250 3700 30  0000 C CNN
	1    8250 3700
	-1   0    0    1   
$EndComp
Wire Wire Line
	8250 3950 8250 4000
$Comp
L GND #PWR010
U 1 1 5A1D8EC8
P 8250 4000
F 0 "#PWR010" H 8250 4000 30  0001 C CNN
F 1 "GND" H 8250 3930 30  0000 C CNN
F 2 "" H 8250 4000 60  0001 C CNN
F 3 "" H 8250 4000 60  0001 C CNN
	1    8250 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	8300 3200 8100 3200
Wire Wire Line
	8100 3200 8100 4150
Wire Wire Line
	8100 4150 8650 4150
$Comp
L SPEAKER SP1
U 1 1 5A1D92BC
P 8950 4250
F 0 "SP1" H 8850 4500 70  0000 C CNN
F 1 "SPEAKER" H 8850 4000 70  0000 C CNN
F 2 "Pin_Header_Straight_1x02_Pitch2.54mm" H 8950 4250 60  0001 C CNN
F 3 "" H 8950 4250 60  0000 C CNN
	1    8950 4250
	1    0    0    -1  
$EndComp
Wire Wire Line
	8650 4350 8500 4350
Wire Wire Line
	8500 4350 8500 4550
$Comp
L GND #PWR011
U 1 1 5A1D953C
P 8500 4550
F 0 "#PWR011" H 8500 4550 30  0001 C CNN
F 1 "GND" H 8500 4480 30  0000 C CNN
F 2 "" H 8500 4550 60  0001 C CNN
F 3 "" H 8500 4550 60  0001 C CNN
	1    8500 4550
	1    0    0    -1  
$EndComp
$Comp
L R R6
U 1 1 5A1D830D
P 4650 3150
F 0 "R6" V 4730 3150 40  0000 C CNN
F 1 "22K" V 4657 3151 40  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 4580 3150 30  0001 C CNN
F 3 "" H 4650 3150 30  0000 C CNN
	1    4650 3150
	0    1    1    0   
$EndComp
$Comp
L R R7
U 1 1 5A1D83D2
P 4650 4350
F 0 "R7" V 4730 4350 40  0000 C CNN
F 1 "22K" V 4657 4351 40  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 4580 4350 30  0001 C CNN
F 3 "" H 4650 4350 30  0000 C CNN
	1    4650 4350
	0    1    1    0   
$EndComp
Wire Wire Line
	4350 4350 4400 4350
Text Notes 3450 4000 0    60   ~ 0
Out Buzzer\n\n
Text Notes 3450 3800 0    60   ~ 0
Out JQ6500\n
Wire Wire Line
	5700 3450 5700 3500
Wire Wire Line
	5700 4000 5700 4100
Wire Wire Line
	5700 4650 5700 4600
Wire Wire Line
	4350 3150 4400 3150
$EndSCHEMATC
