// 函数名称: sub_4f0310
// 虚拟地址: 0x4f0310
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4f0310(int32_t* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1[2] != 4)
        int32_t eax = arg1[1]
        
        if (eax != 3)
            if (eax == 0x12)
                sub_48da50(sub_48d180(arg1), 1, arg1, 0)
                void* eax_3 = sub_490c60(arg1)
                void* var_8_1 = eax_3
                
                if (*(eax_3 + 0x14) s> 0)
                    int32_t ebx_1 = 0
                    int32_t i = 0
                    
                    do
                        int32_t* esi_1 = *(eax_3 + 0x18)
                        sub_48da50(sub_48d180(*(esi_1 + ebx_1)), 1, *(esi_1 + ebx_1), 0)
                        eax_3 = var_8_1
                        ebx_1 += 0x1c
                        i += 1
                    while (i s< *(eax_3 + 0x14))
                
                goto label_4f039a
            
            char* eax_5 = arg1[8]
            char* const ecx_5 = &data_5559b1
            
            if (eax_5 != 0)
                ecx_5 = eax_5
            
            char* const var_20_1 = ecx_5
            sub_44e260("AtlasMaker: I don't handle this asset type yet %s")
        else
            sub_48da50(sub_48d180(arg1), 1, arg1, 0)
        label_4f039a:
            result = arg1[2]
            
            if (result != 4 && result != 0)
                result.b = 1
                return result
    
    result.b = 0
    return result
}
