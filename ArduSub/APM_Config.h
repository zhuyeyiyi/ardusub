// User specific config file.  Any items listed in config.h can be overridden here.

// If you used to define your CONFIG_APM_HARDWARE setting here, it is no longer
// valid! You should switch to using a HAL_BOARD flag in your local config.mk.

// uncomment the lines below to disable features (flash sizes listed are for APM2 boards and will underestimate savings on Pixhawk and other boards)
//#define LOGGING_ENABLED       DISABLED            // disable dataflash logging to save 11K of flash space
//#define MOUNT                 DISABLED            // disable the camera gimbal to save 8K of flash space
//#define AC_FENCE              DISABLED            // disable fence to save 2k of flash
//#define CAMERA                DISABLED            // disable camera trigger to save 1k of flash
//#define RANGEFINDER_ENABLED   DISABLED            // disable rangefinder to save 1k of flash
//#define PROXIMITY_ENABLED     DISABLED            // disable proximity sensors
//#define POSHOLD_ENABLED       DISABLED            // disable PosHold flight mode to save 4.5k of flash
#define GRIPPER_ENABLED           DISABLED            // disable gripper to save 500bytes of flash
//#define CLI_ENABLED           DISABLED            // disable the CLI (command-line-interface) to save 21K of flash space
//#define NAV_GUIDED            DISABLED            // disable external navigation computer ability to control vehicle through MAV_CMD_NAV_GUIDED mission commands

// features below are disabled by default on all boards
//#define AVOIDANCE_ENABLED     ENABLED
//#define PROXIMITY_ENABLED     ENABLED
//#define AC_RALLY              ENABLED            // enable rally points library
//#define AC_TERRAIN            ENABLED            // enable terrain library (Must also enable Rally)
//#define OPTFLOW               ENABLED // enable optical flow sensor support
//#define DISALLOW_GCS_MODE_CHANGE_DURING_RC_FAILSAFE   // disable mode changes from GCS during Radio failsafes.  Avoids a race condition for vehicle like Solo in which the RC and telemetry travel along the same link

// other settings
//#define THROTTLE_IN_DEADBAND   100                // redefine size of throttle deadband in pwm (0 ~ 1000)
//#define LAND_REQUIRE_MIN_THROTTLE_TO_DISARM   ENABLED    // when set to ENABLED vehicle will only disarm after landing (in AUTO, LAND or RTL) if pilot has put throttle to zero

//#define HIL_MODE              HIL_MODE_SENSORS    // build for hardware-in-the-loop simulation

// User Hooks : For User Developed code that you wish to run
// Put your variable definitions into the UserVariables.h file (or another file name and then change the #define below).
//#define USERHOOK_VARIABLES "UserVariables.h"
// Put your custom code into the UserCode.pde with function names matching those listed below and ensure the appropriate #define below is uncommented below
//#define USERHOOK_INIT userhook_init();                      // for code to be run once at startup
//#define USERHOOK_FASTLOOP userhook_FastLoop();            // for code to be run at 100hz
//#define USERHOOK_50HZLOOP userhook_50Hz();                  // for code to be run at 50hz
//#define USERHOOK_MEDIUMLOOP userhook_MediumLoop();        // for code to be run at 10hz
//#define USERHOOK_SLOWLOOP userhook_SlowLoop();            // for code to be run at 3.3hz
#define USERHOOK_SUPERSLOWLOOP userhook_SuperSlowLoop();  // for code to be run at 1hz
