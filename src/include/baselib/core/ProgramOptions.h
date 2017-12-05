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

#ifndef __BL_PROGRAMOPTIONS_H_
#define __BL_PROGRAMOPTIONS_H_

#include <baselib/core/detail/BoostIncludeGuardPush.h>
#include <boost/program_options.hpp>
#include <baselib/core/detail/BoostIncludeGuardPop.h>

#include <baselib/core/BaseIncludes.h>

namespace bl
{
    /*
     * Just import the program options class from the boost namespace
     */

    namespace po = boost::program_options;

    /**
     * @brief class ProgramOptions
     */

    template
    <
        typename E = void
    >
    class ProgramOptionsT
    {
    public:

    };

    typedef ProgramOptionsT<> ProgramOptions;

} // bl

#endif /* __BL_PROGRAMOPTIONS_H_ */
