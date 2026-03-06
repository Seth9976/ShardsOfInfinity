// 函数名称: sub_4373e0
// 虚拟地址: 0x4373e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4373e0(uint32_t arg1)
{
    // 第一条实际指令: int32_t edx = data_5bcd58
    int32_t edx = data_5bcd58
    
    if (edx s>= 5)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "gShardsClient.gui.numEliminations < MAX_PLAYERS", 
            "c:\ax2017\jams\shards\code\shardsclient.cpp", 0xcba, "EliminationSequenceAdd")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t ecx = data_5c2e2c
    data_5bcd58 = edx + 1
    uint32_t eax_2 = sub_437300(ecx, arg1)
    uint32_t (* eax_3)[0x4] = sub_4450d0(&data_5bcd7c)
    uint32_t var_8c = arg1
    int32_t var_90 = 2
    int32_t var_88 = 0xffffffff
    (*eax_3)[7] = arg1
    (*eax_3)[6] = eax_2
    int32_t var_84 = 0xffffffff
    *eax_3 = 3
    int32_t var_78 = 1
    int128_t var_74 = var_90.o
    eax_3[0x4f][0] = 0
    __builtin_memcpy(&eax_3[0xa], &var_78, 0x68)
    __builtin_memcpy(&(*eax_3)[0x42], &var_78, 0x68)
    uint32_t result = (*eax_3)[0x159]
    *((edx << 2) + &data_5bcd44) = result
    return result
}
