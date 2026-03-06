// 函数名称: sub_416470
// 虚拟地址: 0x416470
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_416470(int32_t* arg1, void* arg2, char* arg3)
{
    // 第一条实际指令: void var_344
    void var_344
    int32_t eax_1 = __security_cookie ^ &var_344
    sub_4162a0()
    int32_t* eax_2 = sub_415d70(arg1, &data_e47c18)
    *arg3 = eax_2.b
    void var_340
    void* ecx_1 = &var_340
    int32_t eax_3
    int32_t edx_1
    
    if (*(arg2 + 4) != 2)
        eax_3 = sub_481a70(eax_2, arg1, ecx_1, &data_571dbc, 9)
        edx_1 = 0
    else
        eax_3 = sub_481a70(eax_2, arg1, ecx_1, &data_571dbc, 9)
        edx_1 = *(arg2 + 0x10)
    
    int32_t ecx_3 = sub_479b90(eax_3, edx_1, &var_340, 1)
    void* eax_4 = *(arg2 + 4)
    char const* const var_35c
    int32_t var_358
    char const* const var_354
    char* ecx_4
    
    if (eax_4 u> 3)
        var_354 = "ClientMouseoverAction"
        var_358 = 0x356
        var_35c = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx_4 = "Halt"
    else
        switch (eax_4)
            case nullptr, 2, 3
                eax_4 = data_65ac30
                
                if (eax_4 != 0)
                    int32_t eax_5 = *(eax_4 + 0x20)
                    
                    if (eax_5 == 0 || eax_5 != 1)
                        data_5bcc84 = 0
                    
                    goto label_41652a
                
                var_354 = "GetLocalSettings"
                var_358 = 0x23d
                var_35c = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                ecx_4 = "gGameSettings.localSettings"
            case 1
                sub_443340(ecx_3, *(arg2 + 8))
            label_41652a:
                int32_t eax_6 = *(arg2 + 4)
                
                if (eax_6 != 1 && (eax_6 != 2 || *(arg2 + 0x1c) != 1))
                    @__security_check_cookie@4(eax_1 ^ &var_344)
                    return 0
                
                @__security_check_cookie@4(eax_1 ^ &var_344)
                return 2
    
    sub_44e4d0(eax_4, &data_5559b1, ecx_4, var_35c, var_358, var_354)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
