// 函数名称: sub_46b230
// 虚拟地址: 0x46b230
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_46b230(int32_t arg1, int32_t arg2, char* arg3, int128_t* arg4)
{
    // 第一条实际指令: *(arg3 + 0x64c) = 0
    *(arg3 + 0x64c) = 0
    void* eax = sub_46b120(arg3, arg2)
    
    if (eax != 0)
        return sub_46b0a0(eax, arg2, eax, arg4)
    
    sub_44e4d0(eax, &data_5559b1, "&attribMap", "c:\ax2017\engine\ui2.cpp", 0x1c8e, 
        "AssignPropertyRect")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
