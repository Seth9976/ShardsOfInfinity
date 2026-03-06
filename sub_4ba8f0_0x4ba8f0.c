// 函数名称: sub_4ba8f0
// 虚拟地址: 0x4ba8f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4ba8f0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* edi = *(arg3 + 0x2c)
    int32_t* edi = *(arg3 + 0x2c)
    int32_t var_8 = arg2
    arg2.b = 0
    int32_t eax = sub_4b9020(edi, arg2.b)
    void* ebx = data_cdf428
    
    if (ebx == 0)
        sub_44e4d0(eax, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* ebx_1 = *(ebx + 4)
    ebx_1[3] += 1
    int32_t* result = *ebx_1
    
    if (result == 0)
        sub_4bc5d0(ebx_1)
        result = *ebx_1
    
    *ebx_1 = *result
    result[3] = var_8
    result[4] = arg4
    result[5] = 0x3f800000
    result[6] = 0x3f800000
    result[7] = 0
    result[8] = 0
    result[9] = 0x3f800000
    result[0x2b] = 0
    result[0x2c] = 0
    void* eax_4 = sub_4b9470(edi, result)
    bool cond:0 = result[7] != 2
    *result = 1f / (_mm_cvtepi32_ps(zx.o(**(eax_4 + 8))) f/ *eax_4)
    
    if (not(cond:0))
        *result = 0
    
    result[1] = 0
    result[2] = 0
    int32_t* eax_6 = sub_45cfa0(0xc)
    eax_6[3] += 1
    int32_t* ecx_4 = *eax_6
    
    if (ecx_4 == 0)
        sub_45ce30(eax_6)
        ecx_4 = *eax_6
    
    *eax_6 = *ecx_4
    ecx_4[2] = 0
    *ecx_4 = result
    ecx_4[1] = 0
    ecx_4[2] = edi[2]
    void* eax_9 = edi[2]
    
    if (eax_9 == 0)
        edi[3] += 1
        edi[1] = ecx_4
        edi[2] = ecx_4
        return result
    
    *(eax_9 + 4) = ecx_4
    edi[3] += 1
    edi[2] = ecx_4
    return result
}
