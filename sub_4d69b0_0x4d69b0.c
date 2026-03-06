// 函数名称: sub_4d69b0
// 虚拟地址: 0x4d69b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4d69b0(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 u> 7)
    if (arg2 u> 7)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "textureIndex >= 0 && textureIndex < 8", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x2e9, "GLDupCheck_glBindTexture")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* result = data_ce26e8
    
    if (*(result + (arg2 << 2) + 0x409c) == arg1)
        return result
    
    *(result + (arg2 << 2) + 0x409c) = arg1
    
    if (*(result + 0x4098) != arg2)
        *(result + 0x4098) = arg2
        (*__glewActiveTexture)(arg2 + 0x84c0)
    
    return glBindTexture(0xde1, arg1)
}
