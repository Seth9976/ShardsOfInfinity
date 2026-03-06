// 函数名称: sub_4fee60
// 虚拟地址: 0x4fee60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4fee60()
{
    // 第一条实际指令: if (data_d77c6c s<= 0)
    if (data_d77c6c s<= 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "gUI.s.activeSetCount > 0", 
            "c:\ax2017\engine\editor\uieditor.cpp", 0x53c, "HighestSelectedItem")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t i = 1
    int32_t result = sub_4fba30(data_d76c6c)
    
    if (data_d77c6c s> 1)
        do
            int32_t result_1 = sub_4fba30((&data_d76c6c)[i])
            
            if (result_1 s> result)
                result = result_1
            
            i += 1
        while (i s< data_d77c6c)
    
    return result
}
