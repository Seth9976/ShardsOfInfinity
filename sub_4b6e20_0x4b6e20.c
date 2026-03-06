// 函数名称: sub_4b6e20
// 虚拟地址: 0x4b6e20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4b6e20(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544ab0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** ebx = arg2
    int32_t var_8_1 = 0
    int32_t* i = ebx[0xe]
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[4]
        var_8_1.b = 1
        
        if (data_cdf414 != 0)
            char* eax_3 = i_1[1]
            
            if (eax_3 != 0 && *eax_3 != 0)
                char* eax_4 = sub_44f000(&i_1[1])
                int32_t temp2_1 = *(eax_4 + 4)
                *(eax_4 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
                    i_1[1] = &data_5559b1
        
        var_8_1.b = 0
        sub_45d050(i_1, 0x18)
    
    ebx[0x10] = 0
    ebx[0xe] = 0
    ebx[0xf] = 0
    int32_t var_8_2 = 2
    
    if (data_cdf414 != 0)
        char* eax_5 = *ebx
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_44f000(ebx)
            int32_t temp1_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
                *ebx = &data_5559b1
    
    uint32_t result = zx.d(ebx[0x1a].w)
    int32_t ecx_5 = *(arg1 + 0xc)
    *(arg1 + 0xc) = result
    ebx[0x1a] = ecx_5
    *(arg1 + 0x10) -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
