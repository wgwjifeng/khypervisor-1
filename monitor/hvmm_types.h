#ifndef __HVMM_TYPES_H__
#define __HVMM_TYPES_H__

typedef enum {
	HVMM_STATUS_SUCCESS = 0,
	HVMM_STATUS_UNKNOWN_ERROR = -1,
	HVMM_STATUS_UNSUPPORTED_FEATURE = -2,
	HVMM_STATUS_BUSY = -3,
} hvmm_status_t;

#endif
