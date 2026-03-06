// 函数名称: sub_4d7530
// 虚拟地址: 0x4d7530
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4d7530(int32_t arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    void* edx = &data_5b8b88
    
    do
        if (*edx == arg1)
            return (i << 4) + &data_5b8b88
        
        i += 1
        edx += 0x10
    while (i u< 0x16)
    
    sub_44e4d0(i, &data_5559b1, "Halt", "c:\ax2017\engine\openglgraphics.cpp", 0x56b, 
        "GLGetTextureFormat")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
