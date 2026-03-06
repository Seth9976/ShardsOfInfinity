// 函数名称: sub_4612e0
// 虚拟地址: 0x4612e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4612e0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542849
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    int32_t var_18 = 0xe48e68
    sub_4613b0(0xe48e68)
    int32_t var_8_2 = 0
    int32_t var_14_1 = 1
    _memset(0xe48e68, 0, 0x208)
    void* edi = data_dff710
    
    if (*(edi + 8) != 0)
        for (int32_t i = 0; i != 0xffffffff; )
            int32_t eax_3 = *(edi + 4)
            int32_t ecx_3 = i * 0xf
            i += 1
            
            if (i s>= *(edi + 8))
                i = 0xffffffff
            
            void* edx_1 = eax_3 + (ecx_3 << 2)
            sub_48af50(eax_3, *(edx_1 + 0xc), 0xe48e68, edx_1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0xe48e68
}
