// 函数名称: sub_4f49a0
// 虚拟地址: 0x4f49a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4f49a0(int32_t arg1 @ xmm0, int32_t arg2 @ xmm1)
{
    // 第一条实际指令: int32_t* eax = sub_4c0e10(data_ce2758)
    int32_t* eax = sub_4c0e10(data_ce2758)
    int32_t* ecx_1 = *eax
    eax[0xb] = arg1
    eax[0xf] = arg2
    
    if (ecx_1[1] == 0x18)
        void* eax_1 = sub_4459f0(ecx_1)
        int32_t esi_1 = 0
        
        if (*(eax_1 + 0x14) s<= 0)
        label_4f4a13:
            esi_1 = 0xffffffff
        else
            int32_t edi_1 = 0
            
            while (_strncmp(*(*(eax_1 + 0x10) + edi_1), "world locator", 0xd) != 0)
                esi_1 += 1
                edi_1 += 0x14
                
                if (esi_1 s>= *(eax_1 + 0x14))
                    goto label_4f4a13
        
        int32_t* edi_2 = eax
        eax = edi_2[0x24]
        edi_2[0x1e] = esi_1
        data_ce275c = eax
        int32_t* ecx_2 = *edi_2
        
        if (ecx_2[1] == 0x18)
            char** eax_4 = sub_4459f0(ecx_2)
            char* edx
            
            if (eax_4[1] s<= 0)
                edx = nullptr
            else
                eax_4 = *eax_4
                edx = *eax_4
            
            sub_4c1ed0(eax_4, edx, edi_2, 1f, 0)
            void* result = sub_4f4410(edi_2, 1)
            data_ce2760 = 0
            return result
    
    sub_44e4d0(eax, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
        "c:\ax2017\engine\assetutils.cpp", 0x2e6, "FlanimGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
