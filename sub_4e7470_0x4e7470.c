// 函数名称: sub_4e7470
// 虚拟地址: 0x4e7470
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4e7470(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x38) == 0)
    if (*(arg1 + 0x38) == 0)
        *(arg1 + 0x38) = sub_45cd70(0x24c000)
        *(arg1 + 0x40) = 0x1000
        *(arg1 + 0x50) = "dx11buffers"
        *(arg1 + 0x4c) = 0xdee0
        return 0xdee0
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "mpBlock == NULL", "c:\ax2017\engine\dataarray.h", 0xce, 
        "DataArray<struct Dx11BufferData>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
