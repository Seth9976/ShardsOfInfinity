// 函数名称: ?setSBUpLow@@YAXPAU__crt_multibyte_data@@@Z
// 虚拟地址: 0x536f82
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t?setSBUpLow@@YAXPAU__crt_multibyte_data@@@Z(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_730 = edi
    uint32_t result
    
    if (*(arg1 + 4) == 0xfde9)
    label_5370bd:
        result = arg1 + 0x119
        int32_t edx_2 = 0xffffff9f - result
        void* i = nullptr
        int32_t var_724_1 = edx_2
        
        do
            void* eax_3 = result + i
            char* var_720_1 = eax_3
            void* eax_6
            
            if (eax_3 + 0x20 + edx_2 u<= 0x19)
                *(arg1 + i + 0x19) |= 0x10
                eax_6 = i + 0x20
            else if (&var_720_1[edx_2] u> 0x19)
                eax_6.b = 0
            else
                void* eax_9 = arg1 + 0x19 + i
                *eax_9 |= 0x20
                eax_6 = i - 0x20
            
            i += 1
            *var_720_1 = eax_6.b
            result = arg1 + 0x119
            edx_2 = var_724_1
        while (i u< 0x100)
    else
        CPINFO cPInfo
        
        if (GetCPInfo(*(arg1 + 4), &cPInfo) == 0)
            goto label_5370bd
        
        uint8_t var_108[0x100]
        uint32_t i_1
        
        for (i_1 = 0; i_1 u< 0x100; i_1 += 1)
            var_108[i_1] = i_1.b
        
        i_1.b = cPInfo.LeadByte[0]
        var_716
        void* ecx = &var_716
        var_108[0] = 0x20
        
        while (i_1.b != 0)
            uint32_t edx_1 = zx.d(*(ecx + 1))
            
            for (i_1 = zx.d(i_1.b); i_1 u<= edx_1; i_1 += 1)
                if (i_1 u>= 0x100)
                    break
                
                var_108[i_1] = 0x20
            
            ecx += 2
            i_1.b = *ecx
        
        uint16_t var_708[0x200]
        ___acrt_GetStringTypeA(nullptr, 1, &var_108, 0x100, &var_708, *(arg1 + 4), 0)
        char var_208[0x100]
        ___acrt_LCMapStringA(nullptr, *(arg1 + 0x21c), 0x100, &var_108, 0x100, &var_208, 0x100, 
            *(arg1 + 4), 0)
        char var_308[0x100]
        ___acrt_LCMapStringA(nullptr, *(arg1 + 0x21c), 0x200, &var_108, 0x100, &var_308, 0x100, 
            *(arg1 + 4), 0)
        
        for (int32_t i_2 = 0; i_2 u< 0x100; i_2 += 1)
            result = zx.d(var_708[i_2])
            
            if ((result.b & 1) != 0)
                *(arg1 + i_2 + 0x19) |= 0x10
                result.b = var_208[i_2]
                *(arg1 + i_2 + 0x119) = result.b
            else if ((result.b & 2) == 0)
                *(arg1 + i_2 + 0x119) = 0
            else
                *(arg1 + i_2 + 0x19) |= 0x20
                result.b = var_308[i_2]
                *(arg1 + i_2 + 0x119) = result.b
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
