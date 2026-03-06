// 函数名称: sub_434410
// 虚拟地址: 0x434410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_434410(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    uint32_t eax = zx.d(arg1.w)
    
    if (eax u< 0xc8)
        void* result
        result.b = *(*((eax << 5) + data_5c2e2c + 0x14) + 0x28) == 1
        return result
    
    sub_44e4d0(eax, &data_5559b1, "idNoMimic < MAX_CARDS", "c:\ax2017\jams\shards\code\shardsgame.cpp", 
        0x87, "CardGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
