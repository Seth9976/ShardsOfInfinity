// 函数名称: sub_489ff0
// 虚拟地址: 0x489ff0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_489ff0(int32_t arg1, uint32_t arg2 @ xmm2)
{
    // 第一条实际指令: uint32_t (* eax)[0x4]
    uint32_t (* eax)[0x4]
    eax.b = data_e477c0
    char var_10 = eax.b
    char const* const var_38
    int32_t var_34
    char const* const var_30_1
    char* ecx
    
    if (arg1 != 0)
        uint32_t ebx_1 = zx.d(arg1.w)
        
        if (ebx_1 u>= data_654ebc)
        label_48a0fe:
            var_30_1 = "DataArray<struct UIState>::DataArrayGet"
            ecx = "DataArrayTryToGet(id) != NULL"
            var_34 = 0x6d
            var_38 = "c:\ax2017\engine\dataarray.h"
        else
            int32_t edx_1 = data_654eb8
            eax = ebx_1 * 0x438
            
            if (*(eax + edx_1 + 0x434) != arg1)
                goto label_48a0fe
            
            eax = ebx_1 * 0x438
            uint32_t (* var_14_1)[0x4] = eax
            int32_t* ecx_1 = *(eax + edx_1 + 4)
            
            if (ecx_1[1] == 0x1e)
                int32_t* result = sub_4459f0(ecx_1)
                uint32_t (* esi_1)[0x4] = nullptr
                int32_t* result_1 = result
                
                if (result[1] s<= 0)
                    return result
                
                int32_t edi_1 = 0
                
                while (true)
                    int32_t eax_1 = *result
                    
                    if (*(eax_1 + edi_1 + 4) == 6)
                        eax = sub_489e30(eax_1, esi_1, arg1, var_10)
                        
                        if (ebx_1 u>= data_654ebc)
                            break
                        
                        int32_t edx_3 = data_654eb8
                        eax = ebx_1 * 0x438
                        
                        if (*(eax + edx_3 + 0x434) != arg1)
                            break
                        
                        uint32_t (* eax_2)[0x4] = sub_486810(eax, esi_1, var_14_1 + edx_3, &data_5559b1)
                        
                        if (not(arg2 f< 0))
                            (*eax_2)[5] = arg2
                            eax_2[1][0] = arg2
                    
                    result = result_1
                    esi_1 += 1
                    edi_1 += 0x118
                    
                    if (esi_1 s>= result[1])
                        return result
                
                goto label_48a0fe
            
            var_30_1 = "UIDefGet"
            var_34 = 0x10d
            var_38 = "c:\ax2017\engine\uidef.cpp"
            ecx = "ptr->assetType == ASSET_TYPE_UI"
    else
        var_30_1 = "DataArray<struct UIState>::DataArrayGet"
        var_34 = 0x6c
        ecx = "id != DATAID_NULL"
        var_38 = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_38, var_34, var_30_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
