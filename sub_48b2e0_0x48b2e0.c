// 函数名称: sub_48b2e0
// 虚拟地址: 0x48b2e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_48b2e0(int32_t arg1, int32_t arg2, int32_t* arg3, uint32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    uint32_t ebx = arg4
    int32_t* esi = arg3
    int32_t i_1 = arg2
    uint32_t result = sub_48abc0(*(ebx + 0x18))
    
    if (result.b != 0)
        result = *(*(ebx + 0x18) + 0xc)
        arg4 = result
        
        if (result == 0)
            sub_44e4d0(result, &data_5559b1, "pDefMap->definitionSize != 0", 
                "c:\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (i_1 s> 0)
            int32_t i
            
            do
                result = sub_48b260(result, ebx, esi, arg5)
                esi += arg4
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
