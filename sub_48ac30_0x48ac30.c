// 函数名称: sub_48ac30
// 虚拟地址: 0x48ac30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_48ac30(void* arg1)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x10)
    int32_t ecx = *(arg1 + 0x10)
    uint32_t result = ecx - 1
    
    if (result u> 0x2a)
    label_48ac4c:
        
        if (ecx s<= 0)
            result.b = 0
            return result
        
        if (ecx s>= 0x12)
            result.b = 0
            return result
        
        sub_44e4d0(result, &data_5559b1, "!DefTypeIsBuiltIn(pDefMap)", 
            "c:\ax2017\engine\definition.cpp", 0x65, "DefTypeCanBeInArray")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_44e680() __tailcall
        
        breakpoint
    
    result = zx.d(lookup_table_48ac94[result])
    
    switch (result)
        case 0
            result.b = 1
            return result
        case 1
            result.b = 0
            return result
        case 2
            goto label_48ac4c
}
