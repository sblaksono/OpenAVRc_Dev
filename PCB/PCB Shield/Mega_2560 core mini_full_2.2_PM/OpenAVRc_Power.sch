EESchema Schematic File Version 4
LIBS:Mega_2560 core mini_full_2.2-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 7 7
Title "Shield Mega2560 core Full"
Date "2019-02-21"
Rev "2.2"
Comp "© Team OpenAVRc"
Comment1 "Reproduction et commercialisation interdite"
Comment2 "By Antho.breizh / pierrotm777"
Comment3 ""
Comment4 "Shield pour RC OpenAVRc"
$EndDescr
$Comp
L Mega_2560-core-mini_full_2.2-rescue:C-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue C31
U 1 1 59C53131
P 8250 3200
F 0 "C31" H 8275 3300 50  0000 L CNN
F 1 "100nF" V 8350 2900 50  0000 L CNN
F 2 "Capacitors_SMD:C_1206" H 8288 3050 50  0001 C CNN
F 3 "" H 8250 3200 50  0000 C CNN
	1    8250 3200
	1    0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:R-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue R16
U 1 1 59C53138
P 5300 4350
F 0 "R16" V 5380 4350 50  0000 C CNN
F 1 "2.7K" V 5300 4350 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 5230 4350 50  0001 C CNN
F 3 "" H 5300 4350 50  0000 C CNN
	1    5300 4350
	-1   0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0108
U 1 1 59C5313F
P 8950 4550
F 0 "#PWR0108" H 8950 4300 50  0001 C CNN
F 1 "GND" H 8950 4350 50  0000 C CNN
F 2 "" H 8950 4550 50  0000 C CNN
F 3 "" H 8950 4550 50  0000 C CNN
	1    8950 4550
	1    0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:CONN_01X03-Mega_2560-core-mini_full_2.1-Mega_2560-core-mini_full_2.1-rescue P26
U 1 1 59C53145
P 9050 3350
F 0 "P26" H 9050 3550 50  0000 C CNN
F 1 "LCD_Alim" H 9050 3150 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x03_Pitch2.54mm" H 9050 3350 50  0001 C CNN
F 3 "" H 9050 3350 50  0000 C CNN
	1    9050 3350
	-1   0    0    -1  
$EndComp
Text Notes 9500 3800 0    60   ~ 0
+3.3V\n
Text Notes 9250 2900 0    60   ~ 0
+5V
$Comp
L power1:VCC #PWR0109
U 1 1 59C5314F
P 9600 3000
F 0 "#PWR0109" H 9600 2850 50  0001 C CNN
F 1 "VCC" V 9600 3200 50  0000 C CNN
F 2 "" H 9600 3000 50  0000 C CNN
F 3 "" H 9600 3000 50  0000 C CNN
	1    9600 3000
	0    1    1    0   
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:C-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue C38
U 1 1 59C53155
P 9450 4300
F 0 "C38" H 9300 4400 50  0000 L CNN
F 1 "100nF" H 9200 4200 50  0000 L CNN
F 2 "Capacitors_SMD:C_1206" H 9488 4150 50  0001 C CNN
F 3 "" H 9450 4300 50  0000 C CNN
	1    9450 4300
	1    0    0    -1  
$EndComp
Text Notes 1650 2350 0    60   ~ 0
Power Management
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0110
U 1 1 59C5315D
P 7300 3850
F 0 "#PWR0110" H 7300 3600 50  0001 C CNN
F 1 "GND" H 7300 3700 50  0000 C CNN
F 2 "" H 7300 3850 50  0000 C CNN
F 3 "" H 7300 3850 50  0000 C CNN
	1    7300 3850
	-1   0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0111
U 1 1 59C53163
P 5300 4550
F 0 "#PWR0111" H 5300 4300 50  0001 C CNN
F 1 "GND" H 5300 4400 50  0000 C CNN
F 2 "" H 5300 4550 50  0000 C CNN
F 3 "" H 5300 4550 50  0000 C CNN
	1    5300 4550
	1    0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:CONN_01X02-Mega_2560-core-mini_full_2.1-Mega_2560-core-mini_full_2.1-rescue P21
U 1 1 59C53169
P 3750 3450
AR Path="/59C53169" Ref="P21"  Part="1" 
AR Path="/59C5272D/59C53169" Ref="P21"  Part="1" 
F 0 "P21" H 3750 3600 50  0000 C CNN
F 1 "Sw_power" V 3900 3500 50  0001 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02_Pitch2.54mm" H 3750 3450 50  0001 C CNN
F 3 "" H 3750 3450 50  0000 C CNN
	1    3750 3450
	0    -1   -1   0   
$EndComp
NoConn ~ 9050 3350
NoConn ~ 9050 3250
NoConn ~ 9050 3450
$Comp
L Mega_2560-core-mini_full_2.2-rescue:LD1117S33TR-Mega_2560-core-mini_full_2.1-Mega_2560-core-mini_full_2.1-rescue U5
U 1 1 59C53173
P 8950 4050
F 0 "U5" H 8750 3800 50  0000 C CNN
F 1 "LD1117S33TR" H 8950 4250 50  0000 C CNN
F 2 "TO_SOT_Packages_SMD:SOT-223" H 8950 4150 50  0001 C CNN
F 3 "" H 8950 4050 50  0000 C CNN
	1    8950 4050
	1    0    0    -1  
$EndComp
Text Notes 8200 4950 0    60   Italic 0
Option si utilisation du 3.3V dans le montage
$Comp
L Mega_2560-core-mini_full_2.2-rescue:R-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue R17
U 1 1 59C53182
P 5300 3600
F 0 "R17" V 5380 3600 50  0000 C CNN
F 1 "5.1K" V 5300 3600 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 5230 3600 50  0001 C CNN
F 3 "" H 5300 3600 50  0000 C CNN
	1    5300 3600
	1    0    0    1   
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0112
U 1 1 59C53189
P 8250 3400
F 0 "#PWR0112" H 8250 3150 50  0001 C CNN
F 1 "GND" H 8250 3250 50  0000 C CNN
F 2 "" H 8250 3400 50  0000 C CNN
F 3 "" H 8250 3400 50  0000 C CNN
	1    8250 3400
	-1   0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:CP1-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue C28
U 1 1 59C5318F
P 5750 3300
F 0 "C28" H 5775 3400 50  0000 L CNN
F 1 "100µF" V 5850 3000 50  0000 L CNN
F 2 "Capacitors_SMD:CP_Elec_6.3x5.3" H 5750 3300 50  0001 C CNN
F 3 "" H 5750 3300 50  0000 C CNN
	1    5750 3300
	1    0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0113
U 1 1 59C53196
P 5750 3500
F 0 "#PWR0113" H 5750 3250 50  0001 C CNN
F 1 "GND" H 5750 3350 50  0000 C CNN
F 2 "" H 5750 3500 50  0000 C CNN
F 3 "" H 5750 3500 50  0000 C CNN
	1    5750 3500
	-1   0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:MBR0520-Mega_2560-core-mini_full_2.1-Mega_2560-core-mini_full_2.1-rescue D6
U 1 1 59C5319C
P 3250 3000
F 0 "D6" H 3250 3100 50  0000 C CNN
F 1 "MBR0520" H 3250 2900 50  0000 C CNN
F 2 "Diodes_SMD:D_SOD-123" H 3250 2825 50  0001 C CNN
F 3 "" H 3250 3000 50  0001 C CNN
	1    3250 3000
	-1   0    0    1   
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:CP1-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue C7
U 1 1 59C531A5
P 8600 3200
F 0 "C7" H 8625 3300 50  0000 L CNN
F 1 "100µF" V 8500 2900 50  0000 L CNN
F 2 "Capacitors_SMD:CP_Elec_6.3x5.3" H 8600 3200 50  0001 C CNN
F 3 "" H 8600 3200 50  0000 C CNN
	1    8600 3200
	1    0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0114
U 1 1 59C531AC
P 8600 3450
F 0 "#PWR0114" H 8600 3200 50  0001 C CNN
F 1 "GND" H 8600 3300 50  0000 C CNN
F 2 "" H 8600 3450 50  0000 C CNN
F 3 "" H 8600 3450 50  0000 C CNN
	1    8600 3450
	-1   0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:CP1-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue C8
U 1 1 59C531B2
P 9700 4300
F 0 "C8" H 9725 4400 50  0000 L CNN
F 1 "47µF" H 9725 4200 50  0000 L CNN
F 2 "Capacitors_SMD:CP_Elec_6.3x5.3" H 9700 4300 50  0001 C CNN
F 3 "" H 9700 4300 50  0000 C CNN
	1    9700 4300
	1    0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0115
U 1 1 59C531B9
P 9700 4550
F 0 "#PWR0115" H 9700 4300 50  0001 C CNN
F 1 "GND" H 9700 4350 50  0000 C CNN
F 2 "" H 9700 4550 50  0000 C CNN
F 3 "" H 9700 4550 50  0000 C CNN
	1    9700 4550
	1    0    0    -1  
$EndComp
Text Notes 3600 3350 0    60   ~ 0
Power\nSwitch
$Comp
L Mega_2560-core-mini_full_2.2-rescue:CONN_01X08-Mega_2560-core-mini_full_2.1-Mega_2560-core-mini_full_2.1-rescue P30
U 1 1 59C531C1
P 1800 4150
F 0 "P30" H 1800 4600 50  0000 C CNN
F 1 "MiniDCDC3A" V 1900 4150 50  0000 C CNN
F 2 "v2.1:MiniDCDC3A" H 1800 4150 50  0001 C CNN
F 3 "" H 1800 4150 50  0000 C CNN
	1    1800 4150
	-1   0    0    1   
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0116
U 1 1 59C531C8
P 2050 4550
F 0 "#PWR0116" H 2050 4300 50  0001 C CNN
F 1 "GND" H 2050 4400 50  0000 C CNN
F 2 "" H 2050 4550 50  0000 C CNN
F 3 "" H 2050 4550 50  0000 C CNN
	1    2050 4550
	1    0    0    -1  
$EndComp
$Comp
L power1:VCC #PWR0117
U 1 1 59C531CE
P 2250 3900
F 0 "#PWR0117" H 2250 3750 50  0001 C CNN
F 1 "VCC" H 2250 4000 50  0000 C CNN
F 2 "" H 2250 3900 50  0000 C CNN
F 3 "" H 2250 3900 50  0000 C CNN
	1    2250 3900
	1    0    0    -1  
$EndComp
Text Label 2600 3000 0    60   ~ 0
LIPO+
Text Notes 2200 4500 0    60   ~ 0
DCDC_IN-
$Comp
L Mega_2560-core-mini_full_2.2-rescue:CONN_01X02-Mega_2560-core-mini_full_2.1-Mega_2560-core-mini_full_2.1-rescue P17
U 1 1 59C531D8
P 2300 3050
AR Path="/59C531D8" Ref="P17"  Part="1" 
AR Path="/59C5272D/59C531D8" Ref="P17"  Part="1" 
F 0 "P17" H 2300 3200 50  0000 C CNN
F 1 "BATT" V 2400 3050 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02_Pitch2.54mm" H 2300 3050 50  0001 C CNN
F 3 "" H 2300 3050 50  0000 C CNN
	1    2300 3050
	-1   0    0    1   
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0118
U 1 1 59C531DF
P 2600 3200
F 0 "#PWR0118" H 2600 2950 50  0001 C CNN
F 1 "GND" H 2600 3050 50  0000 C CNN
F 2 "" H 2600 3200 50  0000 C CNN
F 3 "" H 2600 3200 50  0000 C CNN
	1    2600 3200
	1    0    0    -1  
$EndComp
Text Notes 1600 4950 0    60   Italic 0
Option module DCDC 3A
$Comp
L power1:+BATT #PWR0119
U 1 1 59C53200
P 5300 2950
F 0 "#PWR0119" H 5300 2800 50  0001 C CNN
F 1 "+BATT" H 5300 3090 50  0000 C CNN
F 2 "" H 5300 2950 50  0000 C CNN
F 3 "" H 5300 2950 50  0000 C CNN
	1    5300 2950
	1    0    0    -1  
$EndComp
Text GLabel 5200 4100 0    60   Output ~ 0
U_batt
Text GLabel 9650 3350 2    60   Output ~ 0
LCD_VCC
$Comp
L power1:+3,3V #PWR0120
U 1 1 59CA5551
P 9750 4000
F 0 "#PWR0120" H 9750 3960 30  0001 C CNN
F 1 "+3,3V" V 9750 4200 39  0000 C CNN
F 2 "" H 9750 4000 60  0001 C CNN
F 3 "" H 9750 4000 60  0001 C CNN
	1    9750 4000
	0    1    1    0   
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:PM5033-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue U4
U 1 1 59E1D515
P 7300 3150
F 0 "U4" H 7500 2850 60  0000 C CNN
F 1 "PM5033" H 7300 3450 60  0000 C CNN
F 2 "v2.1:Pm5033_sil5" H 7300 3150 60  0001 C CNN
F 3 "" H 7300 3150 60  0000 C CNN
	1    7300 3150
	1    0    0    -1  
$EndComp
$Comp
L power1:+3,3V #PWR0121
U 1 1 59FED94A
P 7850 3300
F 0 "#PWR0121" H 7850 3260 30  0001 C CNN
F 1 "+3,3V" V 7900 3400 39  0000 C CNN
F 2 "" H 7850 3300 60  0001 C CNN
F 3 "" H 7850 3300 60  0001 C CNN
	1    7850 3300
	0    1    1    0   
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:R-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue R43
U 1 1 5A086B2F
P 6650 3650
F 0 "R43" V 6730 3650 50  0000 C CNN
F 1 "10K" V 6650 3650 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 6580 3650 50  0001 C CNN
F 3 "" H 6650 3650 50  0000 C CNN
	1    6650 3650
	-1   0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:R-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue R41
U 1 1 5A086C25
P 6350 3300
F 0 "R41" V 6430 3300 50  0000 C CNN
F 1 "33K" V 6350 3300 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 6280 3300 50  0001 C CNN
F 3 "" H 6350 3300 50  0000 C CNN
	1    6350 3300
	0    -1   1    0   
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0122
U 1 1 5A0873AD
P 6650 3900
F 0 "#PWR0122" H 6650 3650 50  0001 C CNN
F 1 "GND" H 6650 3750 50  0000 C CNN
F 2 "" H 6650 3900 50  0000 C CNN
F 3 "" H 6650 3900 50  0000 C CNN
	1    6650 3900
	1    0    0    -1  
$EndComp
$Comp
L power1:+BATT #PWR0123
U 1 1 5A702E5A
P 2400 4200
F 0 "#PWR0123" H 2400 4050 50  0001 C CNN
F 1 "+BATT" H 2400 4340 50  0000 C CNN
F 2 "" H 2400 4200 50  0000 C CNN
F 3 "" H 2400 4200 50  0000 C CNN
	1    2400 4200
	1    0    0    -1  
$EndComp
$Comp
L device:MOS_P Q4
U 1 1 5AA68F55
P 4650 3100
F 0 "Q4" V 4500 3300 60  0000 R CNN
F 1 "SI2319DS" V 4900 3300 60  0000 R CNN
F 2 "v2.1:SOT-23_MOS_P" H 4650 3100 60  0001 C CNN
F 3 "" H 4650 3100 60  0000 C CNN
	1    4650 3100
	0    1    -1   0   
$EndComp
$Comp
L device:NPN Q3
U 1 1 5AA69CF0
P 4550 4100
F 0 "Q3" H 4550 3950 50  0000 R CNN
F 1 "MMBT2222ALT1" V 4750 4400 50  0000 R CNN
F 2 "v2.1:SOT-23_MMBT2222" H 4550 4100 60  0001 C CNN
F 3 "" H 4550 4100 60  0000 C CNN
	1    4550 4100
	1    0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:R-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue R42
U 1 1 5AA69DC7
P 4250 3350
F 0 "R42" V 4330 3350 50  0000 C CNN
F 1 "100K" V 4250 3350 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 4180 3350 50  0001 C CNN
F 3 "" H 4250 3350 50  0000 C CNN
	1    4250 3350
	0    -1   1    0   
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:R-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue R1
U 1 1 5AA69E66
P 4650 3650
F 0 "R1" V 4730 3650 50  0000 C CNN
F 1 "5,1K" V 4650 3650 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 4580 3650 50  0001 C CNN
F 3 "" H 4650 3650 50  0000 C CNN
	1    4650 3650
	-1   0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0124
U 1 1 5AA6A33E
P 4650 4550
F 0 "#PWR0124" H 4650 4300 50  0001 C CNN
F 1 "GND" H 4650 4400 50  0000 C CNN
F 2 "" H 4650 4550 50  0000 C CNN
F 3 "" H 4650 4550 50  0000 C CNN
	1    4650 4550
	1    0    0    -1  
$EndComp
Text GLabel 3400 4100 0    60   Output ~ 0
Hold_Power
$Comp
L Mega_2560-core-mini_full_2.2-rescue:R-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue R2
U 1 1 5AA6A659
P 3600 4100
F 0 "R2" V 3680 4100 50  0000 C CNN
F 1 "5,1K" V 3600 4100 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 3530 4100 50  0001 C CNN
F 3 "" H 3600 4100 50  0000 C CNN
	1    3600 4100
	0    -1   1    0   
$EndComp
Connection ~ 8950 4450
Wire Wire Line
	8950 4450 9450 4450
Wire Notes Line
	8350 3800 10150 3800
Wire Wire Line
	7800 3000 9600 3000
Wire Notes Line
	8350 4800 10150 4800
Wire Notes Line
	8350 3800 8350 4800
Connection ~ 9250 3000
Wire Wire Line
	9250 3250 9250 3000
Wire Wire Line
	9250 3350 9650 3350
Wire Wire Line
	8950 4300 8950 4550
Wire Wire Line
	7300 3600 7300 3850
Wire Wire Line
	5750 3500 5750 3450
Wire Wire Line
	8250 3350 8250 3400
Wire Wire Line
	8250 3050 8250 3000
Connection ~ 8250 3000
Wire Wire Line
	8600 3450 8600 3350
Wire Wire Line
	9700 4550 9700 4450
Wire Wire Line
	2000 4200 2150 4200
Wire Wire Line
	2050 4400 2000 4400
Wire Wire Line
	2050 3800 2050 4550
Wire Wire Line
	2000 3900 2050 3900
Connection ~ 2050 3900
Wire Wire Line
	2050 4500 2000 4500
Connection ~ 2050 4400
Connection ~ 2050 4500
Wire Wire Line
	2250 4100 2000 4100
Wire Wire Line
	2250 3900 2250 4100
Wire Wire Line
	2250 4000 2000 4000
Connection ~ 2250 4000
Wire Wire Line
	2500 3100 2600 3100
Wire Wire Line
	2600 3100 2600 3200
Wire Wire Line
	2150 4200 2150 4300
Connection ~ 2150 4300
Wire Wire Line
	2000 3800 2050 3800
Wire Notes Line
	1600 3700 2750 3700
Wire Notes Line
	2750 3700 2750 4800
Wire Notes Line
	2750 4800 1600 4800
Wire Notes Line
	1600 4800 1600 3700
Wire Notes Line
	1500 5050 1500 2200
Wire Notes Line
	1500 5050 10400 5050
Wire Notes Line
	1500 2200 10400 2200
Wire Wire Line
	5300 3750 5300 4200
Connection ~ 5300 4100
Wire Wire Line
	5300 4550 5300 4500
Wire Wire Line
	5300 2950 5300 3450
Connection ~ 5300 3000
Wire Notes Line
	10150 4800 10150 3800
Wire Wire Line
	9350 4000 9750 4000
Connection ~ 9450 4000
Wire Wire Line
	9450 4100 9350 4100
Connection ~ 9450 4100
Wire Wire Line
	9700 4150 9700 4000
Connection ~ 9700 4000
Connection ~ 8850 3000
Wire Wire Line
	8600 3050 8600 3000
Connection ~ 8600 3000
Wire Wire Line
	7850 3300 7800 3300
Wire Wire Line
	8450 4000 8550 4000
Wire Notes Line
	10400 2200 10400 5050
Wire Wire Line
	9450 3450 9450 4150
Wire Wire Line
	9450 3450 9250 3450
Wire Wire Line
	6650 3800 6650 3900
Wire Wire Line
	8850 3000 8850 3700
Wire Wire Line
	8850 3700 8450 3700
Wire Wire Line
	8450 3700 8450 4000
Wire Wire Line
	5300 4100 5200 4100
Wire Wire Line
	2000 4300 2400 4300
Wire Wire Line
	2400 4300 2400 4200
Wire Wire Line
	4650 3300 4650 3500
Wire Wire Line
	4400 3350 4650 3350
Connection ~ 4650 3350
Wire Wire Line
	3950 3350 4100 3350
Wire Wire Line
	4650 4300 4650 4550
Wire Wire Line
	3450 4100 3400 4100
Wire Wire Line
	6500 3300 6800 3300
Connection ~ 6650 3300
Wire Wire Line
	4850 3000 6800 3000
Wire Wire Line
	6200 3300 6050 3300
Wire Wire Line
	6050 3300 6050 3000
Connection ~ 6050 3000
Wire Wire Line
	5750 3150 5750 3000
Connection ~ 5750 3000
Wire Wire Line
	6650 3500 6650 3300
Wire Wire Line
	3100 3000 2500 3000
Wire Wire Line
	3400 3000 4450 3000
Wire Wire Line
	3950 3350 3950 3000
Connection ~ 3950 3000
$Comp
L Mega_2560-core-mini_full_2.2-rescue:R-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue R22
U 1 1 5AABCD48
P 4050 3750
F 0 "R22" V 4130 3750 50  0000 C CNN
F 1 "8,2K" V 4050 3750 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 3980 3750 50  0001 C CNN
F 3 "" H 4050 3750 50  0000 C CNN
	1    4050 3750
	0    -1   1    0   
$EndComp
Wire Wire Line
	3900 3750 3800 3750
Wire Wire Line
	3800 3750 3800 3650
Wire Wire Line
	3700 3650 3700 3750
Wire Wire Line
	3700 3750 3450 3750
Wire Wire Line
	3450 3750 3450 3000
Connection ~ 3450 3000
$Comp
L Mega_2560-core-mini_full_2.2-rescue:DIODE-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue D4
U 1 1 5AABD74C
P 4050 4100
F 0 "D4" H 4050 4000 40  0000 C CNN
F 1 "LL4148" H 4050 4200 40  0000 C CNN
F 2 "Diodes_SMD:D_SOD-123" H 4050 4100 60  0001 C CNN
F 3 "" H 4050 4100 60  0000 C CNN
	1    4050 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	4250 4100 4350 4100
Wire Wire Line
	3850 4100 3750 4100
Wire Wire Line
	4200 3750 4300 3750
Wire Wire Line
	4300 3750 4300 4200
Connection ~ 4300 4100
Wire Wire Line
	4650 3900 4650 3800
$Comp
L Mega_2560-core-mini_full_2.2-rescue:R-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue R21
U 1 1 5BB47A1A
P 4300 4350
F 0 "R21" V 4380 4350 50  0000 C CNN
F 1 "10K" V 4300 4350 50  0000 C CNN
F 2 "Resistors_SMD:R_1206" V 4230 4350 50  0001 C CNN
F 3 "" H 4300 4350 50  0000 C CNN
	1    4300 4350
	-1   0    0    -1  
$EndComp
$Comp
L Mega_2560-core-mini_full_2.2-rescue:GND-RESCUE-Mega_2560_core_mini_full_2.0-Mega_2560-core-mini_full_2.1-rescue-Mega_2560-core-mini_full_2.1-rescue #PWR0125
U 1 1 5BB47A20
P 4300 4550
F 0 "#PWR0125" H 4300 4300 50  0001 C CNN
F 1 "GND" H 4300 4400 50  0000 C CNN
F 2 "" H 4300 4550 50  0000 C CNN
F 3 "" H 4300 4550 50  0000 C CNN
	1    4300 4550
	1    0    0    -1  
$EndComp
Wire Wire Line
	4300 4550 4300 4500
$EndSCHEMATC
