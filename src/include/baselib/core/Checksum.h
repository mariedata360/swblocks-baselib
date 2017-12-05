/*
 * This file is part of the swblocks-baselib library.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __BL_CHECKSUM_H_
#define __BL_CHECKSUM_H_

#include <boost/crc.hpp>

namespace bl
{
    namespace cs
    {
        using boost::crc_32_type;

    } // cs

} // bl

#endif /* __BL_CHECKSUM_H_ */

