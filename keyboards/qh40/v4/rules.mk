# MCU name
MCU = STM32F103

# Bootloader selection
BOOTLOADER = stm32duino

# Build Options
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
COMBO_ENABLE = yes
TAP_DANCE_ENABLE = yes
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no           # Enable N-Key Rollover

# KEY_LOCK_ENABLE = yes
SPLIT_KEYBOARD = yes        # Enables split keyboard support


# media
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
# RGB Matrix enabled
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
WS2812_DRIVER = pwm

# Additional thing to reduce compiled size
LTO_ENABLE = yes

SERIAL_DRIVER = usart


# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE