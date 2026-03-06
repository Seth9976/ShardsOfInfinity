// 函数名称: sub_45a7f0
// 虚拟地址: 0x45a7f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_45a7f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    
    if (data_7db388 == 0)
        return 
    
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    void* eax
    char* ecx
    
    if (data_cdf3e9 != 0)
        var_18 = "RenderItemListDraw"
        var_1c = 0xa7c
        var_20 = "c:\ax2017\engine\draw3d.cpp"
        ecx = "!gDraw3DData.submittingRenderItems"
    label_45ab7a:
        sub_44e4d0(eax, &data_5559b1, ecx, var_20, var_1c, var_18)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_4bd1a0(2)
    int32_t i = 0
    data_cdf3fc = arg1
    data_65b264 = 0
    __builtin_memset(&data_65aecc, 0, 0x40)
    data_65b2a0 = 0x3f800000
    
    if (data_7db388 s> 0)
        int32_t edx_1 = 1 << arg1.b
        int32_t var_8_1 = edx_1
        
        do
            int32_t eax_1 = *((i << 2) + &data_cdb3d8)
            
            if ((*(eax_1 * 0x180 + 0x65b4ec) & edx_1) != 0)
                int32_t eax_2 = *(eax_1 * 0x180 + 0x65b388)
                
                if (eax_2 == 0)
                    *(eax_1 * 0x180 + 0x65b3d0)
                    
                    if (sub_454920() == 0)
                        sub_45a060()
                        sub_45a3c0()
                        data_cdf3e0 = i
                        sub_454980(sub_454070(eax_1 * 0x180 + 0x65b388))
                    else
                        if (data_cdf3e4 == 0)
                        label_45aae3:
                            sub_45a060()
                            sub_45a3c0()
                            data_cdf3e0 = i
                        else
                            eax = sub_4b3f40(sub_4b3e00(*(eax_1 * 0x180 + 0x65b3d0)))
                            int32_t* ecx_9 = *eax
                            
                            if (ecx_9[1] != 4)
                                var_18 = "ShaderGetDef"
                                var_1c = 0x8a
                                var_20 = "c:\ax2017\engine\shader.cpp"
                                ecx = "assetPtr->assetType == ASSET_TYPE_SHADER"
                                goto label_45ab7a
                            
                            void* eax_17 = sub_4459f0(ecx_9)
                            
                            if (data_cdf3e4 == *(eax_17 + 0x2c))
                                goto label_45aae3
                            
                            int32_t edi_4 = *((data_cdf3e0 << 2) + &data_cdb3d8) * 0x180
                            
                            if (*(edi_4 + 0x65b38c) != *(eax_1 * 0x180 + 0x65b38c)
                                    || *(edi_4 + 0x65b3d0) != *(eax_1 * 0x180 + 0x65b3d0)
                                    || *(edi_4 + 0x65b3d4) != *(eax_1 * 0x180 + 0x65b3d4))
                                goto label_45aae3
                            
                            if (sub_45c0e0(edi_4 + 0x65b408, eax_1 * 0x180 + 0x65b408) != 0)
                                goto label_45aae3
                            
                            if (sub_45c0e0(edi_4 + 0x65b418, eax_1 * 0x180 + 0x65b418) != 0)
                                goto label_45aae3
                            
                            if (sub_45c0e0(edi_4 + 0x65b428, eax_1 * 0x180 + 0x65b428) != 0)
                                goto label_45aae3
                            
                            *(edi_4 + 0x65b4a8) - *(eax_1 * 0x180 + 0x65b4a8)
                            bool p_14 = unimplemented  {test ah, 0x44}
                            
                            if (p_14)
                                goto label_45aae3
                        
                        data_cdf3e4 += 1
                else
                    eax = eax_2 - 1
                    
                    if (eax_2 != 1)
                        var_18 = "RenderItemListDraw"
                        var_1c = 0xa9e
                        var_20 = "c:\ax2017\engine\draw3d.cpp"
                        ecx = "Halt"
                        goto label_45ab7a
                    
                    if (data_cdf3dc == eax)
                    label_45a9ed:
                        sub_45a060()
                        sub_45a3c0()
                        data_cdf3d8 = i
                    else
                        int32_t edi_2 = *((data_cdf3d8 << 2) + &data_cdb3d8) * 0x180
                        
                        if (*(edi_2 + 0x65b3d0) != *(eax_1 * 0x180 + 0x65b3d0)
                                || *(edi_2 + 0x65b3d4) != *(eax_1 * 0x180 + 0x65b3d4))
                            goto label_45a9ed
                        
                        float xmm0_1 = *(edi_2 + 0x65b408)
                        float temp2_1 = *(eax_1 * 0x180 + 0x65b408)
                        xmm0_1 - temp2_1
                        int32_t eax_7
                        eax_7:1.b = (xmm0_1 == temp2_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_1, temp2_1) ? 1 : 0) << 2
                            | (xmm0_1 < temp2_1 ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (p_2)
                            goto label_45a9ed
                        
                        float xmm0_2 = *(edi_2 + 0x65b40c)
                        float temp3_1 = *(eax_1 * 0x180 + 0x65b40c)
                        xmm0_2 - temp3_1
                        eax_7:1.b = (xmm0_2 == temp3_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_2, temp3_1) ? 1 : 0) << 2
                            | (xmm0_2 < temp3_1 ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            goto label_45a9ed
                        
                        float xmm0_3 = *(edi_2 + 0x65b410)
                        float temp4_1 = *(eax_1 * 0x180 + 0x65b410)
                        xmm0_3 - temp4_1
                        eax_7:1.b = (xmm0_3 == temp4_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_3, temp4_1) ? 1 : 0) << 2
                            | (xmm0_3 < temp4_1 ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (p_6)
                            goto label_45a9ed
                        
                        float xmm0_4 = *(edi_2 + 0x65b414)
                        float temp5_1 = *(eax_1 * 0x180 + 0x65b414)
                        xmm0_4 - temp5_1
                        eax_7:1.b = (xmm0_4 == temp5_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_4, temp5_1) ? 1 : 0) << 2
                            | (xmm0_4 < temp5_1 ? 1 : 0)
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (p_8)
                            goto label_45a9ed
                        
                        if (sub_45c0e0(edi_2 + 0x65b418, eax_1 * 0x180 + 0x65b418) != 0)
                            goto label_45a9ed
                        
                        if (sub_45c0e0(edi_2 + 0x65b428, eax_1 * 0x180 + 0x65b428) != 0)
                            goto label_45a9ed
                        
                        *(edi_2 + 0x65b4a8) - *(eax_1 * 0x180 + 0x65b4a8)
                        bool p_10 = unimplemented  {test ah, 0x44}
                        
                        if (p_10)
                            goto label_45a9ed
                        
                        if (sub_45cc80(edi_2 + 0x65b4ac, eax_1 * 0x180 + 0x65b4ac) != 0)
                            goto label_45a9ed
                        
                        if (sub_45cc80(edi_2 + 0x65b4bc, eax_1 * 0x180 + 0x65b4bc) != 0)
                            goto label_45a9ed
                        
                        *(edi_2 + 0x65b4f0) - *(eax_1 * 0x180 + 0x65b4f0)
                        bool p_12 = unimplemented  {test ah, 0x44}
                        
                        if (p_12)
                            goto label_45a9ed
                    
                    data_cdf3dc = i - data_cdf3d8 + 1
                
                edx_1 = var_8_1
            
            i += 1
        while (i s< data_7db388)
    
    sub_45a060()
    sub_45a3c0()
    data_cdf3fc = 5
    sub_4bd1a0(0)
}
