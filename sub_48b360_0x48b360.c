// 函数名称: sub_48b360
// 虚拟地址: 0x48b360
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_48b360(int32_t arg1, int32_t* arg2, int32_t arg3, uint32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: uint32_t result = arg5
    uint32_t result = arg5
    int32_t* edi_1 = *arg2 + arg3
    int32_t* esi = *edi_1
    
    if (result != 0)
        if ((arg2[0xa] & 0x100) == 0 || esi u> 0x100000)
            result = sub_48b2e0(result, result, esi, arg2, arg4)
            
            if (esi != 0)
                result = _aligned_free_base(esi)
            
            *edi_1 = 0
    else if (esi != 0)
        sub_44e4d0(result, &data_5559b1, "pArrayStart == NULL", "c:\ax2017\engine\definition.cpp", 
            0x1c6, "DefinitionDeleteVariableArray")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    return result
}
