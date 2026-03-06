// 函数名称: sub_486f60
// 虚拟地址: 0x486f60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_486f60(int32_t arg1, char* arg2, void* arg3, char* arg4, char arg5, char arg6)
{
    // 第一条实际指令: int32_t result_1
    int32_t result_1
    int32_t var_c = __security_cookie ^ &result_1
    int32_t eax_1
    eax_1:1.b = arg5
    int32_t ebx
    ebx.b = arg6
    char* edi = arg2
    void* var_40 = arg3
    result_1 = 0
    eax_1.b = arg4[1]
    arg2.b = arg4[3]
    *arg4 = eax_1.b
    arg4[1] = eax_1:1.b
    arg4[2] = arg2.b
    arg4[3] = ebx.b
    *(arg4 + 8) = 0xffffffff
    
    if (edi[1] != 0 || edi[3] != 0 || edi[2] != 0)
        arg4[1] = 0
        @__security_check_cookie@4(var_c ^ &result_1)
        return 0
    
    arg3.b = arg2.b
    eax_1.b = ebx.b
    void var_3c
    int32_t result
    
    if (arg2.b != 0 || ebx.b != 1 || eax_1:1.b != ebx.b)
        result = 0
    else
        int32_t* ebx_1 = *(var_40 + 0xfc)
        
        if (ebx_1 != 0)
            sub_481e00(ebx_1, &var_3c)
            eax_1, arg3 = sub_4820b0(&var_3c)
            arg3.b = arg4[2]
            eax_1.b = arg4[3]
        
        if (*edi == 0)
            arg4[4] = 1
            result = 0
        else
            result = 1
            result_1 = 1
    
    if (arg3.b == 1)
        arg3.b = arg4[3]
        eax_1.b = arg3.b
        
        if (arg3.b == 0 && *arg4 == 1 && arg4[4] == 1)
            result = 1
            result_1 = 1
    
    arg3.b = eax_1.b
    
    if (eax_1.b == 0 && *arg4 == eax_1.b && arg4[1] == 1)
        int32_t* edi_1 = *(var_40 + 0x100)
        arg3.b = eax_1.b
        
        if (edi_1 != 0)
            sub_481e00(edi_1, &var_3c)
            sub_4820b0(&var_3c)
            arg3.b = arg4[3]
            result = result_1
    
    if (arg3.b == 0)
        arg4[4] = arg3.b
    
    @__security_check_cookie@4(var_c ^ &result_1)
    return result
}
