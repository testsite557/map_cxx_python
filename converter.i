%module map
%{
#include "map.hpp"
%}

%include "std_string.i"
%include "std_map.i"
%include "std_unordered_map.i"
%template(map_int_string) std::map<int, std::string>;
%template(unordered_map_int_string) std::unordered_map<int, std::string>;

%include "map.hpp"
