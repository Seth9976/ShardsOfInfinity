// 函数名称: sub_479b90
// 虚拟地址: 0x479b90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_479b90(int32_t arg1, int32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t ebx = data_5c99dc
    int32_t ebx = data_5c99dc
    int32_t var_10 = arg2
    int32_t ecx = data_5c99a4
    
    if (ebx == 0)
        goto label_479c17
    
    uint32_t eax = zx.d(ebx.w)
    uint32_t var_18_1 = eax
    
    if (eax u< ecx)
        int32_t esi_1 = data_5c99a0
        eax *= 0x1008
        
        if (*(eax + esi_1 + 0x1004) == ebx)
            int32_t eax_1 = var_18_1 * 0x1008
            uint32_t eax_3
            
            if (*(eax_1 + esi_1 + 0x660) == 0)
                eax_3 = arg4
            else if (*(arg3 + 4) == 0)
                data_5c99dc = 0
                *(eax_1 + esi_1 + 0x660) = 0
                ebx = data_5c99dc
                ecx = data_5c99a4
            label_479c17:
                esi_1 = data_5c99a0
                eax_3 = arg4
            else
                arg2 = ebx
                eax_3 = arg4 | 0x10
                var_10 = arg2
            
            uint32_t var_c_1 = eax_3
            int128_t var_3c
            
            if (eax_3 == 8)
                int32_t ecx_1 = data_5c99e0
                
                if (ecx_1 == 0)
                    eax_3.b = 0
                    return eax_3
                
                uint32_t edx = zx.d(ecx_1.w)
                __builtin_memset(&var_3c, 0, 0x1c)
                
                if (edx u< data_5c99a4)
                    eax_3 = edx * 0x1008
                
                if (edx u>= data_5c99a4 || *(eax_3 + esi_1 + 0x1004) != ecx_1)
                    sub_44e4d0(eax_3, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                        "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* ecx_3 = edx * 0x1008 + esi_1
                char* const edx_1 = *(*(ecx_3 + 0x63c) * 0x208 + ecx_3 + 0x1fc)
                
                if (edx_1 == 0)
                    char* eax_5 = *(ecx_3 + 0x698)
                    edx_1 = &data_5559b1
                    
                    if (eax_5 != 0)
                        edx_1 = eax_5
                
                var_3c:4.d = edx_1
                int32_t var_24_1 = 2
                sub_479470(ecx_3, &var_3c)
                eax_3.b = 1
                return eax_3
            
            if (arg2 == 0)
                eax_3.b = 0
                return eax_3
            
            eax = zx.d(arg2.w)
            
            if (eax u< ecx)
                eax *= 0x1008
                void* esi_2 = esi_1 + eax
                
                if (*(esi_2 + 0x1004) == arg2)
                    void* ecx_4
                    ecx_4.b = var_c_1.b
                    ecx_4.b &= 1
                    char eax_7 = 0
                    
                    if (sub_47b4f0(esi_2) == 0)
                        eax_7 = ecx_4.b
                    
                    void* eax_9 = var_c_1 & 6
                    int64_t var_2c
                    
                    if (*(esi_2 + 0x69c) == 3 && *(*(esi_2 + 0x63c) * 0x208 + esi_2 + 0x1d8) != 0)
                        if (sub_462db0(esi_2) != 0)
                            var_3c:0xc.q = 0
                            var_2c = 0
                            char* const ecx_7 = *(*(esi_2 + 0x63c) * 0x208 + esi_2 + 0x1fc)
                            
                            if (ecx_7 == 0)
                                char* eax_16 = *(esi_2 + 0x698)
                                ecx_7 = &data_5559b1
                                
                                if (eax_16 != 0)
                                    ecx_7 = eax_16
                            
                            var_3c.d = *(esi_2 + 0x1004)
                            var_3c:4.d = ecx_7
                            var_3c:8.d = *(esi_2 + 0x754)
                            
                            if (*(arg3 + 0x325) != 0 && eax_9 != 0)
                                if (data_5c99d8 != var_10)
                                    sub_46f730(var_10, arg3 + 0x310)
                                
                                sub_479470(esi_2, &var_3c)
                            else if (*(arg3 + 4) != 0)
                                sub_4c50b0(esi_2 + 0x798, 1, arg3 + 0x310)
                                struct _EXCEPTION_REGISTRATION_RECORD** eax_19
                                eax_19.b = 0
                                return eax_19
                            
                            eax_3.b = 0
                            return eax_3
                        
                        ebx = data_5c99dc
                    
                    eax_3 = *(esi_2 + 0x69c)
                    
                    if (eax_3 == 2)
                        eax_3 = *(*(esi_2 + 0x63c) * 0x208 + esi_2 + 0x1a0)
                        
                        if (eax_3 == 2 || eax_3 == 1 || eax_3 == 3)
                            if (*(arg3 + 0x325) != 0)
                                if (ebx != var_10)
                                    ebx = var_10
                                
                                data_5c99dc = ebx
                                *(esi_2 + 0x660) = 1
                                *(esi_2 + 0x658) = *(arg3 + 0x310)
                                *(esi_2 + 0x65c) = *(arg3 + 0x314)
                            else if (*(arg3 + 4) == 0)
                                *(esi_2 + 0x660) = 0
                            
                            if (*(esi_2 + 0x660) != 0)
                                float xmm1_1 = *(arg3 + 0x310) f- *(esi_2 + 0x658)
                                float xmm0_2 = *(arg3 + 0x314) f- *(esi_2 + 0x65c)
                                *(esi_2 + 0x658) = *(arg3 + 0x310)
                                int32_t eax_23 = *(arg3 + 0x314)
                                float var_20 = xmm1_1
                                float var_1c_2 = xmm0_2
                                *(esi_2 + 0x65c) = eax_23
                                sub_479350(esi_2, &var_20)
                                int32_t eax_24
                                eax_24.b = 0
                                return eax_24
                        
                        eax_3.b = 0
                        return eax_3
                    
                    if (eax_3 != 5)
                        eax_3.b = 0
                        return eax_3
                    
                    if (data_5c99ec != 1)
                        if (sub_462db0(esi_2).b == 0)
                            eax_3.b = 0
                            return eax_3
                    else
                        eax_3 = sub_462e50(esi_2)
                        
                        if (eax_3.b == 0)
                            return eax_3
                    
                    if (eax_7 != 0)
                        void** eax_25 = sub_414c10(arg3 + 0x210, &data_5c77c4)
                        
                        if (eax_25.b != 0 || data_5c99ec != eax_25.b)
                            sub_469800(eax_25, &data_5c7b2c, esi_2, 0x3f800000, 0xfffffc18)
                        else if (sub_414c10(arg3 + 0x110, arg3 + 0x210).b != 0)
                            void** edx_7 = &data_5c7b40
                            
                            if (*(arg3 + 4) != 0)
                                edx_7 = &data_5c7b54
                            
                            sub_469800(&data_5c7b54, edx_7, esi_2, 0x3f800000, 0xfffffc18)
                    
                    if (data_5c99ec != 0)
                        eax_3.b = 1
                        return eax_3
                    
                    if (eax_9 != 0)
                    label_479f96:
                        int32_t edx_8 = *(esi_2 + 0x63c) * 0x208
                        var_3c:0xc.d = 0
                        char* const ecx_16 = *(edx_8 + esi_2 + 0x1fc)
                        
                        if (ecx_16 == 0)
                            char* eax_26 = *(esi_2 + 0x698)
                            ecx_16 = &data_5559b1
                            
                            if (eax_26 != 0)
                                ecx_16 = eax_26
                        
                        var_3c.d = *(esi_2 + 0x1004)
                        var_3c:8.d = *(esi_2 + 0x754)
                        eax_3 = nullptr
                        var_3c:4.d = ecx_16
                        var_2c.d = *(arg3 + 0x310)
                        
                        if ((var_c_1.b & 4) != 0)
                            eax_3 = 1
                        
                        var_2c:4.d = *(arg3 + 0x314)
                        uint32_t var_24_2 = eax_3
                        
                        if (*(esi_2 + 0x660) != 0)
                            sub_469800(eax_3, &data_5c7b54, esi_2, 0x3f800000, 0xfffffc18)
                            int32_t eax_29
                            eax_29.b = *(arg3 + 4) != 0
                            var_3c:0xc.d = eax_29 + 3
                            sub_479470(esi_2, &var_3c)
                            int32_t eax_31
                            eax_31.b = 1
                            return eax_31
                        
                        if (*(arg3 + 0x325) != 0 && *(edx_8 + esi_2 + 0x200) != 0)
                            sub_469800(eax_3, &data_5c7b40, esi_2, 0x3f800000, 0xfffffc18)
                        label_47a0da:
                            
                            if (data_5c99d8 != var_10)
                                sub_46f730(var_10, arg3 + 0x310)
                            
                            sub_479470(esi_2, &var_3c)
                            int32_t eax_33
                            eax_33.b = 1
                            return eax_33
                        
                        if ((*(arg3 + 0x326) != 0 || *(arg3 + 0x327) != 0)
                                && *(edx_8 + esi_2 + 0x200) == 0)
                            sub_469800(eax_3, &data_5c7b40, esi_2, 0x3f800000, 0xfffffc18)
                            
                            if (*(arg3 + 0x328) == 0)
                                int32_t eax_32 = var_3c:0xc.d
                                
                                if (*(arg3 + 0x327) != 0)
                                    eax_32 = 1
                                
                                var_3c:0xc.d = eax_32
                            else
                                var_3c:0xc.d = 2
                            
                            goto label_47a0da
                    else if (((var_c_1 u>> 4).b & 1) != 0 && *(esi_2 + 0x660) != 0)
                        goto label_479f96
                    
                    eax_3.b = 0
                    return eax_3
    
    sub_44e4d0(eax, &data_5559b1, "DataArrayTryToGet(id) != NULL", "c:\ax2017\engine\dataarray.h", 
        0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
