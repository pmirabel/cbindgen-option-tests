/* Generated with cbindgen, don't moidfy manualy */

/* Generated with cbindgen:0.9.1 */

#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>

struct OptionU16 {
  enum class Tag {
    Some,
    None,
  };

  struct Some_Body {
    uint16_t _0;
  };

  Tag tag;
  union {
    Some_Body some;
  };
};

extern "C" {

OptionU16 test_get_none();

OptionU16 test_get_some_10();

} // extern "C"
