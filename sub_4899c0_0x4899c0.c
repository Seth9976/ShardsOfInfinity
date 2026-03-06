// 函数名称: sub_4899c0
// 虚拟地址: 0x4899c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4899c0(void* arg1 @ xmm2, float arg2, int32_t arg3)
{
    // 第一条实际指令: void* result_5
    void* result_5
    void* result_1 = result_5
    int32_t ecx
    int128_t* edx
    ecx, edx = __alloca_probe(0x16e8)
    void var_10
    void* result = __security_cookie ^ &var_10
    void* result_2 = result
    char const* const var_24_2
    int32_t var_20_1
    char const* const var_1c_1
    char* ecx_1
    
    if (ecx != 0)
        uint32_t ecx_2 = zx.d(ecx.w)
        
        if (ecx_2 u< data_654ebc)
            result = ecx_2 * 0x438 + data_654eb8
        
        if (ecx_2 u>= data_654ebc || *(result + 0x434) != ecx)
            var_1c_1 = "DataArray<struct UIState>::DataArrayGet"
            var_20_1 = 0x6d
            ecx_1 = "DataArrayTryToGet(id) != NULL"
            var_24_2 = "c:\ax2017\engine\dataarray.h"
        else
            void* esi_2 = ecx_2 * 0x438 + data_654eb8
            
            if (*(esi_2 + 8) != 0)
                @__security_check_cookie@4(result_2 ^ &var_10)
                return result
            
            uint32_t arg_c8[0x4]
            _memset(&arg_c8, 0, 0x1604)
            int32_t ecx_3 = arg3 * 0x58
            result = edx[5].d
            arg3 = 1
            *(&arg_c8 + ecx_3) = *edx
            arg_11c
            *(&arg_11c + ecx_3) = 0xffffffff
            void arg_d8
            *(&arg_d8 + ecx_3) = edx[1]
            void arg_e8
            *(&arg_e8 + ecx_3) = edx[2]
            void arg_f8
            *(&arg_f8 + ecx_3) = edx[3]
            void arg_108
            *(&arg_108 + ecx_3) = edx[4]
            int32_t arg_118[0x56c]
            arg_118[arg3 * 0x16] = result
            int32_t* ecx_4 = *(esi_2 + 4)
            
            if (ecx_4[1] == 0x1e)
                result = sub_4459f0(ecx_4)
                void* result_3 = result
                uint32_t (* i)[0x4] = nullptr
                void* result_4 = result_3
                uint32_t (* i_1)[0x4] = nullptr
                
                if (*(result_3 + 4) s> 0)
                    result = nullptr
                    result_1 = nullptr
                    
                    do
                        float edi_2 = *result_3 + result
                        uint32_t (* eax_2)[0x4] = sub_486810(result, i, esi_2, *(edi_2 i+ 8))
                        int128_t arg_8
                        float arg_68[0x4]
                        int128_t arg_78
                        int128_t arg_88
                        int128_t arg_98
                        int128_t arg_a8
                        int32_t arg_b8
                        void arg_c0
                        
                        if (*(edi_2 i+ 4) != 6)
                            uint32_t eax_9 = *eax_2
                            char ecx_6
                            
                            if ((*eax_2)[2] s<= eax_9)
                                ecx_6 = *(edi_2 i+ 0x30)
                            else
                                ecx_6 = (*eax_2)[3].b
                            
                            if (ecx_6 == 0)
                                if ((*eax_2)[0x51] s<= eax_9)
                                    eax_9.b = 0
                                else
                                    eax_9.b = (*eax_2)[0x52].b
                                
                                if (eax_9.b == 0)
                                    if (arg3 s<= 0)
                                        sub_44e4d0(arg3, &data_5559b1, "stack.numEntries > 0", 
                                            "c:\ax2017\engine\uidef.cpp", 0x67d, "Peek")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    int32_t ecx_8 = arg3 * 0x58
                                    int32_t eax_11 = *(&arg_c0 + ecx_8)
                                    float xmm1_1[0x4] = *(&arg_68[2] + ecx_8)
                                    int32_t arg_58 = eax_11
                                    arg_8 = *(&arg_68[2] + ecx_8)
                                    arg_b8 = eax_11
                                    int128_t xmm0_17 = *(&arg_78:8 + ecx_8)
                                    arg_68 = xmm1_1
                                    int128_t arg_18 = xmm0_17
                                    int128_t xmm0_18 = *(&arg_88:8 + ecx_8)
                                    float xmm1_2 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
                                    int128_t arg_28 = xmm0_18
                                    xmm1_2 f- 0
                                    int128_t arg_38 = *(&arg_98:8 + ecx_8)
                                    eax_11:1.b = (xmm1_2 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm1_2, 0f) ? 1 : 0) << 2
                                        | (xmm1_2 < 0f ? 1 : 0)
                                    int128_t arg_48 = *(&arg_a8:8 + ecx_8)
                                    arg_78 = *(&arg_78:8 + ecx_8)
                                    arg_88 = *(&arg_88:8 + ecx_8)
                                    arg_98 = *(&arg_98:8 + ecx_8)
                                    arg_a8 = *(&arg_a8:8 + ecx_8)
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_2)
                                        arg2 f- 0
                                        eax_11:1.b = (arg2 == 0f ? 1 : 0) << 6
                                            | (is_unordered.d(arg2, 0f) ? 1 : 0) << 2
                                            | (arg2 < 0f ? 1 : 0)
                                        bool p_4 = unimplemented  {test ah, 0x44}
                                        
                                        if (p_4)
                                            uint32_t eax_13
                                            
                                            if ((*eax_2)[0x4f] s> *eax_2)
                                                eax_13 = eax_2[0x14][0]
                                            
                                            if ((*eax_2)[0x4f] s<= *eax_2 || eax_13 == 0)
                                                sub_489320(&arg_68, i, esi_2, i, edi_2, arg1, &arg_68)
                                            else
                                                eax_13(&arg_68, edi_2, eax_2)
                            
                            sub_487160(&arg_c8)
                        else
                            if (arg3 s<= 0)
                                sub_44e4d0(arg3, &data_5559b1, "stack.numEntries > 0", 
                                    "c:\ax2017\engine\uidef.cpp", 0x67d, "Peek")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            int32_t esi_3 = arg3 * 0x58
                            arg_b8 = *(&arg_c0 + esi_3)
                            arg_68 = *(&arg_68[2] + esi_3)
                            arg_78 = *(&arg_78:8 + esi_3)
                            arg_88 = *(&arg_88:8 + esi_3)
                            arg_98 = *(&arg_98:8 + esi_3)
                            arg_a8 = *(&arg_a8:8 + esi_3)
                            int128_t* eax_6 = sub_487b30(&arg_8, eax_2, edi_2, &arg_8, &arg_68)
                            arg3 += 1
                            *(&arg_c8 + esi_3) = *eax_6
                            *(&arg_d8 + esi_3) = eax_6[1]
                            *(&arg_e8 + esi_3) = eax_6[2]
                            *(&arg_f8 + esi_3) = eax_6[3]
                            int32_t eax_7 = eax_6[5].d
                            *(&arg_108 + esi_3) = eax_6[4]
                            arg_118[arg3 * 0x16] = eax_7
                            *(&arg_11c + esi_3) = *(edi_2 i+ 0x48)
                            i = i_1
                        result_3 = result_4
                        i += 1
                        result = result_1 + 0x118
                        i_1 = i
                        result_1 = result
                    while (i s< *(result_3 + 4))
                
                @__security_check_cookie@4(result_2 ^ &var_10)
                return result
            
            var_1c_1 = "UIDefGet"
            var_20_1 = 0x10d
            var_24_2 = "c:\ax2017\engine\uidef.cpp"
            ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
    else
        var_1c_1 = "DataArray<struct UIState>::DataArrayGet"
        var_20_1 = 0x6c
        ecx_1 = "id != DATAID_NULL"
        var_24_2 = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_24_2, var_20_1, var_1c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
