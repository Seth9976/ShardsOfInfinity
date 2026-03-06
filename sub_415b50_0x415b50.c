// 函数名称: sub_415b50
// 虚拟地址: 0x415b50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_415b50(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = 0
    char const* const var_30
    int32_t var_2c_2
    char const* const var_28_2
    int32_t* eax_8
    char* ecx_3
    
    if (*arg2 != 1 || (arg2[1].b & 6) == 0)
    label_415c1c:
        void* eax_18 = *arg2
        
        if (eax_18 != 2 && eax_18 != 3)
            if (eax_18 != 4 && eax_18 != 5)
                if (eax_18 == 6)
                    float xmm0_2 = arg2[0x1d] f- arg2[0x1b]
                    float var_14 = arg2[0x1c] f- arg2[0x1a]
                    float var_10_2 = xmm0_2
                    sub_4414a0(&var_14, &arg2[2], arg1, 2, &data_571d90, &var_14, &arg2[0x1c])
                    *arg2 = 0
                    char* eax_15
                    eax_15.b = 1
                    return eax_15
                
                if ((arg2[1].b & 2) != 0)
                    int32_t var_28_6 = 0
                    sub_415a40(eax_18, arg2, arg1)
                    *arg2 = 0
                    char* eax_16
                    eax_16.b = 1
                    return eax_16
            
            goto label_415d26
        
        float xmm0_4 = arg2[0x1c] f- arg2[0x1a]
        float xmm0_6 = arg2[0x1d] f- arg2[0x1b]
        int32_t ecx_10
        
        if (eax_18 == 2)
            if (sub_443fc0() != 0)
                goto label_415d23
            
            if (xmm0_4 <= 0f)
                ecx_10 = 1
                goto label_415d1e
            
            ecx_10 = 0
        label_415d1e:
            sub_43a240(ecx_10)
        label_415d23:
            ebx.b = 1
        label_415d26:
            *arg2 = 0
            eax_18.b = ebx.b
            return eax_18
        
        eax_8 = eax_18 - 3
        
        if (eax_18 == 3)
            if (sub_443fc0() != 0)
                goto label_415d23
            
            if (xmm0_6 <= 0f)
                ecx_10 = 1
                goto label_415d1e
            
            ecx_10 = 0
            goto label_415d1e
        
        var_28_2 = "PressEnd"
        var_2c_2 = 0x24a
        var_30 = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx_3 = "Halt"
    else
        int32_t eax_2 = (*arg2[0xd])()
        
        if (eax_2 != (*arg2[2])())
            goto label_415c1c
        
        if (eax_2(&arg2[0xd], &arg2[2]) == 0)
            goto label_415c1c
        
        eax_8 = data_65aabc
        
        if (eax_8 != 0)
            int32_t ecx_4 = *eax_8
            bool c = ecx_4 u< arg2[0x18]
            int32_t eax_9 = eax_8[1]
            int32_t temp5 = arg2[0x19]
            bool s = sbb.d(eax_9, temp5, c) s< 0
            bool o = unimplemented  {sbb eax, dword [esi+0x64]}
            int32_t var_10_1 = sbb.d(eax_9, temp5, c)
            
            if (not(s) && ((sbb.d(eax_9, temp5, c) != 0 && s == o) || ecx_4 - arg2[0x18] u> 0x1f4))
                int32_t var_28_3 = 1
                sub_415a40(1, arg2, arg1)
                *arg2 = 0
                char* eax_11
                eax_11.b = 1
                return eax_11
            
            int32_t var_28_4 = 0
            sub_415a40(0, arg2, arg1)
            *arg2 = 0
            char* eax_12
            eax_12.b = 1
            return eax_12
        
        var_28_2 = "GetClient"
        var_2c_2 = 0x74
        var_30 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_3 = "gClient"
    
    sub_44e4d0(eax_8, &data_5559b1, ecx_3, var_30, var_2c_2, var_28_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
