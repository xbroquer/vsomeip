// Copyright (C) 2024 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef VSOMEIP_V3_BOOST_COMPAT_HPP_
#define VSOMEIP_V3_BOOST_COMPAT_HPP_

#include <boost/version.hpp>
#include <boost/asio/socket_base.hpp>

// Boost 1.87+ removed socket_base::max_connections in favor of max_listen_connections
#if BOOST_VERSION >= 108700
    #define VSOMEIP_MAX_CONNECTIONS boost::asio::socket_base::max_listen_connections
#else
    #define VSOMEIP_MAX_CONNECTIONS boost::asio::socket_base::max_connections
#endif

#endif // VSOMEIP_V3_BOOST_COMPAT_HPP_
