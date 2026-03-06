// 函数名称: sub_4c33f0
// 虚拟地址: 0x4c33f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_4c33f0(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* var_24 = arg2
    int32_t* var_24 = arg2
    int32_t esi = 0
    float result = *(arg3 + 4)
    int32_t edi = 0
    float result_3 = 0f
    float var_20 = 0f
    float var_1c = 0f
    int32_t ecx = result << 3
    
    if (result s> 0)
        do
            float eax
            float edx_1
            eax, edx_1 = sub_4c32b0(result, esi, arg3, arg4)
            float xmm1_1 = eax
            
            if (esi == 0)
            label_4c3475:
                var_20 = xmm1_1
                edi += 1
                var_1c = edx_1
            else
                var_20 - xmm1_1
                eax:1.b = (var_20 == xmm1_1 ? 1 : 0) << 6
                    | (is_unordered.d(var_20, xmm1_1) ? 1 : 0) << 2 | (var_20 < xmm1_1 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_4c3475
                
                var_1c - edx_1
                eax:1.b = (var_1c == edx_1 ? 1 : 0) << 6 | (is_unordered.d(var_1c, edx_1) ? 1 : 0) << 2
                    | (var_1c < edx_1 ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_4c3475
            
            result = *(arg3 + 4)
            esi += 1
        while (esi s< result)
        
        arg2 = var_24
    
    void* esi_2 = edi * 0xa
    
    if (esi_2 s>= ecx)
        int32_t esi_3 = result << 3
        arg2[1] = esi_3
        uint32_t (* edi_2)[0x4]
        
        if (esi_3 != 0)
            edi_2 = sub_45cd70(esi_3)
            result = _memset(edi_2, 0, esi_3)
            arg2 = var_24
        else
            edi_2 = nullptr
        
        *arg2 = edi_2
        int32_t i = 0
        arg2[2] = 1
        
        if (*(arg3 + 4) s> 0)
            do
                int32_t esi_4 = *arg2
                int32_t edx_7
                result, edx_7 = sub_4c32b0(result, i, arg3, arg4)
                *(esi_4 + (i << 3)) = result
                arg2 = var_24
                *(esi_4 + (i << 3) + 4) = edx_7
                i += 1
            while (i s< *(arg3 + 4))
    else
        arg2[1] = esi_2
        float result_1
        uint32_t (* result_4)[0x4]
        
        if (esi_2 != 0)
            result_4 = sub_45cd70(esi_2)
            result_1 = result_4
            _memset(result_4, 0, esi_2)
            arg2 = var_24
        else
            result_4 = nullptr
            result_1 = 0f
        
        *arg2 = result_4
        arg2[2] = 3
        float var_20_1 = 0f
        int32_t eax_5 = esi_2 s/ 0xa
        int32_t edi_1 = 0
        result = *(arg3 + 4)
        int32_t var_38
        char const* const ecx_3
        
        if (result s>= 0xffff)
            char const* const var_34_3 = "FlanimCompressConstantVec2"
            var_38 = 0x5a2
            ecx_3 = "pMayaVertex->mFrameCount < MAXUINT16"
        label_4c3630:
            sub_44e4d0(result, &data_5559b1, ecx_3, "c:\ax2017\engine\flanim.cpp", var_38, 
                "FlanimCompressConstantVec2")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t i_1 = 0
        
        if (result s> 0)
            do
                float edx_5
                result, edx_5 = sub_4c32b0(result, i_1, arg3, arg4)
                float result_2 = result
                
                if (i_1 == 0)
                label_4c3569:
                    result_3 = result_2
                    var_20_1 = edx_5
                    *(&(*result_4)[eax_5 * 2] + (edi_1 << 1)) = i_1.w
                    result = result_1
                    *(result i+ (edi_1 << 3)) = result_2
                    *(result i+ (edi_1 << 3) + 4) = edx_5
                    edi_1 += 1
                else
                    result_3 - result_2
                    result:1.b = (result_3 == result_2 ? 1 : 0) << 6
                        | (is_unordered.d(result_3, result_2) ? 1 : 0) << 2
                        | (result_3 < result_2 ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        goto label_4c3569
                    
                    var_20_1 - edx_5
                    result:1.b = (var_20_1 == edx_5 ? 1 : 0) << 6
                        | (is_unordered.d(var_20_1, edx_5) ? 1 : 0) << 2 | (var_20_1 < edx_5 ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_8)
                        goto label_4c3569
                
                i_1 += 1
            while (i_1 s< *(arg3 + 4))
        
        if (edi_1 != eax_5)
            char const* const var_34_7 = "FlanimCompressConstantVec2"
            var_38 = 0x5b1
            ecx_3 = "dataIndex == numValues"
            goto label_4c3630
    
    return result
}
