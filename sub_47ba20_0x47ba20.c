// 函数名称: sub_47ba20
// 虚拟地址: 0x47ba20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_47ba20(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541960
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0)
        char* eax_3 = *(arg1 + 0x798)
        
        if (eax_3 != 0 && *eax_3 != 0)
            char* eax_4 = sub_44f000(arg1 + 0x798)
            int32_t temp0_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
                *(arg1 + 0x798) = &data_5559b1
    
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        int32_t* ecx_2 = *(arg1 + 0x770)
        
        if (ecx_2 != 0)
            int32_t eax_5 = *(arg1 + 0x778)
            *(arg1 + 0x774) = 0
            sub_45d050(ecx_2, eax_5 * 0x18)
    
    int32_t var_8_3 = 2
    
    if (data_cdf414 != 0 && *(arg1 + 0x764) != 0)
        sub_47b6d0(arg1 + 0x764)
        sub_45d050(*(arg1 + 0x764), *(arg1 + 0x76c) * 0x18)
    
    int32_t var_8_4 = 3
    
    if (data_cdf414 != 0 && *(arg1 + 0x758) != 0)
        sub_47b6d0(arg1 + 0x758)
        sub_45d050(*(arg1 + 0x758), *(arg1 + 0x760) * 0x18)
    
    int32_t var_8_5 = 4
    
    if (data_cdf414 != 0)
        char* eax_8 = *(arg1 + 0x6a0)
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_44f000(arg1 + 0x6a0)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                *(arg1 + 0x6a0) = &data_5559b1
    
    int32_t var_8_6 = 5
    
    if (data_cdf414 != 0)
        char* eax_10 = *(arg1 + 0x698)
        
        if (eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_44f000(arg1 + 0x698)
            int32_t temp2_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                *(arg1 + 0x698) = &data_5559b1
    
    int32_t var_8_7 = 0xffffffff
    int32_t result = `eh vector vbase constructor iterator'(arg1 + 0x10, 0x208, 3, sub_461440)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
