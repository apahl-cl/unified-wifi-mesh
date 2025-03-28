/**
 * Copyright 2023 Comcast Cable Communications Management, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef EM_SM_H
#define EM_SM_H

#include "em_base.h"

class em_sm_t {
	
	em_state_t	m_state;

public:
	int set_state(em_state_t state);
	bool validate_sm(em_state_t state);
	em_state_t get_state() { return m_state; }

	void init_sm(em_service_type_t service);
	
    em_sm_t();
    ~em_sm_t();
};

#endif
