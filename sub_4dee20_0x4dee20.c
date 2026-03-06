// 函数名称: sub_4dee20
// 虚拟地址: 0x4dee20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4dee20(int32_t arg1, int128_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* eax_1 = arg2[1].d
    void* eax_1 = arg2[1].d
    void* var_c = eax_1
    int128_t var_1c = *arg2
    int32_t* ecx
    void* ebx
    
    if (arg5 == 1)
        ebx = var_1c.d
    else
        eax_1, ecx = sub_45cd70(var_1c:0xc.d * var_1c:8.d)
        ebx = eax_1
        var_1c.d = ebx
    
    int32_t var_2c = arg4
    char result = sub_4ded00(eax_1, &var_1c, ecx, arg3)
    
    if (result == 0)
        return result
    
    if (arg5 != 1)
        int32_t temp0_1 = divs.dp.d(sx.q(var_1c:4.d), arg5)
        int32_t var_54_1 = 0x3f800000
        int32_t eax_6
        int32_t edx_2
        edx_2:eax_6 = sx.q(var_1c:8.d)
        *(arg2 + 4) = temp0_1
        float ecx_4 = divs.dp.d(edx_2:eax_6, arg5)
        int32_t var_58_1 = 0x3f800000
        int32_t var_5c_1 = 0
        *(arg2 + 8) = ecx_4
        int32_t temp0_3 = divs.dp.d(sx.q(var_1c:0xc.d), arg5)
        int32_t var_70_1 = *arg2
        *(arg2 + 0xc) = temp0_3
        void var_64
        sub_50c850(temp0_3, ebx, ecx_4, var_1c:4.d, var_1c:8.d, ecx_4, var_70_1, temp0_1, ecx_4, 
            var_64, 0f)
        
        if (ebx != 0)
            _aligned_free_base(ebx)
    
    return 1
}
