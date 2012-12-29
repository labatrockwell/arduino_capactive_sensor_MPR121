/*!
 *
 * 	@filename 	MPR121.h
 *  @author 	Julio Terra
 *  @date		December 28, 2012
 *  @version     1.0.0
 *  
*/

// MPR121 Register Addresses
#define MHD_R			0x2B
#define NHD_R			0x2C
#define	NCL_R 			0x2D
#define	FDL_R			0x2E
#define	MHD_F			0x2F
#define	NHD_F			0x30
#define	NCL_F			0x31
#define	FDL_F			0x32
#define	ELE0_T			0x41
#define	ELE0_R			0x42
#define	ELE1_T			0x43
#define	ELE1_R			0x44
#define	ELE2_T			0x45
#define	ELE2_R			0x46
#define	ELE3_T			0x47
#define	ELE3_R			0x48
#define	ELE4_T			0x49
#define	ELE4_R			0x4A
#define	ELE5_T			0x4B
#define	ELE5_R			0x4C
#define	ELE6_T			0x4D
#define	ELE6_R			0x4E
#define	ELE7_T			0x4F
#define	ELE7_R			0x50
#define	ELE8_T			0x51
#define	ELE8_R			0x52
#define	ELE9_T			0x53
#define	ELE9_R			0x54
#define	ELE10_T			0x55
#define	ELE10_R			0x56
#define	ELE11_T			0x57
#define	ELE11_R			0x58
#define	FIL_CFG			0x5D
#define	ELE_CFG			0x5E
#define GPIO_CTRL0		0x73
#define	GPIO_CTRL1		0x74
#define GPIO_DATA		0x75
#define	GPIO_DIR		0x76
#define	GPIO_EN			0x77
#define	GPIO_SET		0x78
#define	GPIO_CLEAR		0x79
#define	GPIO_TOGGLE		0x7A
#define	ATO_CFG0		0x7B
#define	ATO_CFGU		0x7D
#define	ATO_CFGL		0x7E
#define	ATO_CFGT		0x7F

#define PRO_T 			0x59 // Touch Threshold register address
#define PRO_R 			0x5A // Touch Threshold register address

#define	PROX_MHDR		0x36 // ELEPROX Max Half Delta Rising register address - 0xFF
#define	PROX_NHDAR 		0x37 // ELEPROX Noise Half Delta Amount Rising register address - 0xFF
#define	PROX_NCLR 		0x38 // ELEPROX Noise Count Limit Rising register address - 0x00
#define	PROX_FDLR 		0x39 // ELEPROX Filter Delay Limit Rising register address - 0x00
#define	PROX_MHDF 		0x3A // ELEPROX Max Half Delta Falling register address - 0x01
#define	PROX_NHDAF		0x3B // ELEPROX Noise Half Delta Amount Falling register address - 0x01
#define	PROX_NCLF  		0x3C // ELEPROX Noise Count Limit Falling register address - 0xFF
#define	PROX_NDLF   	0x3D // ELEPROX Filter Delay Limit Falling register address - 0xFF
#define	PROX_DEB     	0x5B // ELEPROX Debounce register address

#define	PROX_NHDAT   	0x3E // ELEPROX Noise Half Delta Amount Touched register address - 0x00
#define	PROX_NCLT    	0x3F // ELEPROX Noise Count Limit Touched register address - 0x00
#define	PROX_FDLT    	0x40 // ELEPROX Filter Delay Limit Touched register address - 0x00