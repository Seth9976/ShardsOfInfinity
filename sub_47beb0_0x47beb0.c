// 函数名称: sub_47beb0
// 虚拟地址: 0x47beb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_47beb0(int32_t arg1, float* arg2, int128_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: if (not(*(arg3 + 8) f< *arg3) && not(*(arg3 + 0xc) f< *(arg3 + 4)))
    if (not(*(arg3 + 8) f< *arg3) && not(*(arg3 + 0xc) f< *(arg3 + 4)))
        *arg4 = *arg3
        *arg4 = *arg4 + *arg2
        *(arg4 + 8) = arg2[2] f+ *(arg4 + 8)
        *(arg4 + 4) = arg2[1] f+ *(arg4 + 4)
        *(arg4 + 0xc) = arg2[3] f+ *(arg4 + 0xc)
        return arg4
    
    sub_44e4d0(arg1, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0xb3, 
        "RectInflate")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
