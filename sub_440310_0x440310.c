// 函数名称: sub_440310
// 虚拟地址: 0x440310
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_440310(void* arg1, char arg2)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    
    if (arg2 != 0)
        return 
    
    uint32_t eax_2 = zx.d((*(arg1 + 4)).w)
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx
    
    if (eax_2 u>= 0xc8)
        var_8 = "CardGet"
        var_c = 0x87
        var_10 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
        ecx = "idNoMimic < MAX_CARDS"
    label_4403a4:
        sub_44e4d0(eax_2, &data_5559b1, ecx, var_10, var_c, var_8)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    eax_2 = *(*((eax_2 << 5) + data_5c2e2c + 0x14) + 0xc) - 1
    
    if (eax_2 u> 3)
        var_8 = "SoundPlayAcquireCard"
        var_c = 0x1e52
        var_10 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
        ecx = "Halt"
        goto label_4403a4
    
    switch (eax_2)
        case 0
            data_dfceec
            sub_482460()
        case 1
            data_dfcee8
            sub_482460()
        case 2
            data_dfcef0
            sub_482460()
        case 3
            data_dfcef4
            sub_482460()
}
