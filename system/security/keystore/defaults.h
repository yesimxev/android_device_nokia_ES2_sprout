/*
 * Copyright (C) 2013 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef KEYSTORE_DEFAULTS_H_
#define KEYSTORE_DEFAULTS_H_

/*
 * These must be kept in sync with
 * frameworks/base/keystore/java/android/security/KeyPairGeneratorSpec.java
 */

/* DSA */
#define DSA_DEFAULT_KEY_SIZE 1024
#define DSA_MIN_KEY_SIZE 512
#define DSA_MAX_KEY_SIZE 8192

/* EC */
#define EC_DEFAULT_KEY_SIZE 256
#define EC_MIN_KEY_SIZE 192
#define EC_MAX_KEY_SIZE 521

/* RSA */
#define RSA_DEFAULT_KEY_SIZE 2048
#define RSA_DEFAULT_EXPONENT 0x10001
#define RSA_MIN_KEY_SIZE 512
#define RSA_MAX_KEY_SIZE 8192

#endif /* KEYSTORE_DEFAULTS_H_ */
