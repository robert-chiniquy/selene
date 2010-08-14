/*
 * Licensed to Paul Querna under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * Paul Querna licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _sln_types_h_
#define _sln_types_h_

/* TODO: public header? */
typedef enum {
  SLN_STATE__UNUSED0 = 0,
  SLN_STATE_INIT = 1,
  SLN_STATE_DEAD = 2,
  SLN_STATE__MAX = 3,
} sln_state_e;

typedef enum {
  SLN_MODE__UNUSED0 = 0,
  SLN_MODE_CLIENT = 1,
  SLN_MODE_SERVER = 2,
  SLN_MODE__MAX = 3,
} sln_mode_e;

struct selene_t {
  sln_mode_e mode;
  sln_state_e state;
};

#endif
