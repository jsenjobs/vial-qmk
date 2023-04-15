# MCU name
MCU = STM32F103

# Bootloader selection
BOOTLOADER = stm32duino

# Build Options
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
COMBO_ENABLE = yes
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
AUDIO_ENABLE = no           # Audio output
LTO_ENABLE = yes
SPLIT_KEYBOARD = yes        # Enables split keyboard support
KEY_LOCK_ENABLE = yes

# rgb matrix
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow

SERIAL_DRIVER = usart