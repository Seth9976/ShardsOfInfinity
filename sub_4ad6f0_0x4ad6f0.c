// 函数名称: sub_4ad6f0
// 虚拟地址: 0x4ad6f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4ad6f0(int32_t arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    
    if (arg4 s>= 0x80)
        int32_t* result = *(*(arg3 + 0x24) + (((arg4 s>> 4 | arg4) & *(arg3 + 0x28)) << 2))
        
        if (result == 0)
            return 0
        
        while (arg4 != *result)
            result = result[2]
            
            if (result == 0)
                return result
        
        if (result == 0xfffffffc)
            return 0
        
        eax_1 = result[1]
    else
        eax_1 = *(arg3 + (arg4 << 2) + 0x30)
        
        if (eax_1 == 0xffffffff)
            return 0
    
    if (eax_1 s>= 0 && eax_1 s< *(arg2 + 0x10))
        return *(arg2 + 0x14) + eax_1 * 0x24
    
    sub_44e4d0(eax_1, &data_5559b1, "glyphIndex >= 0 && glyphIndex < pLayer->glyphCount", 
        "c:\ax2017\engine\font.cpp", 0xc7, "FontUnicodeToGlyph")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
