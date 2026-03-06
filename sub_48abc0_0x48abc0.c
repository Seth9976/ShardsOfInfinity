// 函数名称: sub_48abc0
// 虚拟地址: 0x48abc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_48abc0(void* arg1)
{
    // 第一条实际指令: uint32_t result = *(arg1 + 0x10) - 1
    uint32_t result = *(arg1 + 0x10) - 1
    
    if (result u<= 0x10)
        result = zx.d(lookup_table_48ac18[result])
        
        switch (result)
            case 0
                result.b = 0
                return result
            case 2
                sub_44e4d0(result, &data_5559b1, "Halt", "c:\ax2017\engine\definition.cpp", 0x38, 
                    "DefTypeIsDeepStructure")
                
                if (IsDebuggerPresent() != 1)
                    noreturn sub_44e680() __tailcall
                
                breakpoint
    
    result.b = 1
    return result
}
