#include <iostream>
#include <boost/asio/ip/udp.hpp>

int main(int argc, char * argv[])
{
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " IPv6." << std::endl;
        exit(EXIT_FAILURE);
    }

    boost::asio::io_service io_service;
    boost::asio::ip::udp::resolver r(io_service);
    boost::asio::ip::udp::resolver::query q(argv[1], "1234");

    boost::asio::ip::udp::resolver::iterator i = r.resolve(q);

    exit(EXIT_SUCCESS);
}
