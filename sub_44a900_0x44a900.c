// 函数名称: sub_44a900
// 虚拟地址: 0x44a900
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_44a900(int32_t arg1, uint32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = sub_447380(arg3, arg4)
    int32_t* var_28 = eax_2
    
    if (*eax_2 != 0)
        void var_24
        eax_2 = sub_448960(&var_24, arg2, arg3, arg4, &var_24, 1)
        
        if (eax_2 != 2)
            if (eax_2 == 1)
                void* eax_4 = &var_24
                
                if (*(arg3 + 0x2174) s< 1)
                    void* eax_5 = sub_448ff0(eax_4, arg2, arg3, &var_24, arg4)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_5
                
                sub_4492b0(eax_4, arg2, arg3, &var_24)
            else if (eax_2 != 0)
                sub_44e4d0(eax_2, &data_5559b1, "result == POWER_CAN_USE", 
                    "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x9e3, "ExecuteExhaustPower")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t ecx_4 = *var_28
            uint32_t eax_6 = zx.d(ecx_4.b)
            eax_2 = sub_449de0(eax_6, arg2, arg3, eax_6, ecx_4 - eax_6, var_28[1], arg4, 1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_2
}
