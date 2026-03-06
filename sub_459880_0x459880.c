// 函数名称: sub_459880
// 虚拟地址: 0x459880
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_459880(int32_t arg1, int128_t* arg2, int32_t* arg3, uint32_t arg4, int32_t arg5, uint32_t arg6)
{
    // 第一条实际指令: if (arg3[1] != 2)
    if (arg3[1] != 2)
        sub_44e4d0(arg3, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
            "c:\ax2017\engine\assetutils.cpp", 0x30c, "StructureDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* result = sub_4459f0(arg3)
    int32_t** result_1 = result
    int32_t* ecx = *result
    
    if (ecx == 0)
        return result
    
    int32_t i = 0
    
    if (*ecx s> 0)
        int32_t esi_1 = arg5
        result = nullptr
        int32_t* result_2 = nullptr
        
        do
            void* edi_2 = ecx[1] + result
            int32_t eax_1 = sub_4b8b40(result, edi_2 + 0x40, &data_5b6224, 0x53)
            
            if (esi_1 == 0)
                esi_1 = data_dfd4c4
                
                if (eax_1 != 0)
                    esi_1 = eax_1
            
            int32_t eax_2 = sub_4b8b40(eax_1, edi_2 + 0x40, &data_5b6224, 0x54)
            int32_t var_38_1
            int32_t* eax_3
            
            if (eax_2 == 0)
                int32_t var_14 = esi_1
                eax_3 = &var_14
                var_38_1 = 1
            else
                int32_t var_20_1 = eax_2
                int32_t var_24
                eax_3 = &var_24
                var_24 = esi_1
                var_38_1 = 2
            
            sub_458650(eax_3, arg2, edi_2, arg4, eax_3, var_38_1, arg6)
            i += 1
            esi_1 = arg5
            result = &result_2[0x49]
            result_2 = result
            ecx = *result_1
        while (i s< *ecx)
    
    return sub_459190(result, arg2, arg3, arg6)
}
