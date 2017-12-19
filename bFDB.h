/******************************************************************************
 * reserved !
 ******************************************************************************/

#ifndef __BFDB_H__
#define __BFDB_H__


/* relating to platform  -----------------------------------------------------*/
typedef unsigned char  bFDB_U8;
typedef signed   char  bFDB_S8;
typedef unsigned short bFDB_U16;
typedef signed   short bFDB_S16;
typedef unsigned int   bFDB_U32;
typedef signed   int   bFDB_S32;

typedef enum
{
	BFDB_FALSE = 0,
	BFDB_TRUE = 1,
}bFDB_bool_t;

#define bFDB_NULL      ((void *)0)
/*******************************************************************************/

/* relating to flash  ---------------------------------------------------------*/

#define bFDB_FLASH_START_ADDRESS          (0X0)
#define bFDB_FLASH_END_ADDRESS            (16 * 1024 * 1024)

#define bFDB_FLASH_ERASE_UNIT             (4 * 1024)
/*******************************************************************************/









#endif

/******************************************************************************
 * reserved !
 ******************************************************************************/


















