/*
 * eye.h
 *
 * Code generation for function 'eye'
 *
 * C source code generated on: Wed Jan 08 14:21:44 2014
 *
 */

#ifndef __EYE_H__
#define __EYE_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "ekf_coder_types.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern void b_eye(real_T I[9]);
extern void c_eye(real_T I[9]);
extern void eye(real_T n, emxArray_real_T *I);
#endif
/* End of code generation (eye.h) */
