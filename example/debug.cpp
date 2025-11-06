#include <boost/beast/core.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/config.hpp>
#include <boost/beast/http.hpp>
#include <boost/asio.hpp>
#include <thread>


namespace net = boost::asio;
using tcp = boost::asio::ip::tcp;

int main(int argc, char ** argv){
  const net::ip::address addr {net::ip::make_address(argv[1])};
  const unsigned short port {static_cast<unsigned short>(atoi(argv[2]))};
  const std::shared_ptr<std::string> doc_root{std::make_shared<std::string>(argv[3])}; // where frontend index.html and resource store ? 

  net::io_context ioc{1};
  tcp::acceptor acceptor{ioc, {addr, port}};

  while (true){
    tcp::socket socket{ioc};
    acceptor.accept(socket);

    std::thread{std::bind()}
  }
  
}