// 函数名称: sub_4b0ad0
// 虚拟地址: 0x4b0ad0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4b0ad0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* result = __security_cookie ^ &__saved_ebp
    int32_t* result_2 = result
    int32_t* ebx = arg1
    int32_t* var_24 = ebx
    ebx[0x17] += 1
    int32_t* ecx = *ebx
    ebx[0x11f] = 0
    
    if (ecx != 0)
        if (ecx[1] != 0x20)
            sub_44e4d0(result, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB", 
                "c:\ax2017\engine\fabdef.cpp", 0xe7, "FabDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = sub_4459f0(ecx)
        int32_t* result_3 = result
        int32_t i = 0
        int32_t* result_4 = result_3
        int32_t i_1 = 0
        
        if (result_3[1] s> 0)
            result = nullptr
            int32_t* result_1 = nullptr
            
            do
                void* esi_2 = *result_3 + result
                uint32_t (* eax_1)[0x4] = sub_4b07c0(ebx, i)
                int32_t ecx_2 = *esi_2
                uint32_t (* edx_2)[0x4] = eax_1
                uint32_t (* var_20_1)[0x4] = edx_2
                
                if (ecx_2 == 2)
                    sub_488b90(sub_4b39b0(ebx[0x133], i), (*var_20_1)[0x132].b)
                else if (ecx_2 == 5)
                    uint32_t ebx_1
                    int64_t xmm0_1
                    
                    if ((*edx_2)[0x1b] s<= (*edx_2)[0x17])
                        xmm0_1 = *(esi_2 + 0x7c)
                        ebx_1 = *(esi_2 + 0x84)
                    else
                        xmm0_1 = edx_2[7][0].q
                        ebx_1 = (*edx_2)[0x1e]
                    
                    int32_t j = 0
                    int32_t j_1 = 0
                    
                    if (xmm0_1.d s> 0)
                        int32_t edi_1 = xmm0_1:4.d
                        
                        do
                            int32_t eax_2 = 0
                            int32_t var_18_1 = 0
                            
                            if (edi_1 s> 0)
                                do
                                    int32_t edi_2 = 0
                                    
                                    if (ebx_1 s> 0)
                                        int32_t var_50_1 = eax_2
                                        int64_t xmm0_2 = j.q
                                        
                                        do
                                            int32_t* eax_3 = *(esi_2 + 0x90)
                                            int64_t var_14 = xmm0_2
                                            int32_t var_c_1 = edi_2
                                            
                                            if (*eax_3 != 0)
                                                sub_4b0870(&var_14, edx_2, esi_2, &var_14)
                                                sub_4b0ad0()
                                                xmm0_2 = j.q
                                                edx_2 = var_20_1
                                            
                                            edi_2 += 1
                                        while (edi_2 s< ebx_1)
                                        
                                        eax_2 = var_18_1
                                        j = j_1
                                    
                                    edi_1 = xmm0_1:4.d
                                    eax_2 += 1
                                    var_18_1 = eax_2
                                while (eax_2 s< edi_1)
                            
                            j += 1
                            j_1 = j
                        while (j s< xmm0_1.d)
                        
                        i = i_1
                    
                    ebx = var_24
                
                result_3 = result_4
                i += 1
                result = &result_1[0x2e]
                i_1 = i
                result_1 = result
            while (i s< result_3[1])
    
    @__security_check_cookie@4(result_2 ^ &__saved_ebp)
    return result
}
