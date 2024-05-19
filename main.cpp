#include <iostream>
#include <bitcoin/system.hpp>

namespace bc = libbitcoin;

int main() {
  // Create a simple hash using libbitcoin
  bc::system::hash_digest hash = bc::system::null_hash;

  // Print the hash (it should be all zeros)
  std::cout << "Null hash: " << bc::system::encode_base16(hash) << std::endl;

  return 0;
}
