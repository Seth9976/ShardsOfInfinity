// 函数名称: sub_4ff1c0
// 虚拟地址: 0x4ff1c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULTsub_4ff1c0()
{
    // 第一条实际指令: LRESULT result = data_d77c6c
    LRESULT result = data_d77c6c
    
    if (result != 0)
        if (result s<= 0)
            sub_44e4d0(result, &data_5559b1, "gUI.s.activeSetCount > 0", 
                "c:\ax2017\engine\editor\uieditor.cpp", 0x5b2, "LowestSelectedItem")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t esi_1 = sub_4fba30(data_d76c6c)
        int32_t edi_1 = 1
        result = data_d77c6c
        
        if (result s> 1)
            do
                int32_t eax_1 = sub_4fba30((&data_d76c6c)[edi_1])
                
                if (eax_1 s< esi_1)
                    esi_1 = eax_1
                
                result = data_d77c6c
                edi_1 += 1
            while (edi_1 s< result)
        
        int32_t ecx_3
        
        if (esi_1 != 0)
            ecx_3 = esi_1 - 1
        label_4ff21a:
            sub_5014a0(ecx_3)
            char* ecx_4
            ecx_4.b = 1
            sub_4fb880(ecx_4)
            sub_4cf4c0(data_d76c60)
            return sub_5012b0()
        
        if (result != 0)
            ecx_3 = 0
            goto label_4ff21a
    
    return result
}
