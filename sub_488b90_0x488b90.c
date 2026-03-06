// 函数名称: sub_488b90
// 虚拟地址: 0x488b90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_488b90(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg2
    char var_5 = ebx.b
    
    if (arg1 == 0)
        return 
    
    uint32_t edx = zx.d(arg1.w)
    char const* const var_58
    int32_t var_54
    char const* const var_50_1
    int32_t* eax
    char* ecx_2
    
    if (edx u>= data_654ebc)
    label_488d82:
        var_50_1 = "DataArray<struct UIState>::DataArrayGet"
        var_54 = 0x6d
        ecx_2 = "DataArrayTryToGet(id) != NULL"
        var_58 = "c:\ax2017\engine\dataarray.h"
    label_488d98:
        sub_44e4d0(eax, &data_5559b1, ecx_2, var_58, var_54, var_50_1)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t ecx = data_654eb8
    eax = edx * 0x438
    
    if (*(eax + ecx + 0x434) != arg1)
        goto label_488d82
    
    void* eax_1 = edx * 0x438
    eax = eax_1 + ecx
    int32_t* var_c_1 = eax
    int32_t* ecx_1 = eax[1]
    
    if (ecx_1[1] != 0x1e)
        var_50_1 = "UIDefGet"
        var_54 = 0x10d
        var_58 = "c:\ax2017\engine\uidef.cpp"
        ecx_2 = "ptr->assetType == ASSET_TYPE_UI"
        goto label_488d98
    
    eax = sub_4459f0(ecx_1)
    uint32_t (* edi_1)[0x4] = nullptr
    int32_t* var_10_1 = eax
    uint32_t (* var_2c_1)[0x4] = nullptr
    
    if (eax[1] s<= 0)
        return 
    
    int32_t* ecx_3 = var_c_1
    int32_t* esi_1 = 0x30
    int32_t* edx_1 = var_10_1
    eax = nullptr
    int32_t* var_14_1 = nullptr
    int32_t* var_1c_1 = 0x30
    
    while (true)
        if (*(esi_1 + ecx_3) != 0)
            eax = zx.d(arg1.w)
            
            if (eax u>= data_654ebc)
                break
            
            void* ecx_4 = data_654eb8
            eax *= 0x438
            
            if (*(eax + ecx_4 + 0x434) != arg1)
                break
            
            void* ecx_5 = ecx_4 + eax_1
            
            if (*(esi_1 + ecx_5) != 0)
                eax = sub_486810(eax, edi_1, ecx_5, &data_5559b1)
                
                if (ebx.b == 0)
                    *eax += 1
                else
                    eax[0xd] = 0
            
            uint32_t (* edx_5)[0x4] = sub_486810(eax, edi_1, var_c_1, &data_5559b1)
            uint32_t (* var_38_1)[0x4] = edx_5
            void* eax_5 = *var_10_1 + var_14_1
            
            if (*(eax_5 + 4) == 2)
                void* ecx_8 = eax_5
                uint32_t eax_6
                uint32_t esi_2
                
                if (edx_5[0x12][0] s<= *edx_5)
                    eax_6 = *(ecx_8 + 0x8c)
                    esi_2 = *(ecx_8 + 0x88)
                else
                    eax_6 = (*edx_5)[0x4b]
                    esi_2 = edx_5[0x13][0]
                
                ebx = 0
                uint32_t var_20_1 = eax_6
                
                if (esi_2 s> 0)
                    uint32_t* esi_3 = &(*edx_5)[0x29]
                    uint32_t* var_24_1 = esi_3
                    
                    do
                        int32_t edi_2 = 0
                        
                        if (eax_6 s> 0)
                            do
                                bool cond:1_1 = *esi_3 == 0
                                int32_t var_40 = edi_2
                                int32_t var_3c_1 = ebx
                                
                                if (not(cond:1_1))
                                    uint32_t eax_8
                                    int32_t edx_6
                                    eax_8, edx_6 = sub_487340(&var_40, edx_5, ecx_8, &var_40)
                                    edx_6.b = var_5
                                    *(eax_8 + 0x434)
                                    sub_488b90()
                                    eax_6 = var_20_1
                                    edx_5 = var_38_1
                                
                                ecx_8 = eax_5
                                edi_2 += 1
                                esi_3 = &esi_3[1]
                            while (edi_2 s< eax_6)
                            
                            esi_3 = var_24_1
                        
                        ebx += 1
                        esi_3 = &esi_3[eax_6]
                        ecx_8 = eax_5
                        var_24_1 = esi_3
                    while (ebx s< esi_2)
                    
                    edi_1 = var_2c_1
                
                esi_1 = var_1c_1
                ebx.b = var_5
            
            eax = var_14_1
            ecx_3 = var_c_1
            edx_1 = var_10_1
        
        edi_1 += 1
        esi_1 = &esi_1[1]
        eax = &eax[0x46]
        var_2c_1 = edi_1
        var_1c_1 = esi_1
        var_14_1 = eax
        
        if (edi_1 s>= edx_1[1])
            return 
    
    goto label_488d82
}
