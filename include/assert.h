
/* Include the primary system assert.h */
#include_next <assert.h>


/* now add the missing definition of static_assert for C11 code */
/* this was added to the 10.11 SDK, but we can't easily check for that, so we use ENV_MIN_REQUIRED instead */

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && ((__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__-0) < 101100)

#ifndef _ASSERT_H_
#define _ASSERT_H_

#ifndef __cplusplus
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#define static_assert _Static_assert
#endif /* __STDC_VERSION__ */
#endif /* !__cplusplus */

#endif /* _ASSERT_H_ */

#endif /* __ENVIRONEMENT */