#ifndef __BITS_LIB_C_H__
#define __BITS_LIB_C_H__
#include <stdio.h>
#include <stdint.h>
#include <stddef.h> 
#include <math.h>
#include <memory.h>
#include <assert.h>



#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

	uint32_t Bits2UInt32(uint8_t*bits, int idx, int cnt);
	uint16_t Bits2UInt16(uint8_t*bits, int idx, int cnt);
	uint8_t Bits2UInt8(uint8_t*bits, int idx, int cnt);
	void BitsCopyTo(uint8_t*bits, int idx, int cnt, uint64_t value);

	uint32_t CheckCrc(uint8_t *message, int bits=112);



#ifdef __cplusplus
}
#endif

#endif // __BITS_LIBC_H__