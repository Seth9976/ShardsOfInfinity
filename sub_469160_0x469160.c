// 函数名称: sub_469160
// 虚拟地址: 0x469160
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_469160(int32_t arg1)
{
    // 第一条实际指令: void* i_1 = nullptr
    void* i_1 = nullptr
    sub_47b8c0(&data_5c99a0, &i_1)
    void* i = i_1
    
    if (i != 0xffffffff)
        int32_t esi_1 = data_5cd9f8
        
        do
            if (*(i + 0x6a4) == esi_1 && *(i + 0x788) == 0 && *(i + 0x6a8) == arg1)
                return i
            
            sub_47b8c0(&data_5c99a0, &i_1)
            i = i_1
        while (i != 0xffffffff)
    
    sub_44e4d0(i, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x189e, "UI2GetIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
