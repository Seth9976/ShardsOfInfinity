// 函数名称: sub_45a060
// 虚拟地址: 0x45a060
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_45a060()
{
    // 第一条实际指令: int32_t* result = data_cdf3dc
    int32_t* result = data_cdf3dc
    
    if (result != 0)
        int32_t edx_1 = data_cdf3d8
        int32_t ecx_1
        
        if (edx_1 s>= 0)
            ecx_1 = data_7db388
            result += edx_1
        
        int32_t var_40_3
        char* ecx_20
        
        if (edx_1 s< 0 || result s> ecx_1)
            char const* const var_3c_9 = "RenderDrawQuadBuffers"
            var_40_3 = 0x8b7
            ecx_20 = "sortIndex >= 0 && sortIndex + gDraw3DData.batchedQuadGroupCount <= gDraw3DData."
            "renderItemCount"
        label_45a39e:
            sub_44e4d0(result, &data_5559b1, ecx_20, "c:\ax2017\engine\draw3d.cpp", var_40_3, 
                "RenderDrawQuadBuffers")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = *((edx_1 << 2) + &data_cdb3d8)
        
        if (result s< 0 || result s> ecx_1)
            char const* const var_3c_8 = "RenderDrawQuadBuffers"
            var_40_3 = 0x8ba
            ecx_20 = "firstItemIndex >= 0 && firstItemIndex <= gDraw3DData.renderItemCount"
            goto label_45a39e
        
        result = sub_454070(result * 0x180 + 0x65b388)
        int32_t i = 0
        int32_t var_20_1 = 0x100
        int32_t esi_1 = 0
        int32_t i_1 = 0
        int32_t var_8_1 = 0
        
        if (data_cdf3dc s> 0)
            int32_t edx_2 = data_cdb3d4
            
            do
                int32_t var_10_1 = 0
                
                if ((*(*data_ce19b4 + 0x28))(*((edx_2 << 2) + &data_cdb394)) == 0)
                    *((data_cdb3d4 << 2) + &data_cdb394) = (*(*data_ce19b4 + 0x24))(0, 0xa0000, 0xa, 1)
                
                if ((*(*data_ce19b4 + 0x34))(data_cdb390) == 0)
                    void* eax_8 = sub_45cd70(0xc000)
                    int32_t j = 0
                    void* ecx_9 = eax_8 + 4
                    
                    do
                        int16_t esi_2 = (j << 2).w
                        j += 1
                        *(ecx_9 - 4) = esi_2
                        *ecx_9 = esi_2 + 1
                        *(ecx_9 + 2) = esi_2 + 1
                        *(ecx_9 - 2) = esi_2 + 2
                        ecx_9 += 0xc
                        *(ecx_9 - 8) = esi_2 + 2
                        *(ecx_9 - 6) = esi_2 + 3
                    while (j s< 0x1000)
                    
                    data_cdb390 = (*(*data_ce19b4 + 0x30))(eax_8, 0xc000, 0, 0, 
                        *((data_cdb3d4 << 2) + &data_cdb394))
                    
                    if (eax_8 != 0)
                        _aligned_free_base(eax_8)
                    
                    esi_1 = var_8_1
                
                int32_t edx_5 = data_cdb3d4
                int32_t eax_14 = (*(*data_ce19b4 + 0x60))(*((edx_5 << 2) + &data_cdb394))
                int32_t edx_6 = data_cdf3dc
                int32_t edi_1 = 0
                int32_t var_1c_2 = 0
                int32_t var_18_1 = 0
                
                if (i s< edx_6)
                    void* eax_15 = ((edx_1 + i) << 2) + &data_cdb3d8
                    void* var_14_1 = eax_15
                    
                    do
                        int32_t ebx_2 = *eax_15 * 0x180
                        
                        if ((*(ebx_2 + 0x65b4ec) & 1 << (data_cdf3fc).b) == 0)
                            i = i_1
                            eax_15 = var_14_1
                        else
                            int32_t edi_4 = (*(ebx_2 + 0x65b4d0) << 2) - esi_1
                            
                            if (0x4000 - var_10_1 s< edi_4)
                                edi_4 = 0x4000 - var_10_1
                            
                            int32_t esi_5 = edi_4 * 0x28
                            sub_51d5b0(eax_14 + var_10_1 * 0x28, 
                                (var_8_1 + (*(ebx_2 + 0x65b4cc) << 2)) * 0x28 + &data_7db38c, esi_5)
                            var_1c_2 += esi_5
                            var_10_1 += edi_4
                            int32_t esi_7 = var_8_1 + edi_4
                            int32_t eax_26
                            int32_t edx_8
                            edx_8:eax_26 = sx.q(edi_4)
                            var_8_1 = esi_7
                            var_18_1 += (eax_26 + (edx_8 & 3)) s>> 2
                            i = i_1
                            
                            if (esi_7 != *(ebx_2 + 0x65b4d0) << 2)
                                break
                            
                            i += 1
                            edx_6 = data_cdf3dc
                            eax_15 = var_14_1 + 4
                            esi_1 = 0
                            i_1 = i
                            var_14_1 = eax_15
                            var_8_1 = 0
                    while (i s< edx_6)
                    
                    edi_1 = var_18_1
                
                (*(*data_ce19b4 + 0x68))(*((edx_5 << 2) + &data_cdb394), var_1c_2)
                result = data_ce19c4
                int32_t ecx_18 = *result
                
                if (ecx_18 == 0 || result[9] s< ecx_18)
                    (*(*data_ce19b4 + 0x3c))(4, *((edx_5 << 2) + &data_cdb394), data_cdb390, 0xa, 
                        edi_1 * 2, edi_1 << 2, 0, 0)
                    result = data_ce19c4
                
                int32_t temp0_1 = var_20_1
                var_20_1 -= 1
                
                if (temp0_1 == 1)
                    break
                
                result[8] += edi_1
                result[9] += 1
                edx_2 = (data_cdb3d4 + 1) & 0x8000000f
                
                if (edx_2 s< 0)
                    edx_2 = ((edx_2 - 1) | 0xfffffff0) + 1
                
                esi_1 = var_8_1
                data_cdb3d4 = edx_2
            while (i s< data_cdf3dc)
        
        data_cdf3dc = 0
    
    return result
}
