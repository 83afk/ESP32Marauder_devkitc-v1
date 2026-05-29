#pragma once

#ifndef configs_h

  #define configs_h

  #define POLISH_POTATO

  //#define DEVELOPER

  //// BOARD TARGETS
  //#define MARAUDER_M5STICKC
  //#define MARAUDER_M5STICKCP2
  //#define MARAUDER_MINI
  //#define MARAUDER_V4
  //#define MARAUDER_V6
  //#define MARAUDER_V6_1
  //#define MARAUDER_V7
  //#define MARAUDER_V7_1
  //#define MARAUDER_KIT
  #define GENERIC_ESP32            // AKTIF! Karena lu rakit sendiri pakai DevKit
  //#define MARAUDER_FLIPPER
  //#define MARAUDER_MULTIBOARD_S3
  //#define ESP32_LDDB
  //#define MARAUDER_DEV_BOARD_PRO
  //#define XIAO_ESP32_S3
  //#define MARAUDER_REV_FEATHER
  //#define MARAUDER_CYD_MICRO // 2432S028
  //#define MARAUDER_CYD_2USB // Another 2432S028 but it has tWo UsBs OoOoOoO
  //#define MARAUDER_CYD_GUITION // ESP32-2432S024 GUITION
  //#define MARAUDER_CYD_3_5_INCH
  //#define MARAUDER_C5
  //#define MARAUDER_CARDPUTER
  //#define MARAUDER_CARDPUTER_ADV
  //#define MARAUDER_V8
  //#define MARAUDER_MINI_V3
  //#define MARAUDER_M5_NANO_C6
  //#define DUAL_MINI_C5
  //// END BOARD TARGETS

  #define JSON_SETTING_SIZE 2048

  #define MARAUDER_VERSION "v1.12.2"

  #define GRAPH_REFRESH   100

  #define TRACK_EVICT_SEC 90 // Seconds before marking tracked MAC as tombstone

  #define DUAL_BAND_CHANNELS 51

  #define DISPLAY_BUFFER_LIMIT 20

  #define MODE_OFF 0
  #define MODE_RAINBOW 1
  #define MODE_ATTACK 2
  #define MODE_SNIFF 3
  #define MODE_CUSTOM 4

  //// HARDWARE NAMES
  #ifdef GENERIC_ESP32
    #define HARDWARE_NAME "ESP32 DIY ST7789"
  #else
    #define HARDWARE_NAME "ESP32"
  #endif
  //// END HARDWARE NAMES

  //// BOARD FEATURES
  #ifdef GENERIC_ESP32
    #define HAS_BT
    #define HAS_BUTTONS          // AKTIF! Fitur 4 tombol lu
    #define HAS_SCREEN           // AKTIF! Layar ST7789 lu
    #define HAS_MINI_SCREEN      // AKTIF! Set ukuran teks pas di layar kecil
    #define HAS_SD               // AKTIF! Fitur SD Card tambahan yang lu minta
  #endif
  //// END BOARD FEATURES

  //// POWER MANAGEMENT
  //// END POWER MANAGEMENT

  //// BUTTON DEFINITIONS
  #ifdef HAS_BUTTONS
    #ifdef GENERIC_ESP32
      // Pengaturan Pin Navigasi (Silahkan disolder sesuai nomor GPIO ini)
      #define L_BTN 12   // Tombol Kiri (Fungsi: BACK)
      #define C_BTN 0    // Tombol Tengah (Fungsi: SELECT/ENTER -> Pakai pin tombol Boot bawaan)
      #define U_BTN 14   // Tombol Atas (Fungsi: UP)
      #define R_BTN -1   // Dimatikan karena tombol lu cuma ada 4
      #define D_BTN 27   // Tombol Bawah (Fungsi: DOWN)

      #define HAS_L
      #define HAS_U
      #define HAS_D
      #define HAS_C

      // Logika resistor pull-down eksternal 10k lu (Ditekan = HIGH / false)
      #define L_PULL false
      #define C_PULL true  // Pin 0 pakai internal pull-up bawaan board ESP32
      #define U_PULL false
      #define R_PULL false
      #define D_PULL false
    #endif
  #endif
  //// END BUTTON DEFINITIONS

  //// DISPLAY DEFINITIONS
  #ifdef HAS_SCREEN
    #ifdef GENERIC_ESP32
      #define CHAN_PER_PAGE 7
      #define SCREEN_CHAR_WIDTH 40

      // Resolusi Layar Kotak 1.4" milik lu (240x240)
      #ifndef TFT_WIDTH
        #define TFT_WIDTH 240
      #endif
      #ifndef TFT_HEIGHT
        #define TFT_HEIGHT 240
      #endif

      #define GRAPH_VERT_LIM TFT_HEIGHT/2 - 1
      #define EXT_BUTTON_WIDTH 0
      #define SCREEN_ORIENTATION 0 // Jika layar kebalik, ganti angka ini (0-3) nanti

      #define CHAR_WIDTH 6
      #define SCREEN_WIDTH TFT_WIDTH
      #define SCREEN_HEIGHT TFT_HEIGHT
      #define HEIGHT_1 TFT_WIDTH
      #define WIDTH_1 TFT_HEIGHT
      #define STANDARD_FONT_CHAR_LIMIT (TFT_WIDTH/6)
      #define TEXT_HEIGHT (TFT_HEIGHT/14) 
      #define BOT_FIXED_AREA 0 
      #define TOP_FIXED_AREA 40 
      #define YMAX TFT_HEIGHT 
      #define minimum(a,b)     (((a) < (b)) ? (a) : (b))
      
      #define MENU_FONT &FreeMono9pt7b 
      #define BUTTON_SCREEN_LIMIT 4 
      #define BUTTON_ARRAY_LEN BUTTON_SCREEN_LIMIT
      #define STATUS_BAR_WIDTH (TFT_HEIGHT/16)
      #define LVGL_TICK_PERIOD 6
    
      #define FRAME_X 10
      #define FRAME_Y 64
      #define FRAME_W 120
      #define FRAME_H 50
    
      #define REDBUTTON_X FRAME_X
      #define REDBUTTON_Y FRAME_Y
      #define REDBUTTON_W (FRAME_W/2)
      #define REDBUTTON_H FRAME_H
    
      #define GREENBUTTON_X (REDBUTTON_X + REDBUTTON_W)
      #define GREENBUTTON_Y FRAME_Y
      #define GREENBUTTON_W (FRAME_W/2)
      #define GREENBUTTON_H FRAME_H
    
      #define STATUSBAR_COLOR 0x4A49
    #endif
  #endif
  //// END DISPLAY DEFINITIONS

  //// SD CARD CONFIGURATION
  #ifdef HAS_SD
    #ifdef GENERIC_ESP32
      #define SD_CS 4            // Pin Chip Select (CS) untuk modul SD Card lu
    #endif
  #endif
  //// END SD CARD CONFIGURATION

#endif
