// 函数名称: sub_4d6df0
// 虚拟地址: 0x4d6df0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4d6df0(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x4240) == 0)
    if (*(arg1 + 0x4240) == 0)
        *(arg1 + 0x4240) = sub_45cd70(0x14c000)
        *(arg1 + 0x4248) = 0x1000
        *(arg1 + 0x4258) = "glbuffers"
        *(arg1 + 0x4254) = 0xdb8c
        *(arg1 + 0x5034) = 0
        return 0xdb8c
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "mpBlock == NULL", "c:\ax2017\engine\dataarray.h", 0xce, 
        "DataArray<struct OpenGLBufferData>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
