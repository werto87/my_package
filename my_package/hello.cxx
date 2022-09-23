#include "hello.hxx"
#include <boost/asio.hpp>
#include <boost/asio/io_context.hpp>
std::string
helloWorld ()
{
  auto ioContext = boost::asio::io_context{};
  return "Hello World!";
}
