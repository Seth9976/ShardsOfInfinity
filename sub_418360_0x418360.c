// 函数名称: sub_418360
// 虚拟地址: 0x418360
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_418360(int32_t arg1)
{
    // 第一条实际指令: void* edi = data_65aabc
    void* edi = data_65aabc
    char const* const var_14
    int32_t var_10
    char const* const __saved_esi
    char* ecx
    
    if (edi != 0)
        if (arg1 s>= 0)
            if (arg1 s< *(edi + 0x424))
                int32_t esi_1 = arg1 << 4
                sub_44f590(edi + 0x2c + esi_1, &data_5559b1)
                char* result = sub_51dd40(edi + 0x24 + esi_1, edi + 0x34 + esi_1, 
                    ((*(edi + 0x424) - arg1) << 4) - 0x10)
                *(edi + 0x424) -= 1
                return result
            
            __saved_esi = "GameClientRemoveFriendAtIndex"
            var_10 = 0x67a
            ecx = "friendIndex < c.numFriends"
        else
            __saved_esi = "GameClientRemoveFriendAtIndex"
            var_10 = 0x679
            ecx = "friendIndex >= 0"
        
        var_14 = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
    else
        __saved_esi = "GetClient"
        var_10 = 0x74
        var_14 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, ecx, var_14, var_10, __saved_esi)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
