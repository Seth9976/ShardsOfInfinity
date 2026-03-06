// 函数名称: sub_478c90
// 虚拟地址: 0x478c90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_478c90(int32_t* arg1)
{
    // 第一条实际指令: sub_478bb0()
    sub_478bb0()
    int32_t edx = DragAcceptFiles(data_ce1790, 1)
    data_5cd9f8 = arg1
    data_5cea2c = 0
    data_5cea34 = 0
    data_5cea36 = 0
    data_5cda28 = 0x3e8
    data_5cda1c = 0x3f000000
    void var_20
    int128_t* eax_1 = sub_45f080(&var_20, edx, arg1, &var_20)
    float xmm2[0x4] = *eax_1
    
    if (not(_mm_shuffle_ps(xmm2, xmm2, 0xaa) f< xmm2))
        float xmm1_1 = xmm2[1]
        
        if (not(xmm2[3] < xmm1_1))
            data_5cea38 = 0xffffffff
            data_5cea3c = 0xffffffff
            data_5cda20 = xmm2 f- 100f
            data_5cda24 = xmm1_1 - 100f
            return sub_469210(0)
    
    sub_44e4d0(eax_1, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0x127, 
        "RectTopLeft")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
