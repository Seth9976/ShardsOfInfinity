// 函数名称: sub_546910
// 虚拟地址: 0x546910
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_546910()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540d50
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 1
    sub_412a40(&data_5bb0f8)
    
    if (data_5baf14.d != 0)
        sub_412ab0(&data_5baf14)
        int32_t eax_3 = data_5baf14.d
        
        if (eax_3 != 0)
            _aligned_free_base(eax_3)
        
        __builtin_memset(&data_5baf14, 0, 0x14)
        data_5baf2c = 0
    
    var_8_1.b = 0
    void* result = `eh vector vbase constructor iterator'(0x5baaf4, 0x10, 0x40, sub_411610)
    var_8_1.b = 3
    
    if (data_cdf414 != 0)
        result = data_5baaf0
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&data_5baaf0)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
                data_5baaf0 = &data_5559b1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
