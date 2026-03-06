// 函数名称: ?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z
// 虚拟地址: 0x51eedf
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z() __noreturn
{
    // 第一条实际指令: int32_t var_4 = 4
    int32_t var_4 = 4
    int32_t (* var_c)(void* arg1) = sub_546890
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    int32_t var_24 = __security_cookie ^ &var_4
    int32_t* var_14 = &var_24
    void* const var_28 = &data_51eeeb
    int32_t var_8_1 = 0xffffffff
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(sub_51e354() + 0x1c) != 0)
        sub_52f140()
        noreturn
    
    int32_t var_8 = 0
    _unexpected()
    noreturn
}
