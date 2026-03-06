// 函数名称: sub_48ae70
// 虚拟地址: 0x48ae70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_48ae70(int32_t arg1, void* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t ecx = *(arg2 + 0x10)
    int32_t ecx = *(arg2 + 0x10)
    uint32_t eax = ecx - 1
    
    if (eax u<= 0xf)
        eax = zx.d(lookup_table_48af38[eax])
        
        switch (eax)
            case 0
                return sub_48ad30(eax, arg3, arg2, arg4)
            case 1
                int32_t result = *(arg4 + 0x24)
                *arg3 = result
                return result
    
    if (ecx s<= 0 || ecx s>= 0x12)
        char* ebx = *(arg4 + 0x24)
        
        if (ebx != 0)
            return sub_48ba10(sub_51d5b0(arg3, ebx, sub_48acc0(arg2)), arg2, arg3, nullptr, ebx)
        
        return sub_48b160(arg3, arg2) __tailcall
    
    sub_44e4d0(eax, &data_5559b1, "!DefTypeIsBuiltIn(pDefMap)", "c:\ax2017\engine\definition.cpp", 
        0xdd, "DefinitionFillArrayableFieldWithDefaults")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
