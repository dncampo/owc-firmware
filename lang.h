#define LANG

#ifdef LANG_SP
	#define 	LANG_FIRMWARE_VER	"Version sistema "
	#define 	LANG_TIME_ZONE		"Zona horar. GMT:"
	#define 	LANG_ENA_NTP_SYNC	"Hab sincron NTP?"
	#define 	LANG_ENA_DHCP		"Habilitar DHCP ?"	
	#define 	LANG_STA_IP1		"IP1 estatica:   "
	#define 	LANG_STA_IP2		"IP2 estatica:   "
	#define 	LANG_STA_IP3		"IP3 estatica:   "
	#define 	LANG_STA_IP4		"IP4 estatica:   "
	#define 	LANG_GTW_IP1		"Puerta entr IP1:"
	#define 	LANG_GTW_IP2		"Puerta entr IP2:"
	#define 	LANG_GTW_IP3		"Puerta entr IP3:"
	#define 	LANG_GTW_IP4		"Puerta entr IP4:"
	#define 	LANG_HTTP_PORT		"Puerto HTTP:    "
	#define 	LANG_DASHES			"----------------"
	#define 	LANG_HRW_VER		"Version hardware"
	#define 	LANG_NUM_EXP_BOARD	"# placas expans:"
	#define 	LANG_STN_DELAY		"Espera estaci(s)"
	#define 	LANG_MASTER_1		"Maestro 1:      "
	#define 	LANG_MASTER_1_ON	"Maest 1 habilit:"
	#define 	LANG_MASTER_1_OFF	"Maest 1 deshabi:"
	#define 	LANG_RAIN_SENSOR	"Sensor lluvia:  "
	#define 	LANG_NORM_OPEN		"Normal. abierto?"
	#define 	LANG_WAT_LEVEL		"Nivel regado:   "
	#define 	LANG_DEV_ENA		"Disposi habilit?"
	#define 	LANG_IGN_PWD		"Ignorar passwd? "
	#define 	LANG_DEV_ID			"ID dispositivo: "
	#define 	LANG_LCD_CON		"Contraste LCD:  "
	#define 	LANG_LCD_BRI		"Brillo LCD:     "
	#define 	LANG_LCD_DIM		"Apagado LCD:    "
	#define 	LANG_DC_BOOST_TIME	"????????????????"
	#define 	LANG_WEATHER_ALGO	"Usar pronostico?"
	#define 	LANG_NTP_SERV_IP1	"IP1 serv. hora: "
	#define 	LANG_NTP_SERV_IP2	"IP2 serv. hora: "
	#define 	LANG_NTP_SERV_IP3	"IP3 serv. hora: "
	#define 	LANG_NTP_SERV_IP4	"IP4 serv. hora: "
	#define 	LANG_ENA_LOGGING	"Hab. registros? "
	#define 	LANG_MASTER_2		"Maestro 2:      "
	#define 	LANG_MASTER_2_ON	"Maest 2 habilit:"
	#define 	LANG_MASTER_2_OFF	"Maest 2 deshabi:"
	#define 	LANG_FIRMWARE_MIN	"Ver firmwar min:"
	#define 	LANG_PULSE_RATE		"Frecuen. pulso :"
	#define 	LANG_AS_REM_EXT		"Como ext remota?"
	#define 	LANG_FAC_RESET		"Val por defecto?"
	
	#define 	LANG_MONDAY		"Lun\0"
	#define 	LANG_TUESDAY	"Mar\0"
	#define 	LANG_WEDNESDAY	"Mie\0"
	#define 	LANG_THURSDAY	"Jue\0"
	#define 	LANG_FRIDAY		"Vie\0"
	#define 	LANG_SATURDAY	"Sab\0"
	#define 	LANG_SUNDAY		"Dom\0"

	#define 	LANG_CONNECTING		"Conectando..."
	#define 	LANG_RESETTING		"Reestableciendo."
	#define 	LANG_PLS_WAIT		"Espere por favor"
	#define 	LANG_SET_OPTS		"=Estab opciones="
	#define 	LANG_HOLD_B3_SAVE	"Mant B3 guarda"
	#define 	LANG_BRAND			"OpenWaterControl"
	#define 	LANG_YES			"Si"
	#define 	LANG_NO				"No"
	#define 	LANG_SEC			" seg"

	#define 	LANG_DISABLED		"-Deshabilitado!-"
	
	#define 	LANG_OWC_IP			" (owcip)"
	#define		LANG_GW_IP			" (gwip)"
	#define		LANG_RUN_A_PROGRAM	"Ejecutar Progra:"
	#define		LANG_PRES_B3_LIST	"Pres B3 p/listar"
	#define		LANG_PRES_B3_START	"Pres B3 p/inicia"
	#define		LANG_NTP_SYNCING	"Sincroniz NTP..."	


#else
	//LANG_EN by default
	#define 	LANG_FIRMWARE_VER	"Firmware version"
	#define 	LANG_TIME_ZONE		"Time zone (GMT):"
	#define 	LANG_ENA_NTP_SYNC	"Enable NTP sync?"
	#define 	LANG_ENA_DHCP		"Enable DHCP?    "	
	#define 	LANG_STA_IP1		"Static ip1:     "
	#define 	LANG_STA_IP2		"Static ip2:     "
	#define 	LANG_STA_IP3		"Static ip3:     "
	#define 	LANG_STA_IP4		"Static ip4:     "
	#define 	LANG_GTW_IP1		"Gateway ip1:    "
	#define 	LANG_GTW_IP2		"Gateway ip2:    "
	#define 	LANG_GTW_IP3		"Gateway ip3:    "
	#define 	LANG_GTW_IP4		"Gateway ip4:    "
	#define 	LANG_HTTP_PORT		"HTTP Port:      "
	#define 	LANG_DASHES			"----------------"
	#define 	LANG_HRW_VER		"Hardware version"
	#define 	LANG_NUM_EXP_BOARD	"# of exp. board:"
	#define 	LANG_STN_DELAY		"Stn. delay (sec)"
	#define 	LANG_MASTER_1		"Master 1 (Mas1):"
	#define 	LANG_MASTER_1_ON	"Mas1  on adjust:"
	#define 	LANG_MASTER_1_OFF	"Mas1 off adjust:"
	#define 	LANG_RAIN_SENSOR	"Rain sensor:    "
	#define 	LANG_NORM_OPEN		"Normally open?  "
	#define 	LANG_WAT_LEVEL		"Watering level: "
	#define 	LANG_DEV_ENA		"Device enabled? "
	#define 	LANG_IGN_PWD		"Ignore password?"
	#define 	LANG_DEV_ID			"Device ID:      "
	#define 	LANG_LCD_CON		"LCD contrast:   "
	#define 	LANG_LCD_BRI		"LCD brightness: "
	#define 	LANG_LCD_DIM		"LCD dimming:    "
	#define 	LANG_DC_BOOST_TIME	"DC boost time:  "
	#define 	LANG_WEATHER_ALGO	"Use Weather?    "
	#define 	LANG_NTP_SERV_IP1	"NTP server ip1: "
	#define 	LANG_NTP_SERV_IP2	"NTP server ip2: "
	#define 	LANG_NTP_SERV_IP3	"NTP server ip3: "
	#define 	LANG_NTP_SERV_IP4	"NTP server ip4: "
	#define 	LANG_ENA_LOGGING	"Enable logging? "
	#define 	LANG_MASTER_2		"Master 2 (Mas2):"
	#define 	LANG_MASTER_2_ON	"Mas2  on adjust:"
	#define 	LANG_MASTER_2_OFF	"Mas2 off adjust:"
	#define 	LANG_FIRMWARE_MIN	"Firmware minor: "
	#define 	LANG_PULSE_RATE		"Pulse rate:     "
	#define 	LANG_AS_REM_EXT		"As remote ext.? "
	#define 	LANG_FAC_RESET		"Factory reset?  "
	
	#define 	LANG_MONDAY		"Mon\0"
	#define 	LANG_TUESDAY	"Tue\0"
	#define 	LANG_WEDNESDAY	"Wed\0"
	#define 	LANG_THURSDAY	"Thu\0"
	#define 	LANG_FRIDAY		"Fri\0"
	#define 	LANG_SATURDAY	"Sat\0"
	#define 	LANG_SUNDAY		"Sun\0"
	
	#define 	LANG_CONNECTING		"Connecting..."
	#define 	LANG_RESETTING		"Resetting..."
	#define 	LANG_PLS_WAIT		"Please Wait..."
	#define 	LANG_SET_OPTS		"==Set Options=="
	#define 	LANG_HOLD_B3_SAVE	"Hold B3 to save"
	#define 	LANG_BRAND			"OpenWaterControl"
	#define 	LANG_YES			"Yes"
	#define 	LANG_NO				"No"
	#define 	LANG_SEC			" sec"	

	#define 	LANG_DISABLED	"-Disabled!-"
	
	#define 	LANG_OWC_IP			" (owcip)"
	#define		LANG_GW_IP			" (gwip)"
	#define		LANG_RUN_A_PROGRAM	"Run a Program:"
	#define		LANG_PRES_B3_LIST	"Click B3 to list"
	#define		LANG_PRES_B3_START	"Hold B3 to start"
	#define		LANG_NTP_SYNCING	"NTP Syncing..."
#endif
