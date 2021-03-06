/* -*- Mode: C; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: nil -*- */
/*
 *     Copyright 2011 Couchbase, Inc.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

/*
 * This file contains dummy macros right now so that I can get the rest
 * of libcouchbase compiled. I need to figure out how I want the event
 * stuff to work..
 *
 * @author Trond Norbye
 */
#ifndef MYEVENT_H
#define MYEVENT_H

struct event {
   int a;
};

#define EV_WRITE 0
#define EV_READ 0
#define EV_PERSIST 0


/* int event_base_set(struct event_base *, struct event *); */

#define EVUTIL_CLOSESOCKET(a) closesocket(a)
#endif
