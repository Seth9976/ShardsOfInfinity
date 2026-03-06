// 函数名称: sub_436080
// 虚拟地址: 0x436080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_436080()
{
    // 第一条实际指令: int32_t j
    int32_t j
    int32_t j_1 = j
    int32_t* var_14 = &data_5bcd7c
    int32_t* i_1 = nullptr
    void* result = sub_445070(&data_5bcd7c, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        char const* const var_50
        int32_t var_4c_2
        char const* const var_48_2
        char* ecx_15
        
        if (*i != 2)
            if (sub_4333a0(i) != 0)
                if (*i == 0 && i[0x13c] == 0 && i[0x42] == 1 && i[0x43] == 0x13)
                    result = sub_432d60(i[2])
                    
                    if (result.b == 0)
                        goto label_436216
                    
                    void* ecx_9 = data_65aabc
                    
                    if (ecx_9 == 0)
                        var_48_2 = "GetClient"
                        var_4c_2 = 0x74
                        var_50 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                        ecx_15 = "gClient"
                        goto label_436319
                    
                    if (i[2] != *(ecx_9 + 0x648) || i[0x159] == data_5bcca8)
                        goto label_436216
                    
                    float xmm0_2 = i[0x155]
                    xmm0_2 f- 0
                    int32_t eax_4
                    eax_4:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
                        | (xmm0_2 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        goto label_436216
                    
                    j.b = 1
                    goto label_436218
                
            label_436216:
                j.b = 0
            label_436218:
                void* eax_5 = data_cdf424
                int32_t edi_3 = *(eax_5 + 0x38)
                int128_t xmm0_3 = *(eax_5 + 0x28)
                
                if (j.b != 0)
                    sub_429030()
                    void var_34
                    int128_t xmm0_4 = *sub_47a430(&var_34, 0)
                    void* eax_8 = data_cdf424
                    *(eax_8 + 0x28) = xmm0_4
                    *(eax_8 + 0x38) = 3
                
                sub_468d10(i[0x14c])
                
                if (j.b != 0)
                    void* eax_9 = data_cdf424
                    *(eax_9 + 0x28) = xmm0_3
                    *(eax_9 + 0x38) = edi_3
                
                result = sub_495430(i[0x157])
                
                if (result != 0)
                    if (data_cdf3e9 == 0)
                        goto label_436300
                    
                    int32_t esi = data_65b35c
                    data_65b35c = 0x2de60000
                    result = sub_49ee40(result, &data_5c779c)
                    
                    if (data_cdf3e9 == 0)
                        goto label_436300
                    
                    data_65b35c = esi
        else
            if (data_cdf3e9 == 0)
            label_436300:
                var_48_2 = "Draw3DLayer"
                var_4c_2 = 0x327
                ecx_15 = "gDraw3DData.submittingRenderItems"
                var_50 = "c:\ax2017\engine\draw3d.cpp"
            label_436319:
                sub_44e4d0(result, &data_5559b1, ecx_15, var_50, var_4c_2, var_48_2)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t edi_1 = data_65b35c
            data_65b35c = 0x2de60000
            result = sub_495430(i[0x15])
            
            if (result != 0)
                result = sub_49ee40(result, &data_5c779c)
            
            j = 0
            
            if (i[0x13] s> 0)
                void* var_8_1 = &i[0x1d]
                void* edi_2 = &i[0x16]
                
                do
                    result = data_cdf428
                    
                    if (result == 0)
                        var_48_2 = "GetGameData"
                        var_4c_2 = 0x45
                        var_50 = "c:\ax2017\engine\game.h"
                        ecx_15 = "gpGameData"
                        goto label_436319
                    
                    void* edx_1 = *(result + 0x10)
                    int32_t eax_1 = *edi_2
                    
                    if (eax_1 != 0)
                        uint32_t ecx_3 = zx.d(eax_1.w)
                        
                        if (ecx_3 u< *(edx_1 + 4))
                            void* ecx_5 = ecx_3 * 0x7c + *edx_1
                            
                            if (*(ecx_5 + 0x78) == eax_1)
                                sub_49ee40(ecx_5, &data_5c779c)
                    
                    data_65b360.d = i[0x14]
                    result = sub_436340(&i[0x1b], var_8_1, i[0x27] f* 100f)
                    var_8_1 += 8
                    j += 1
                    data_65b360.d = 0
                    edi_2 += 4
                while (j s< i[0x13])
            
            if (data_cdf3e9 == 0)
                goto label_436300
            
            data_65b35c = edi_1
        result = sub_445070(var_14, &i_1)
    
    return result
}
