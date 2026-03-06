// 函数名称: sub_4869c0
// 虚拟地址: 0x4869c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4869c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = data_654ec8
    int32_t eax = data_654ec8
    char const* const var_30
    int32_t var_2c
    char const* const var_28_1
    char* ecx
    
    if (eax u< data_654ec0)
        eax = data_654ec4
        int32_t esi_1 = data_654ebc
        
        if (eax u<= esi_1)
            int32_t ecx_1 = data_654eb8
            int32_t eax_1
            
            if (eax != esi_1)
                esi_1 = eax
                eax_1 = *(eax * 0x438 + ecx_1 + 0x434)
            else
                eax_1 = esi_1 + 1
                data_654ebc = eax_1
            
            data_654ec4 = eax_1
            uint32_t (* edi_2)[0x4] = esi_1 * 0x438 + ecx_1
            uint32_t (* var_10_1)[0x4] = edi_2
            _memset(edi_2, 0, 0x434)
            (*edi_2)[0x10d] = data_654ecc << 0x10 | esi_1
            eax = data_654ecc + 1
            
            if (eax == 0x10000)
                eax = 1
            
            data_654ec8 += 1
            data_654ecc = eax
            (*edi_2)[1] = arg1
            
            if (arg1[1] == 0x1e)
                int32_t* ebx_1 = sub_4459f0(arg1)
                int32_t* var_14_1 = ebx_1
                eax = ebx_1[1]
                
                if (eax s< 0x100)
                    uint32_t (* i)[0x4] = nullptr
                    uint32_t (* i_1)[0x4] = nullptr
                    
                    if (eax s> 0)
                        int32_t eax_8 = 0
                        int32_t var_c_1 = 0
                        
                        do
                            void* ebx_3 = *ebx_1 + eax_8
                            int32_t eax_9 = *(ebx_3 + 4)
                            
                            if (eax_9 == 6)
                                uint32_t (* eax_19)[0x4] = sub_486810(eax_9 - 6, i, edi_2, *(ebx_3 + 8))
                                uint32_t ecx_10
                                
                                if ((*eax_19)[2] s<= *eax_19)
                                    ecx_10.b = *(ebx_3 + 0x30)
                                else
                                    ecx_10.b = (*eax_19)[3].b
                                
                                if (ecx_10.b == 0)
                                    eax_19[1][0] = 0x3f800000
                                else
                                    eax_19[1][0] = 0
                            else if (eax_9 == 8)
                                uint32_t (* eax_16)[0x4] = sub_486810(eax_9 - 8, i, edi_2, *(ebx_3 + 8))
                                int32_t* eax_17 = sub_4c0e10(*(ebx_3 + 0x34))
                                sub_4c1ed0(eax_17, *(ebx_3 + 0x38), eax_17, *(ebx_3 + 0x40), 
                                    *(ebx_3 + 0x3c))
                                i = i_1
                                (*eax_16)[0x27] = eax_17[0x24]
                                edi_2 = var_10_1
                            else if (eax_9 == 9)
                                uint32_t (* eax_13)[0x4] = sub_486810(eax_9 - 9, i, edi_2, *(ebx_3 + 8))
                                int32_t* ecx_4 = *(ebx_3 + 0x44)
                                
                                if (ecx_4 != 0)
                                    int32_t* eax_14 = sub_4953d0(ecx_4, &data_571d90)
                                    eax_14[8] = 1
                                    eax_14[0x1d].w = 0
                                    eax_13[0xa][0] = eax_14[0x1e]
                            
                            ebx_1 = var_14_1
                            i += 1
                            eax_8 = var_c_1 + 0x118
                            i_1 = i
                            var_c_1 = eax_8
                        while (i s< ebx_1[1])
                    
                    return (*edi_2)[0x10d]
                
                var_28_1 = "UIStateLoad"
                var_2c = 0x55a
                ecx = "layout.numElements < MAX_UI_ELEMENTS"
            else
                var_28_1 = "UIDefGet"
                var_2c = 0x10d
                ecx = "ptr->assetType == ASSET_TYPE_UI"
            
            var_30 = "c:\ax2017\engine\uidef.cpp"
        else
            var_28_1 = "DataArray<struct UIState>::DataArrayAlloc"
            var_2c = 0xf5
            var_30 = "c:\ax2017\engine\dataarray.h"
            ecx = "mFreeListHead <= mMaxUsedCount"
    else
        var_28_1 = "DataArray<struct UIState>::DataArrayAlloc"
        var_2c = 0xf4
        var_30 = "c:\ax2017\engine\dataarray.h"
        ecx = "mUsedCount < mMaxSize"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_30, var_2c, var_28_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
