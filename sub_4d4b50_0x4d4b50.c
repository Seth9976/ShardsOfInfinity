// 函数名称: sub_4d4b50
// 虚拟地址: 0x4d4b50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4d4b50()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545840
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_ce24d4 != 0)
        void* ecx_1 = data_ce26e4
        
        if (ecx_1 != 0)
            int32_t eax_3 = *(ecx_1 + 4)
            
            if (eax_3 == 0x22 || eax_3 == 0x1d || eax_3 == 0x19 || eax_3 == 0x1b || eax_3 == 0x1e
                    || eax_3 == 0x20)
                *(ecx_1 + 0x1c) -= 1
            
            data_ce26e4 = 0
        
        sub_4fb6a0()
        sub_478bb0()
        sub_4f4d60()
        int32_t ecx_2 = data_dfc4d0
        
        if (ecx_2 != 0)
            sub_486c10(ecx_2)
            data_dfc4d0 = 0
        
        sub_429100(data_ce24d4 + 0x34)
        sub_429100(data_ce24d4 + 0xc)
        result = sub_4d5320(data_ce24d4)
        int32_t* esi_1 = data_ce24d4
        
        if (esi_1 != 0)
            int32_t var_8_1 = 0
            sub_429100(&esi_1[0xd])
            int32_t var_8_2 = 1
            sub_429100(&esi_1[3])
            int32_t var_8_3 = 2
            sub_4d5320(esi_1)
            int32_t var_8_4 = 0xffffffff
            result = sub_45d050(data_ce24d4, 0x88)
            data_ce24d4 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
