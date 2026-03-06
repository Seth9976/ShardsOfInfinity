// 函数名称: sub_4f9f20
// 虚拟地址: 0x4f9f20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4f9f20()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t result
    
    if (data_ce37a4 s> 0)
        do
            int32_t* ecx_1 = data_ce27a0
            int32_t edi_1 = (&data_ce27a4)[i]
            
            if (ecx_1[1] != 0x20)
                sub_44e4d0(result, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB", 
                    "c:\ax2017\engine\fabdef.cpp", 0xe7, "FabDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            result = *sub_4459f0(ecx_1)
            
            if (*(edi_1 * 0xb8 + result + 0x31) == 1)
                result.b = 1
                return result
            
            i += 1
        while (i s< data_ce37a4)
    
    result.b = 0
    return result
}
