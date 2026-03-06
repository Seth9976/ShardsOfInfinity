// 函数名称: sub_434070
// 虚拟地址: 0x434070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __fastcallsub_434070(int32_t arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_48
    int32_t eax
    char const* const ecx_2
    
    if (data_5bccbc != 0)
        int32_t ecx
        
        if (data_5bb1e4.d != 0x1e)
            ecx = 0
            
            if (data_5bb1f0.d == 0x1e)
                ecx = data_5bb1f0:4
        else
            ecx = data_5bb1e4:4
        
        eax = sub_47a160(ecx, "tbl_player_constructs")
        int32_t ecx_1 = eax
        
        if (ecx_1 != 0)
            uint32_t edx_1 = zx.d(ecx_1.w)
            
            if (edx_1 u< data_5c99a4)
                int32_t esi_1 = data_5c99a0
                eax = edx_1 * 0x1008
                
                if (*(eax + esi_1 + 0x1004) == ecx_1)
                    float xmm0_1[0x4] = *(edx_1 * 0x1008 + esi_1 + 0x6cc)
                    float xmm2_3 =
                        _mm_shuffle_ps(xmm0_1, xmm0_1, 0xff) - _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55)
                    float var_18_1 = xmm2_3 * -0.5f
                    return xmm2_3 * 0f * -0.5f
            
            goto label_4342ba
        
        char const* const var_44 = "DataArray<struct UI2>::DataArrayGet"
        var_48 = 0x6c
        ecx_2 = "id != DATAID_NULL"
        goto label_4342d0
    
    int32_t ecx_3
    
    if (data_5bb1e4.d != 0x1e)
        ecx_3 = 0
        
        if (data_5bb1f0.d == 0x1e)
            ecx_3 = data_5bb1f0:4
    else
        ecx_3 = data_5bb1e4:4
    
    eax = sub_47a160(ecx_3, "tbl_player_constructs")
    int32_t ecx_4 = eax
    
    if (ecx_4 == 0)
        char const* const var_44_1 = "DataArray<struct UI2>::DataArrayGet"
        var_48 = 0x6c
        ecx_2 = "id != DATAID_NULL"
    label_4342d0:
        sub_44e4d0(eax, &data_5559b1, ecx_2, "c:\ax2017\engine\dataarray.h", var_48, 
            "DataArray<struct UI2>::DataArrayGet")
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    uint32_t edx_3 = zx.d(ecx_4.w)
    
    if (edx_3 u>= data_5c99a4)
    label_4342ba:
        char const* const var_44_3 = "DataArray<struct UI2>::DataArrayGet"
        var_48 = 0x6d
        ecx_2 = "DataArrayTryToGet(id) != NULL"
        goto label_4342d0
    
    int32_t esi_2 = data_5c99a0
    eax = edx_3 * 0x1008
    
    if (*(eax + esi_2 + 0x1004) != ecx_4)
        goto label_4342ba
    
    int32_t eax_3 = edx_3 * 0x1008
    bool cond:1_1 = *(arg1 + 0x10) != 0
    int128_t var_30_1 = *(eax_3 + esi_2 + 0x6cc)
    float xmm0_4[0x4] = *(eax_3 + esi_2 + 0x6cc)
    float xmm1_6 = _mm_shuffle_ps(xmm0_4, xmm0_4, 0xff) - _mm_shuffle_ps(xmm0_4, xmm0_4, 0x55)
    float xmm1_7 = xmm1_6 * -1.17499995f
    float var_18_2 = xmm1_7
    float result = xmm1_6 * 0f * -1.17499995f
    
    if (cond:1_1)
        return result
    
    eax = sub_4628c0(ecx_4, 0)
    int32_t ecx_5 = eax
    
    if (ecx_5 == 0)
        char const* const var_44_2 = "DataArray<struct UI2>::DataArrayGet"
        var_48 = 0x6c
        ecx_2 = "id != DATAID_NULL"
        goto label_4342d0
    
    uint32_t edx_4 = zx.d(ecx_5.w)
    
    if (edx_4 u>= data_5c99a4)
        goto label_4342ba
    
    int32_t esi_3 = data_5c99a0
    eax = edx_4 * 0x1008
    
    if (*(eax + esi_3 + 0x1004) != ecx_5)
        goto label_4342ba
    
    float xmm0_6[0x4] = *(edx_4 * 0x1008 + esi_3 + 0x6cc)
    float xmm2_9 = _mm_shuffle_ps(xmm0_6, xmm0_6, 0xaa) f- xmm0_6
    var_18_2 = xmm1_7 + xmm2_9 * 0f * 0.144999996f
    return result + xmm2_9 * 0.144999996f
}
