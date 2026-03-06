// 函数名称: sub_4b0c80
// 虚拟地址: 0x4b0c80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4b0c80(int32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t* eax = sub_4b3c10(arg3)
    *eax = arg2
    *(eax + 8) = *arg4
    *(eax + 0x18) = arg4[1]
    *(eax + 0x28) = arg4[2]
    *(eax + 0x38) = arg4[3]
    *(eax + 0x48) = arg4[4]
    int32_t eax_2 = arg4[5].d
    eax[0x16] = eax_2
    
    if (not(eax[0xf] f<= 0f))
        sub_4b0ad0(eax)
        return eax[0x133]
    
    sub_44e4d0(eax_2, &data_5559b1, "state.transform.t.s > 0", "c:\ax2017\engine\fabdef.cpp", 0x210, 
        "FabBegin")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
