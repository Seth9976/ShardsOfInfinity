// 函数名称: sub_437100
// 虚拟地址: 0x437100
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_437100(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* eax_1 = __security_cookie ^ &__saved_ebp
    void* var_8 = eax_1
    void* ecx = data_65aabc
    char const* const var_38
    int32_t var_34
    char const* const var_30
    char* ecx_1
    
    if (ecx != 0)
        eax_1 = arg1[1]
        
        if (eax_1 != *(ecx + 0x648))
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_1
        
        eax_1 = *arg1
        
        if (eax_1 == 2)
            if (arg1[0xcf] s> 0)
                goto label_437166
            
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_1
        
        if (eax_1 == 8)
        label_437166:
            int32_t eax_2 = sub_437010()
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_2
        
        if (eax_1 != 6)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_1
        
        int32_t esi_1 = 0
        int32_t i = 0
        
        if (arg1[0xcd] s> 0)
            int32_t var_1c[0x5]
            
            do
                int32_t j = sub_437070(*(arg1[0xcc] + (i << 2)))[2]
                eax_1 = nullptr
                
                if (esi_1 s<= 0)
                label_4371b3:
                    var_1c[esi_1] = j
                    esi_1 += 1
                else
                    while (var_1c[eax_1] != j)
                        eax_1 += 1
                        
                        if (eax_1 s>= esi_1)
                            goto label_4371b3
                
                i += 1
            while (i s< arg1[0xcd])
            
            if (esi_1 s> 0)
                int32_t eax_5 = sub_452ac0()
                data_5bcaf8 = 0
                data_5bcaf0 = 0
                int32_t eax_6 = var_1c[modu.dp.d(0:eax_5, esi_1)]
                
                if (data_5bcb00 == eax_6)
                    eax_6 = 0xffffffff
                
                data_5bcb00 = eax_6
                eax_1 = sub_443fc0()
                
                if (eax_1 != 0)
                    eax_1 = sub_443fc0()
                    
                    if (*(eax_1 + 0x14) == 8)
                        void* eax_7 = sub_443df0(8)
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return eax_7
                
                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                return eax_1
        
        var_30 = "RandomInt"
        var_34 = 0x4f
        var_38 = "c:\ax2017\engine\random.cpp"
        ecx_1 = "maxPlusOne > 0"
    else
        var_30 = "GetClient"
        var_34 = 0x74
        var_38 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_1, var_38, var_34, var_30)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
