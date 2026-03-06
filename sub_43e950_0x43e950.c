// 函数名称: sub_43e950
// 虚拟地址: 0x43e950
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_43e950(int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, char arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: uint32_t (* eax)[0x4] = sub_4450d0(&data_5bcd7c)
    uint32_t (* eax)[0x4] = sub_4450d0(&data_5bcd7c)
    uint32_t (* edi)[0x4] = eax
    (*edi)[3] = arg4
    (*edi)[1] = arg2
    *edi = 0
    (*edi)[2] = arg3
    *(edi + 0x16) = arg5
    int32_t var_90
    char const* const var_8c
    char* ecx_1
    
    if (arg4 - 1 u> 0xa)
        var_8c = "IsGlobalWhere"
        var_90 = 0x198a
        ecx_1 = "Halt"
    else
        eax = zx.d(*(arg4 + &jump_table_43eaa0[1]:3))
        
        switch (eax)
            case nullptr
                if (arg3 == 0xffffffff)
                label_43e9cb:
                    int32_t ecx_2
                    
                    switch (arg4)
                        case 1
                            ecx_2 = 1
                        case 2
                            ecx_2 = 4
                        case 3
                            ecx_2 = 5
                        case 4
                            ecx_2 = 6
                        case 5
                            ecx_2 = 7
                        case 6
                            ecx_2 = 0x11
                        case 7
                            ecx_2 = 0x12
                        case 8
                            ecx_2 = 9
                        case 9
                            ecx_2 = 0x13
                        case 0xa
                            ecx_2 = 0x16
                        case 0xb
                            ecx_2 = 0xa
                    
                    void var_18
                    int32_t* result = sub_437260(&var_18, arg3, ecx_2, &var_18, arg6, arg7)
                    int32_t var_80 = 1
                    int128_t xmm0 = *result
                    edi[0x4f][0] = 0
                    int128_t var_7c = xmm0
                    __builtin_memcpy(&edi[0xa], &var_80, 0x68)
                    __builtin_memcpy(&(*edi)[0x42], &var_80, 0x68)
                    return result
                
                var_8c = "ShCreateCard"
                var_90 = 0x19ac
                ecx_1 = "who == PLAYER_NONE"
            case 1
                if (arg3 != 0xffffffff)
                    goto label_43e9cb
                
                var_8c = "ShCreateCard"
                var_90 = 0x19b0
                ecx_1 = "who != PLAYER_NONE"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsclient.cpp", var_90, var_8c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
