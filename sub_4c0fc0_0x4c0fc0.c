// 函数名称: sub_4c0fc0
// 虚拟地址: 0x4c0fc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4c0fc0(void* arg1)
{
    // 第一条实际指令: int32_t* ecx = *(arg1 + 0x68)
    int32_t* ecx = *(arg1 + 0x68)
    int32_t eax
    
    if (ecx != 0)
        eax = sub_45d050(ecx, *(arg1 + 0x6c) * 0x60)
        *(arg1 + 0x68) = 0
    
    void* edx_3 = data_cdf428
    
    if (edx_3 != 0)
        void* edx_4 = *(edx_3 + 0xc)
        uint32_t result = zx.d(*(arg1 + 0x90))
        int32_t ecx_1 = *(edx_4 + 0xc)
        *(edx_4 + 0xc) = result
        *(arg1 + 0x90) = ecx_1
        *(edx_4 + 0x10) -= 1
        return result
    
    sub_44e4d0(eax, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
