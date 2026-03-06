// 函数名称: sub_48ae20
// 虚拟地址: 0x48ae20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_48ae20(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* esi_1 = arg2[4] + arg1
    void* esi_1 = arg2[4] + arg1
    char* eax = *(arg1 + *arg2)
    
    if (eax != 0)
        int32_t result = sub_4950a0(eax, 0)
        *esi_1 = result
        return result
    
    sub_44e4d0(eax, &data_5559b1, "name", "c:\ax2017\engine\definition.cpp", 0xc2, 
        "DefinitionSetHashFromName")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
