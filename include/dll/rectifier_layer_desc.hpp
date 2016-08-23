//=======================================================================
// Copyright (c) 2014-2016 Baptiste Wicht
// Distributed under the terms of the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

#pragma once

namespace dll {

/*!
 * \brief Descriptor for a rectifier layer (abs)
 */
template <rectifier_method M = rectifier_method::ABS>
struct rectifier_layer_desc {
    static constexpr const rectifier_method method = M; ///< The rectifier method to use

    /*!
     * A list of all the parameters of the descriptor
     */
    using parameters = cpp::type_list<>;

    using layer_t = rectifier_layer<rectifier_layer_desc<M>>; ///< The constructed layer type
};

} //end of dll namespace
