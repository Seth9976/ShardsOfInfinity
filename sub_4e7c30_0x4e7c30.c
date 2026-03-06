// 函数名称: sub_4e7c30
// 虚拟地址: 0x4e7c30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4e7c30(int32_t arg1)
{
    // 第一条实际指令: int32_t i = data_5b8e20
    int32_t i = data_5b8e20
    int32_t* edx = &data_5b8e20
    
    while (i != 0)
        if (i == arg1)
            return edx[1]
        
        i = edx[2]
        edx = &edx[2]
    
    sub_44e4d0(i, &data_5559b1, "Halt", "c:\ax2017\engine\windows\windowsdx11.cpp", 0x20e, 
        "Dx11FormatFromTextureFormat")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
