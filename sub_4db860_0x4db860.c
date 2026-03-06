// 函数名称: sub_4db860
// 虚拟地址: 0x4db860
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscallsub_4db860(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx_2 = sub_4dd530(data_ce26e8 + 0x4240, arg2)
    
    if (*(arg1 + 0x5030) == 0)
        int32_t ebx_1 = *ecx_2
        int32_t var_1c = 0
        int32_t var_18[0x4]
        (*__glewGetAttachedShaders)(ebx_1, 4, &var_1c, &var_18)
        int32_t esi_1 = 0
        
        if (var_1c s> 0)
            do
                (*__glewDeleteShader)(var_18[esi_1])
                esi_1 += 1
            while (esi_1 s< var_1c)
        
        (*__glewDeleteProgram)(ebx_1)
    
    void* esi_2 = data_ce26e8
    
    if (*(esi_2 + 0x404c) == arg2)
        *(esi_2 + 0x404c) = 0xffffffff
    
    int32_t edx = *(esi_2 + 0x424c)
    *(esi_2 + 0x424c) = zx.d(ecx_2[0x52].w)
    ecx_2[0x52] = edx
    *(esi_2 + 0x4250) -= 1
    void* result = sub_4d8250(arg2)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
