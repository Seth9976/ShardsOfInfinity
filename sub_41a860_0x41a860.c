// 函数名称: sub_41a860
// 虚拟地址: 0x41a860
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_41a860(char* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_4c
    _strncpy(&var_4c, arg1, 0x40)
    void* result = data_65aabc
    int16_t var_d = 0x100
    
    if (result == 0)
        sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(result + 0x18) == 3)
        result = *(result + 0x14)
        void* ecx = data_65acf4
        
        if (result != 0)
            uint32_t edx_1 = zx.d(result.w)
            
            if (edx_1 u< *(ecx + 4))
                void* esi_2 = edx_1 * 0x4c + *ecx
                
                if (*(esi_2 + 0x48) == result)
                    int32_t var_54_1 = 0xf42a6
                    sub_450c90(result, 0x41, esi_2 + 0x3c)
                    result = sub_450a70(&var_4c, 0x41, esi_2 + 0x3c, &var_4c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
