#ifndef HAWKTRACER_CLIENT_UTILS_STREAM_FACTORY_HPP
#define HAWKTRACER_CLIENT_UTILS_STREAM_FACTORY_HPP

#include "hawktracer/parser/stream.hpp"

#include <memory>

namespace HawkTracer
{
namespace ClientUtils
{

std::unique_ptr<parser::Stream> make_stream_from_string(const std::string& source_description, const bool wait_for_server);

} // namespace ClientUtils
} // namespace HawkTracer

#endif // HAWKTRACER_CLIENT_UTILS_STREAM_FACTORY_HPP
