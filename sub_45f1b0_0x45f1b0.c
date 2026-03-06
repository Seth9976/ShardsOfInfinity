// 函数名称: sub_45f1b0
// 虚拟地址: 0x45f1b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_45f1b0(int32_t arg1, int32_t* arg2, int32_t* arg3, int128_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg2
    int32_t* var_8 = arg2
    
    if (arg3[1] != 0x22)
        sub_44e4d0(arg1, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI2", "c:\ax2017\engine\ui2.cpp", 
            0x623, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax = sub_4459f0(arg3)
    
    if (eax[1] == 0)
        *arg4 = data_571d08
        return arg4
    
    int32_t* eax_2 = *eax
    void* eax_3 = sub_4b8ac0(eax_2, eax_2, &data_5b1d6c, data_dff67c, 0x68)
    void* var_10 = eax_3
    int32_t var_c_1
    int32_t edx_1
    
    if (eax_3 != 0)
        edx_1 = 0
        var_c_1 = 0
    
    int32_t* edx_3
    
    if (eax_3 == 0 || arg5 s<= 0)
    label_45f27e:
        edx_3 = eax_2
    else
        int32_t* ecx = var_8
        
        while (true)
            if (ecx[2] == 0)
                int32_t esi_1 = 0
                
                if (*(eax_3 + 4) s> 0)
                    int32_t ebx_1 = 0
                    
                    while (true)
                        int32_t* edi_2 = *eax_3 + ebx_1
                        char* eax_5 = (***ecx)()
                        
                        if (__stricmp(*edi_2, eax_5) == 0)
                            int32_t edx_2 = edi_2[1]
                            int32_t ecx_2 = 0
                            
                            if (edx_2 s> 0)
                                eax_3 = edi_2[2]
                                
                                while (*eax_3 != 0x71)
                                    ecx_2 += 1
                                    eax_3 += 8
                                    
                                    if (ecx_2 s>= edx_2)
                                        goto label_45f25d
                                
                                edx_3 = &edi_2[1]
                                break
                        
                    label_45f25d:
                        eax_3 = var_10
                        esi_1 += 1
                        ecx = var_8
                        ebx_1 += 0xc
                        
                        if (esi_1 s>= *(eax_3 + 4))
                            edx_1 = var_c_1
                            goto label_45f26f
                    
                    break
            
        label_45f26f:
            edx_1 += 1
            ecx = &ecx[6]
            var_c_1 = edx_1
            var_8 = ecx
            
            if (edx_1 s>= arg5)
                goto label_45f27e
    
    *arg4 = *sub_4b8ac0(eax_3, edx_3, &data_5b1d6c, data_e4712c, 0x71)
    return arg4
}
