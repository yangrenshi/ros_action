#ifndef DBX_PLUGINS_H_
#define DBX_PLUGINS_H_
#include "de03_plug/dbx_bash.h"

// #include <cmath>

namespace dbx_plugins_ns
{
  class SanBian : public dbx_base_ns::Dbx_Base
  {
    public:
      SanBian()
      {
        side_length_ = 0.0;
      }

      void init(double side_length)
      {
        this->side_length_ = side_length;
      }

      double getlength()
      {
        return 0.5 * side_length_ * 3;
      }

    private:
      double side_length_;
  };

   class SiBian : public dbx_base_ns::Dbx_Base
  {
    public:
      SiBian()
      {
        side_length_ = 0.0;
      }

      void init(double side_length)
      {
        this->side_length_ = side_length;
      }

      double getlength()
      {
        return 0.5 * side_length_ * 4;
      }
      
    private:
      double side_length_;
  };
};
#endif
