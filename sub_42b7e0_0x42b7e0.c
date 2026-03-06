// 函数名称: sub_42b7e0
// 虚拟地址: 0x42b7e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_42b7e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541ba0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_65aabc
    
    if (eax_3 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(eax_3 + 0x434) != 1)
        sub_44e4d0(eax_3, &data_5559b1, "GetClient().activeGame.gameType == GAME_LOCAL", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x2e8, "LocalGameSaveFiles")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t edi = *(eax_3 + 0x438)
    int32_t var_28 = edi
    int32_t var_2c = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x23c)
    int32_t var_30 = sub_44ebe0()
    char* var_14
    sub_44f980(&var_14, "%sgamelocal_%d_%d.xml")
    int32_t var_8_1 = 0
    sub_44f510(arg1, &var_14)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
    
    int32_t var_8_3 = 0xffffffff
    int32_t var_28_2 = edi
    int32_t var_2c_1 = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x23c)
    int32_t var_30_1 = sub_44ebe0()
    char* var_18
    sub_44f980(&var_18, "%sgamelocal_%d_%d.bin")
    int32_t var_8_4 = 2
    sub_44f510(&arg1[1], &var_18)
    int32_t var_8_5 = 3
    
    if (data_cdf414 != 0)
        char* eax_10 = var_18
        
        if (eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_44f000(&var_18)
            int32_t temp1_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 2
}
