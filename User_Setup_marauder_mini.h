// ====== USER SETUP UNTUK ESP32 DIY ST7789 240x240 (TANPA PIN CS) ======

#define ST7789_DRIVER      // Mengaktifkan Driver ST7789

#define TFT_RGB_ORDER TFT_BGR  // Set ke BGR biar warna tidak kebalik

// --- SET RESOLUSI LAYAR KOTAK LU ---
#define TFT_WIDTH  240     
#define TFT_HEIGHT 240     

// --- KONEKSI PIN FISIK LAYAR KE ESP32 30-PIN ---
#define TFT_MISO 19        // Jalur SPI Sharing (Dipakai bareng NRF & SD Card)
#define TFT_MOSI 23        // Jalur SPI Sharing (Hubungkan ke SDA Layar)
#define TFT_SCLK 18        // Jalur SPI Sharing (Hubungkan ke SCL Layar)
#define TFT_CS   -1        // DI-SET -1 KARENA LAYAR LU GAK ADA PIN CS! (Aman)
#define TFT_DC    2        // Data/Command (Hubungkan ke DC / RS Layar)
#define TFT_RST   4        // Reset (Hubungkan ke RES / RST Layar)
#define TOUCH_CS -1        // Matikan fungsi touch screen

// --- LOADING FONTS ---
#define LOAD_GLCD   
#define LOAD_FONT2  
#define LOAD_FONT4  
#define LOAD_FONT6  
#define LOAD_FONT7  
#define LOAD_FONT8  
#define LOAD_GFXFF  

#define SMOOTH_FONT

// --- KECEPATAN BUS SPI ---
#define SPI_FREQUENCY       40000000 
#define SPI_READ_FREQUENCY  20000000
