// 函数名称: sub_461440
// 虚拟地址: 0x461440
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_461440(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541870
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0)
        char* eax_3 = *(arg1 + 0x204)
        
        if (eax_3 != 0 && *eax_3 != 0)
            char* eax_4 = sub_44f000(arg1 + 0x204)
            int32_t temp0_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
                *(arg1 + 0x204) = &data_5559b1
    
    int32_t var_8_2 = 1
    `eh vector vbase constructor iterator'(arg1 + 0x114, 4, 4, sub_44f380)
    int32_t var_8_3 = 2
    int32_t result = `eh vector vbase constructor iterator'(arg1 + 0x4c, 4, 4, sub_44f380)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
