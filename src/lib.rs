//LIB.RS
#[repr(C)]                //Edit: also tried repr(u16)
#[derive(Debug, Clone, Copy, PartialEq)]
// Cbindgen tweak to represent an option
pub enum OptionU16 {
    Some(u16),
    None
}

#[no_mangle] 
pub extern "C" fn test_get_some_10() -> OptionU16 {
    OptionU16::Some(10)
}

#[no_mangle] 
pub extern "C" fn test_get_none() -> OptionU16 {
    OptionU16::None
}

