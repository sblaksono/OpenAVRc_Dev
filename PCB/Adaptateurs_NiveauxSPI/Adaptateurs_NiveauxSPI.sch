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
LIBS:Mega_2560 core mini_full_2.1
LIBS:Adaptateurs_NiveauxSPI-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Adaptateur Niveaux SPI 5v/3,3v"
Date "2018-09-07"
Rev "0.1"
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L CONN_01X07 P1
U 1 1 5B8003DA
P 1900 2550
F 0 "P1" H 1900 2950 50  0000 C CNN
F 1 "CONN_01X07" V 2000 2500 50  0000 C CNN
F 2 "Pin_Header_Straight_1x07_Pitch2.54mm" H 1900 2500 50  0001 C CNN
F 3 "" H 1900 2500 50  0000 C CNN
	1    1900 2550
	-1   0    0    -1  
$EndComp
$Comp
L CON_5V_3-3V U1
U 1 1 5B80076F
P 3200 2600
F 0 "U1" H 2900 3000 40  0000 C CNN
F 1 "CON_5V_3-3V" H 3300 3000 40  0000 C CNN
F 2 "Level_Convertissor_W10.16mm" H 3200 2600 30  0001 C CIN
F 3 "" H 3200 2600 60  0001 C CNN
	1    3200 2600
	-1   0    0    -1  
$EndComp
$Comp
L CONN_01X08 P2
U 1 1 5B800BE1
P 5000 2400
F 0 "P2" H 5000 2850 50  0000 C CNN
F 1 "CONN_01X08" V 5100 2400 50  0000 C CNN
F 2 "Pin_Header_Straight_2x04_Pitch2.54mm" H 5000 2400 50  0001 C CNN
F 3 "" H 5000 2400 50  0000 C CNN
	1    5000 2400
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 5B800E91
P 4350 2250
F 0 "R1" V 4300 2050 40  0000 C CNN
F 1 "20K" V 4357 2251 40  0000 C CNN
F 2 "R_1206" V 4280 2250 30  0001 C CNN
F 3 "" H 4350 2250 30  0000 C CNN
	1    4350 2250
	0    1    1    0   
$EndComp
Wire Wire Line
	2700 2350 2100 2350
Wire Wire Line
	2100 2450 2700 2450
Wire Wire Line
	2100 2550 2700 2550
Wire Wire Line
	2100 2650 2700 2650
Wire Wire Line
	2100 2750 2700 2750
Wire Wire Line
	2700 2850 2100 2850
Wire Wire Line
	3700 2350 4300 2350
Wire Wire Line
	4300 2350 4400 2450
Wire Wire Line
	4400 2450 4800 2450
Wire Wire Line
	3700 2450 4300 2450
Wire Wire Line
	4300 2450 4400 2350
Wire Wire Line
	4400 2350 4800 2350
Wire Wire Line
	3950 2550 3700 2550
Wire Wire Line
	3700 2650 3800 2650
Wire Wire Line
	3800 2650 3800 3000
Wire Wire Line
	3700 2750 3950 2750
Wire Wire Line
	3950 2750 4150 2550
Wire Wire Line
	4150 2550 4800 2550
Wire Wire Line
	3700 2850 4050 2850
Wire Wire Line
	4050 2850 4250 2650
Wire Wire Line
	4250 2650 4800 2650
Wire Wire Line
	3950 2150 4800 2150
Wire Wire Line
	4800 2050 4700 2050
Wire Wire Line
	4700 2050 4700 2800
Wire Wire Line
	3950 2100 3950 2550
Connection ~ 3950 2150
Wire Wire Line
	2600 2100 2600 2550
Wire Wire Line
	2600 3000 2600 2650
Connection ~ 2600 2650
Wire Wire Line
	4600 2250 4800 2250
Wire Wire Line
	4100 2250 3950 2250
Connection ~ 3950 2250
$Comp
L CONN_01X12 P4
U 1 1 5B80123F
P 9450 2550
F 0 "P4" H 9500 3200 50  0000 C CNN
F 1 "CONN_01X12" V 9600 2550 50  0000 C CNN
F 2 "Pin_Header_Straight_2x06_Pitch2.54mm" H 9500 2350 50  0001 C CNN
F 3 "" H 9500 2350 50  0000 C CNN
	1    9450 2550
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X07 P3
U 1 1 5B8013B0
P 6350 2550
F 0 "P3" H 6350 2950 50  0000 C CNN
F 1 "CONN_01X07" V 6450 2500 50  0000 C CNN
F 2 "Pin_Header_Straight_1x07_Pitch2.54mm" H 6350 2500 50  0001 C CNN
F 3 "" H 6350 2500 50  0000 C CNN
	1    6350 2550
	-1   0    0    -1  
$EndComp
$Comp
L CON_5V_3-3V U2
U 1 1 5B8013B6
P 7650 2600
F 0 "U2" H 7350 3000 40  0000 C CNN
F 1 "CON_5V_3-3V" H 7750 3000 40  0000 C CNN
F 2 "Level_Convertissor_W10.16mm" H 7650 2600 30  0001 C CIN
F 3 "" H 7650 2600 60  0001 C CNN
	1    7650 2600
	-1   0    0    -1  
$EndComp
$Comp
L GND #PWR35
U 1 1 5B8013BC
P 8250 3000
F 0 "#PWR35" H 8250 3000 30  0001 C CNN
F 1 "GND" H 8250 2930 30  0000 C CNN
F 2 "" H 8250 3000 60  0001 C CNN
F 3 "" H 8250 3000 60  0001 C CNN
	1    8250 3000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR24
U 1 1 5B8013C2
P 7050 3000
F 0 "#PWR24" H 7050 3000 30  0001 C CNN
F 1 "GND" H 7050 2930 30  0000 C CNN
F 2 "" H 7050 3000 60  0001 C CNN
F 3 "" H 7050 3000 60  0001 C CNN
	1    7050 3000
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR36
U 1 1 5B8013D4
P 8400 2100
F 0 "#PWR36" H 8400 2060 30  0001 C CNN
F 1 "+3.3V" H 8400 2210 30  0000 C CNN
F 2 "" H 8400 2100 60  0001 C CNN
F 3 "" H 8400 2100 60  0001 C CNN
	1    8400 2100
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR23
U 1 1 5B8013DA
P 7050 2100
F 0 "#PWR23" H 7050 2190 20  0001 C CNN
F 1 "+5V" H 7050 2190 30  0000 C CNN
F 2 "" H 7050 2100 60  0001 C CNN
F 3 "" H 7050 2100 60  0001 C CNN
	1    7050 2100
	1    0    0    -1  
$EndComp
Wire Wire Line
	7150 2350 6550 2350
Wire Wire Line
	6550 2450 7150 2450
Wire Wire Line
	6550 2550 7150 2550
Wire Wire Line
	6550 2650 7150 2650
Wire Wire Line
	6550 2750 7150 2750
Wire Wire Line
	7150 2850 6550 2850
Wire Wire Line
	8400 2550 8150 2550
Wire Wire Line
	8150 2650 8400 2650
Wire Wire Line
	8250 2650 8250 3000
Wire Wire Line
	8400 2100 8400 2550
Wire Wire Line
	7050 2100 7050 2550
Wire Wire Line
	7050 3000 7050 2650
Connection ~ 7050 2650
Connection ~ 2600 2550
Wire Wire Line
	2200 2100 2200 2250
Wire Wire Line
	2200 2250 2100 2250
Text Notes 2400 1700 0    60   ~ 0
Adaptateur 5v/3,3v SPI pour le NRF24L01
$Comp
L +3.3V #PWR21
U 1 1 5B801BF5
P 6650 2100
F 0 "#PWR21" H 6650 2060 30  0001 C CNN
F 1 "+3.3V" H 6650 2210 30  0000 C CNN
F 2 "" H 6650 2100 60  0001 C CNN
F 3 "" H 6650 2100 60  0001 C CNN
	1    6650 2100
	1    0    0    -1  
$EndComp
Wire Wire Line
	6650 2100 6650 2250
Wire Wire Line
	6650 2250 6550 2250
Connection ~ 7050 2550
Wire Wire Line
	9300 2000 9200 2000
Wire Wire Line
	9200 2000 9200 2100
Wire Wire Line
	8750 2100 9300 2100
Wire Wire Line
	9300 2600 9200 2600
Wire Wire Line
	9200 2600 9200 2900
Wire Wire Line
	9200 2900 9300 2900
Wire Wire Line
	9300 2800 9250 2800
Wire Wire Line
	9250 2800 9250 2700
Wire Wire Line
	9250 2700 9300 2700
Wire Wire Line
	8750 3000 9300 3000
Wire Wire Line
	9200 3000 9200 3100
Wire Wire Line
	9200 3100 9300 3100
Wire Wire Line
	8150 2350 8700 2350
Wire Wire Line
	8150 2450 8750 2450
Wire Wire Line
	8150 2750 8700 2750
Wire Wire Line
	8700 2750 9150 2300
Wire Wire Line
	9150 2300 9300 2300
Wire Wire Line
	8150 2850 8750 2850
Wire Wire Line
	8750 2850 9100 2500
Wire Wire Line
	9100 2500 9300 2500
Wire Wire Line
	8750 2450 8800 2400
Wire Wire Line
	8800 2400 9300 2400
Wire Wire Line
	8700 2350 8850 2200
Wire Wire Line
	8850 2200 9300 2200
Wire Wire Line
	8400 2650 8750 3000
Connection ~ 9200 3000
Connection ~ 8250 2650
Text Notes 6900 1700 0    60   ~ 0
Adaptateur 5v/3,3v SPI pour le CC2500
$Comp
L C C2
U 1 1 5B8026A8
P 3300 3350
F 0 "C2" H 3300 3450 40  0000 L CNN
F 1 "100nF" H 3306 3265 40  0000 L CNN
F 2 "C_1206" H 3338 3200 30  0001 C CNN
F 3 "" H 3300 3350 60  0000 C CNN
	1    3300 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 3150 3300 3100
Wire Wire Line
	3300 3550 3300 3600
$Comp
L C C1
U 1 1 5B8028D5
P 3050 3350
F 0 "C1" H 3050 3450 40  0000 L CNN
F 1 "100nF" H 3056 3265 40  0000 L CNN
F 2 "C_1206" H 3088 3200 30  0001 C CNN
F 3 "" H 3050 3350 60  0000 C CNN
	1    3050 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 3150 3050 3100
Wire Wire Line
	3050 3550 3050 3600
$Comp
L C C4
U 1 1 5B802AFF
P 7750 3350
F 0 "C4" H 7750 3450 40  0000 L CNN
F 1 "100nF" H 7756 3265 40  0000 L CNN
F 2 "C_1206" H 7788 3200 30  0001 C CNN
F 3 "" H 7750 3350 60  0000 C CNN
	1    7750 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	7750 3150 7750 3100
Wire Wire Line
	7750 3550 7750 3600
$Comp
L GND #PWR32
U 1 1 5B802B07
P 7750 3600
F 0 "#PWR32" H 7750 3600 30  0001 C CNN
F 1 "GND" H 7750 3530 30  0000 C CNN
F 2 "" H 7750 3600 60  0001 C CNN
F 3 "" H 7750 3600 60  0001 C CNN
	1    7750 3600
	1    0    0    -1  
$EndComp
$Comp
L C C3
U 1 1 5B802B0D
P 7500 3350
F 0 "C3" H 7500 3450 40  0000 L CNN
F 1 "100nF" H 7506 3265 40  0000 L CNN
F 2 "C_1206" H 7538 3200 30  0001 C CNN
F 3 "" H 7500 3350 60  0000 C CNN
	1    7500 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	7500 3150 7500 3100
Wire Wire Line
	7500 3550 7500 3600
$Comp
L +5V #PWR27
U 1 1 5B802B15
P 7500 3100
F 0 "#PWR27" H 7500 3190 20  0001 C CNN
F 1 "+5V" H 7500 3200 30  0000 C CNN
F 2 "" H 7500 3100 60  0001 C CNN
F 3 "" H 7500 3100 60  0001 C CNN
	1    7500 3100
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR28
U 1 1 5B802B1B
P 7500 3600
F 0 "#PWR28" H 7500 3600 30  0001 C CNN
F 1 "GND" H 7500 3530 30  0000 C CNN
F 2 "" H 7500 3600 60  0001 C CNN
F 3 "" H 7500 3600 60  0001 C CNN
	1    7500 3600
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR31
U 1 1 5B802B21
P 7750 3100
F 0 "#PWR31" H 7750 3060 30  0001 C CNN
F 1 "+3.3V" H 7750 3210 30  0000 C CNN
F 2 "" H 7750 3100 60  0001 C CNN
F 3 "" H 7750 3100 60  0001 C CNN
	1    7750 3100
	1    0    0    -1  
$EndComp
Wire Notes Line
	1700 1800 5200 1800
Wire Notes Line
	5200 1800 5200 3800
Wire Notes Line
	5200 3800 1700 3800
Wire Notes Line
	1700 3800 1700 1800
Wire Notes Line
	6100 1800 9700 1800
Wire Notes Line
	9700 1800 9700 3800
Wire Notes Line
	9700 3800 6100 3800
Wire Notes Line
	6100 3800 6100 1800
$Comp
L +3.3VADC #PWR1
U 1 1 5B802CA6
P 2200 2100
F 0 "#PWR1" H 2200 2220 20  0001 C CNN
F 1 "+3.3VADC" H 2200 2190 30  0000 C CNN
F 2 "" H 2200 2100 60  0001 C CNN
F 3 "" H 2200 2100 60  0001 C CNN
	1    2200 2100
	1    0    0    -1  
$EndComp
$Comp
L +5VP #PWR3
U 1 1 5B802CDB
P 2600 2100
F 0 "#PWR3" H 2600 2190 20  0001 C CNN
F 1 "+5VP" H 2600 2190 30  0000 C CNN
F 2 "" H 2600 2100 60  0001 C CNN
F 3 "" H 2600 2100 60  0001 C CNN
	1    2600 2100
	1    0    0    -1  
$EndComp
$Comp
L +3.3VADC #PWR11
U 1 1 5B802D88
P 3300 3100
F 0 "#PWR11" H 3300 3220 20  0001 C CNN
F 1 "+3.3VADC" H 3300 3190 30  0000 C CNN
F 2 "" H 3300 3100 60  0001 C CNN
F 3 "" H 3300 3100 60  0001 C CNN
	1    3300 3100
	1    0    0    -1  
$EndComp
$Comp
L +5VP #PWR7
U 1 1 5B802DC0
P 3050 3100
F 0 "#PWR7" H 3050 3190 20  0001 C CNN
F 1 "+5VP" H 3050 3190 30  0000 C CNN
F 2 "" H 3050 3100 60  0001 C CNN
F 3 "" H 3050 3100 60  0001 C CNN
	1    3050 3100
	1    0    0    -1  
$EndComp
$Comp
L +3.3VADC #PWR17
U 1 1 5B802EB8
P 3950 2100
F 0 "#PWR17" H 3950 2220 20  0001 C CNN
F 1 "+3.3VADC" H 3950 2190 30  0000 C CNN
F 2 "" H 3950 2100 60  0001 C CNN
F 3 "" H 3950 2100 60  0001 C CNN
	1    3950 2100
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR20
U 1 1 5B803200
P 4700 2800
F 0 "#PWR20" H 4700 2800 40  0001 C CNN
F 1 "GNDA" H 4700 2730 40  0000 C CNN
F 2 "" H 4700 2800 60  0001 C CNN
F 3 "" H 4700 2800 60  0001 C CNN
	1    4700 2800
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR15
U 1 1 5B80326F
P 3800 3000
F 0 "#PWR15" H 3800 3000 40  0001 C CNN
F 1 "GNDA" H 3800 2930 40  0000 C CNN
F 2 "" H 3800 3000 60  0001 C CNN
F 3 "" H 3800 3000 60  0001 C CNN
	1    3800 3000
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR12
U 1 1 5B80329B
P 3300 3600
F 0 "#PWR12" H 3300 3600 40  0001 C CNN
F 1 "GNDA" H 3300 3530 40  0000 C CNN
F 2 "" H 3300 3600 60  0001 C CNN
F 3 "" H 3300 3600 60  0001 C CNN
	1    3300 3600
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR8
U 1 1 5B8032C7
P 3050 3600
F 0 "#PWR8" H 3050 3600 40  0001 C CNN
F 1 "GNDA" H 3050 3530 40  0000 C CNN
F 2 "" H 3050 3600 60  0001 C CNN
F 3 "" H 3050 3600 60  0001 C CNN
	1    3050 3600
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR4
U 1 1 5B8032F3
P 2600 3000
F 0 "#PWR4" H 2600 3000 40  0001 C CNN
F 1 "GNDA" H 2600 2930 40  0000 C CNN
F 2 "" H 2600 3000 60  0001 C CNN
F 3 "" H 2600 3000 60  0001 C CNN
	1    2600 3000
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X07 P5
U 1 1 5B810C78
P 1900 5050
F 0 "P5" H 1900 5450 50  0000 C CNN
F 1 "CONN_01X07" V 2000 5000 50  0000 C CNN
F 2 "Pin_Header_Straight_1x07_Pitch2.54mm" H 1900 5000 50  0001 C CNN
F 3 "" H 1900 5000 50  0000 C CNN
	1    1900 5050
	-1   0    0    -1  
$EndComp
$Comp
L CON_5V_3-3V U3
U 1 1 5B810C7E
P 3200 5100
F 0 "U3" H 2900 5500 40  0000 C CNN
F 1 "CON_5V_3-3V" H 3300 5500 40  0000 C CNN
F 2 "Level_Convertissor_W10.16mm" H 3200 5100 30  0001 C CIN
F 3 "" H 3200 5100 60  0001 C CNN
	1    3200 5100
	-1   0    0    -1  
$EndComp
Wire Wire Line
	2700 4850 2100 4850
Wire Wire Line
	2100 4950 2700 4950
Wire Wire Line
	2100 5050 2700 5050
Wire Wire Line
	2100 5150 2700 5150
Wire Wire Line
	2100 5250 2700 5250
Wire Wire Line
	2700 5350 2100 5350
Wire Wire Line
	3950 5050 3700 5050
Wire Wire Line
	3700 5150 3800 5150
Wire Wire Line
	3800 5150 3800 5500
Wire Wire Line
	3700 5250 3950 5250
Wire Wire Line
	3700 5350 4050 5350
Wire Wire Line
	3950 4600 3950 5050
Wire Wire Line
	2600 4600 2600 5050
Wire Wire Line
	2600 5500 2600 5150
Connection ~ 2600 5150
Connection ~ 2600 5050
Wire Wire Line
	2200 4600 2200 4750
Wire Wire Line
	2200 4750 2100 4750
Text Notes 2400 4200 0    60   ~ 0
Adaptateur 5v/3,3v SPI pour le A7105
$Comp
L C C6
U 1 1 5B810CB4
P 3300 5850
F 0 "C6" H 3300 5950 40  0000 L CNN
F 1 "100nF" H 3306 5765 40  0000 L CNN
F 2 "C_1206" H 3338 5700 30  0001 C CNN
F 3 "" H 3300 5850 60  0000 C CNN
	1    3300 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 5650 3300 5600
Wire Wire Line
	3300 6050 3300 6100
$Comp
L C C5
U 1 1 5B810CBC
P 3050 5850
F 0 "C5" H 3050 5950 40  0000 L CNN
F 1 "100nF" H 3056 5765 40  0000 L CNN
F 2 "C_1206" H 3088 5700 30  0001 C CNN
F 3 "" H 3050 5850 60  0000 C CNN
	1    3050 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 5650 3050 5600
Wire Wire Line
	3050 6050 3050 6100
Wire Notes Line
	1700 4300 5200 4300
Wire Notes Line
	5200 4300 5200 6300
Wire Notes Line
	5200 6300 1700 6300
Wire Notes Line
	1700 6300 1700 4300
$Comp
L +3.3VP #PWR2
U 1 1 5B8112A4
P 2200 4600
F 0 "#PWR2" H 2250 4630 20  0001 C CNN
F 1 "+3.3VP" H 2200 4700 30  0000 C CNN
F 2 "" H 2200 4600 60  0001 C CNN
F 3 "" H 2200 4600 60  0001 C CNN
	1    2200 4600
	1    0    0    -1  
$EndComp
$Comp
L +3.3VP #PWR13
U 1 1 5B811390
P 3300 5600
F 0 "#PWR13" H 3350 5630 20  0001 C CNN
F 1 "+3.3VP" H 3300 5700 30  0000 C CNN
F 2 "" H 3300 5600 60  0001 C CNN
F 3 "" H 3300 5600 60  0001 C CNN
	1    3300 5600
	1    0    0    -1  
$EndComp
$Comp
L +3.3VP #PWR18
U 1 1 5B8113C8
P 3950 4600
F 0 "#PWR18" H 4000 4630 20  0001 C CNN
F 1 "+3.3VP" H 3950 4700 30  0000 C CNN
F 2 "" H 3950 4600 60  0001 C CNN
F 3 "" H 3950 4600 60  0001 C CNN
	1    3950 4600
	1    0    0    -1  
$EndComp
$Comp
L +5VD #PWR5
U 1 1 5B811402
P 2600 4600
F 0 "#PWR5" H 2600 4550 20  0001 C CNN
F 1 "+5VD" H 2600 4700 30  0000 C CNN
F 2 "" H 2600 4600 60  0001 C CNN
F 3 "" H 2600 4600 60  0001 C CNN
	1    2600 4600
	1    0    0    -1  
$EndComp
$Comp
L +5VD #PWR9
U 1 1 5B811498
P 3050 5600
F 0 "#PWR9" H 3050 5550 20  0001 C CNN
F 1 "+5VD" H 3050 5700 30  0000 C CNN
F 2 "" H 3050 5600 60  0001 C CNN
F 3 "" H 3050 5600 60  0001 C CNN
	1    3050 5600
	1    0    0    -1  
$EndComp
$Comp
L DGND #PWR6
U 1 1 5B8115C4
P 2600 5500
F 0 "#PWR6" H 2600 5500 40  0001 C CNN
F 1 "DGND" H 2600 5430 40  0000 C CNN
F 2 "" H 2600 5500 60  0001 C CNN
F 3 "" H 2600 5500 60  0001 C CNN
	1    2600 5500
	1    0    0    -1  
$EndComp
$Comp
L DGND #PWR10
U 1 1 5B8116A8
P 3050 6100
F 0 "#PWR10" H 3050 6100 40  0001 C CNN
F 1 "DGND" H 3050 6030 40  0000 C CNN
F 2 "" H 3050 6100 60  0001 C CNN
F 3 "" H 3050 6100 60  0001 C CNN
	1    3050 6100
	1    0    0    -1  
$EndComp
$Comp
L DGND #PWR14
U 1 1 5B8116E0
P 3300 6100
F 0 "#PWR14" H 3300 6100 40  0001 C CNN
F 1 "DGND" H 3300 6030 40  0000 C CNN
F 2 "" H 3300 6100 60  0001 C CNN
F 3 "" H 3300 6100 60  0001 C CNN
	1    3300 6100
	1    0    0    -1  
$EndComp
$Comp
L DGND #PWR16
U 1 1 5B811718
P 3800 5500
F 0 "#PWR16" H 3800 5500 40  0001 C CNN
F 1 "DGND" H 3800 5430 40  0000 C CNN
F 2 "" H 3800 5500 60  0001 C CNN
F 3 "" H 3800 5500 60  0001 C CNN
	1    3800 5500
	1    0    0    -1  
$EndComp
$Comp
L DGND #PWR19
U 1 1 5B811750
P 4600 5650
F 0 "#PWR19" H 4600 5650 40  0001 C CNN
F 1 "DGND" H 4600 5580 40  0000 C CNN
F 2 "" H 4600 5650 60  0001 C CNN
F 3 "" H 4600 5650 60  0001 C CNN
	1    4600 5650
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X09 P6
U 1 1 5B811A3C
P 5000 5150
F 0 "P6" H 5000 5650 50  0000 C CNN
F 1 "CONN_01X09" V 5100 5150 50  0000 C CNN
F 2 "Pin_Header_Straight_1x09_Pitch2.54mm" H 5000 5150 50  0001 C CNN
F 3 "" H 5000 5150 50  0000 C CNN
	1    5000 5150
	1    0    0    -1  
$EndComp
Wire Wire Line
	4800 4750 3950 4750
Connection ~ 3950 4750
Wire Wire Line
	3700 4850 4800 4850
Wire Wire Line
	3950 5250 4150 5050
Wire Wire Line
	4150 5050 4800 5050
Wire Wire Line
	4050 5350 4250 5150
Wire Wire Line
	4250 5150 4800 5150
Wire Wire Line
	4600 5650 4600 4950
Wire Wire Line
	4600 4950 4800 4950
Wire Wire Line
	4800 5350 4750 5350
Wire Wire Line
	4750 5350 4750 5450
Wire Wire Line
	4750 5450 4800 5450
Wire Wire Line
	4800 5550 4700 5550
Wire Wire Line
	4700 5550 4700 5250
Wire Wire Line
	4700 5250 4800 5250
$Comp
L CONN_01X07 P7
U 1 1 5B812A07
P 6350 5050
F 0 "P7" H 6350 5450 50  0000 C CNN
F 1 "CONN_01X07" V 6450 5000 50  0000 C CNN
F 2 "Pin_Header_Straight_1x07_Pitch2.54mm" H 6350 5000 50  0001 C CNN
F 3 "" H 6350 5000 50  0000 C CNN
	1    6350 5050
	-1   0    0    -1  
$EndComp
$Comp
L CON_5V_3-3V U4
U 1 1 5B812A0D
P 7650 5100
F 0 "U4" H 7350 5500 40  0000 C CNN
F 1 "CON_5V_3-3V" H 7750 5500 40  0000 C CNN
F 2 "Level_Convertissor_W10.16mm" H 7650 5100 30  0001 C CIN
F 3 "" H 7650 5100 60  0001 C CNN
	1    7650 5100
	-1   0    0    -1  
$EndComp
Wire Wire Line
	7150 4850 6550 4850
Wire Wire Line
	6550 4950 7150 4950
Wire Wire Line
	6550 5050 7150 5050
Wire Wire Line
	6550 5150 7150 5150
Wire Wire Line
	6550 5250 7150 5250
Wire Wire Line
	7150 5350 6550 5350
Wire Wire Line
	8400 5050 8150 5050
Wire Wire Line
	8400 5150 8400 5500
Wire Wire Line
	8400 4600 8400 5050
Wire Wire Line
	7050 4600 7050 5050
Wire Wire Line
	7050 5500 7050 5150
Connection ~ 7050 5150
Wire Wire Line
	6650 4600 6650 4750
Wire Wire Line
	6650 4750 6550 4750
Connection ~ 7050 5050
Text Notes 6350 4200 0    60   ~ 0
Adaptateur 5v/3,3v SPI pour le CYRF6936 (WK-DEVO-S-MOD)
$Comp
L C C8
U 1 1 5B812A5D
P 7750 5850
F 0 "C8" H 7750 5950 40  0000 L CNN
F 1 "100nF" H 7756 5765 40  0000 L CNN
F 2 "C_1206" H 7788 5700 30  0001 C CNN
F 3 "" H 7750 5850 60  0000 C CNN
	1    7750 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	7750 5650 7750 5600
Wire Wire Line
	7750 6050 7750 6100
$Comp
L C C7
U 1 1 5B812A6B
P 7500 5850
F 0 "C7" H 7500 5950 40  0000 L CNN
F 1 "100nF" H 7506 5765 40  0000 L CNN
F 2 "C_1206" H 7538 5700 30  0001 C CNN
F 3 "" H 7500 5850 60  0000 C CNN
	1    7500 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	7500 5650 7500 5600
Wire Wire Line
	7500 6050 7500 6100
Wire Notes Line
	6100 4300 9700 4300
Wire Notes Line
	9700 4300 9700 6300
Wire Notes Line
	9700 6300 6100 6300
Wire Notes Line
	6100 6300 6100 4300
Wire Wire Line
	8400 5150 8150 5150
$Comp
L +3.3VDAC #PWR22
U 1 1 5B8131F4
P 6650 4600
F 0 "#PWR22" H 6650 4720 20  0001 C CNN
F 1 "+3.3VDAC" H 6650 4690 30  0000 C CNN
F 2 "" H 6650 4600 60  0001 C CNN
F 3 "" H 6650 4600 60  0001 C CNN
	1    6650 4600
	1    0    0    -1  
$EndComp
$Comp
L +3.3VDAC #PWR33
U 1 1 5B8133E1
P 7750 5600
F 0 "#PWR33" H 7750 5720 20  0001 C CNN
F 1 "+3.3VDAC" H 7750 5690 30  0000 C CNN
F 2 "" H 7750 5600 60  0001 C CNN
F 3 "" H 7750 5600 60  0001 C CNN
	1    7750 5600
	1    0    0    -1  
$EndComp
$Comp
L +3.3VDAC #PWR37
U 1 1 5B81342B
P 8400 4600
F 0 "#PWR37" H 8400 4720 20  0001 C CNN
F 1 "+3.3VDAC" H 8400 4690 30  0000 C CNN
F 2 "" H 8400 4600 60  0001 C CNN
F 3 "" H 8400 4600 60  0001 C CNN
	1    8400 4600
	1    0    0    -1  
$EndComp
$Comp
L +5C #PWR25
U 1 1 5B813477
P 7050 4600
F 0 "#PWR25" H 7050 4550 20  0001 C CNN
F 1 "+5C" H 7050 4700 30  0000 C CNN
F 2 "" H 7050 4600 60  0001 C CNN
F 3 "" H 7050 4600 60  0001 C CNN
	1    7050 4600
	1    0    0    -1  
$EndComp
$Comp
L +5C #PWR29
U 1 1 5B81353D
P 7500 5600
F 0 "#PWR29" H 7500 5550 20  0001 C CNN
F 1 "+5C" H 7500 5700 30  0000 C CNN
F 2 "" H 7500 5600 60  0001 C CNN
F 3 "" H 7500 5600 60  0001 C CNN
	1    7500 5600
	1    0    0    -1  
$EndComp
$Comp
L AGND #PWR26
U 1 1 5B813589
P 7050 5500
F 0 "#PWR26" H 7050 5500 40  0001 C CNN
F 1 "AGND" H 7050 5430 30  0000 C CNN
F 2 "" H 7050 5500 60  0001 C CNN
F 3 "" H 7050 5500 60  0001 C CNN
	1    7050 5500
	1    0    0    -1  
$EndComp
$Comp
L AGND #PWR38
U 1 1 5B8137F4
P 8400 5500
F 0 "#PWR38" H 8400 5500 40  0001 C CNN
F 1 "AGND" H 8400 5430 30  0000 C CNN
F 2 "" H 8400 5500 60  0001 C CNN
F 3 "" H 8400 5500 60  0001 C CNN
	1    8400 5500
	1    0    0    -1  
$EndComp
$Comp
L AGND #PWR30
U 1 1 5B81383E
P 7500 6100
F 0 "#PWR30" H 7500 6100 40  0001 C CNN
F 1 "AGND" H 7500 6030 30  0000 C CNN
F 2 "" H 7500 6100 60  0001 C CNN
F 3 "" H 7500 6100 60  0001 C CNN
	1    7500 6100
	1    0    0    -1  
$EndComp
$Comp
L AGND #PWR34
U 1 1 5B813888
P 7750 6100
F 0 "#PWR34" H 7750 6100 40  0001 C CNN
F 1 "AGND" H 7750 6030 30  0000 C CNN
F 2 "" H 7750 6100 60  0001 C CNN
F 3 "" H 7750 6100 60  0001 C CNN
	1    7750 6100
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X10 P8
U 1 1 5B92420B
P 9450 5250
F 0 "P8" H 9500 5900 50  0000 C CNN
F 1 "CONN_01X10" V 9600 5250 50  0000 C CNN
F 2 "Pin_Header_Straight_2x05_Pitch2.54mm" H 9500 5050 50  0001 C CNN
F 3 "" H 9500 5050 50  0000 C CNN
	1    9450 5250
	1    0    0    -1  
$EndComp
Wire Wire Line
	9300 4700 9150 4700
Wire Wire Line
	9150 4700 9150 4600
$Comp
L +5C #PWR39
U 1 1 5B9244FF
P 9150 4600
F 0 "#PWR39" H 9150 4550 20  0001 C CNN
F 1 "+5C" H 9150 4700 30  0000 C CNN
F 2 "" H 9150 4600 60  0001 C CNN
F 3 "" H 9150 4600 60  0001 C CNN
	1    9150 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	9300 5200 9150 5200
Wire Wire Line
	9150 5200 9150 5700
$Comp
L AGND #PWR40
U 1 1 5B924863
P 9150 5700
F 0 "#PWR40" H 9150 5700 40  0001 C CNN
F 1 "AGND" H 9150 5630 30  0000 C CNN
F 2 "" H 9150 5700 60  0001 C CNN
F 3 "" H 9150 5700 60  0001 C CNN
	1    9150 5700
	1    0    0    -1  
$EndComp
Wire Wire Line
	8150 4850 8550 4850
Wire Wire Line
	8550 4850 8600 4800
Wire Wire Line
	8600 4800 9300 4800
Wire Wire Line
	8150 4950 8550 4950
Wire Wire Line
	8550 4950 8600 5000
Wire Wire Line
	8600 5000 9300 5000
Wire Wire Line
	8150 5250 8550 5250
Wire Wire Line
	8550 5250 8700 5400
Wire Wire Line
	8700 5400 9300 5400
Wire Wire Line
	8150 5350 8500 5350
Wire Wire Line
	8500 5350 8750 5600
Wire Wire Line
	8750 5600 9300 5600
Wire Wire Line
	8750 2100 8650 2200
Wire Wire Line
	8650 2200 8400 2200
Connection ~ 8400 2200
Connection ~ 9200 2100
$EndSCHEMATC
