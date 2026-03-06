// 函数名称: sub_437fe0
// 虚拟地址: 0x437fe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_437fe0(int32_t* arg1)
{
    // 第一条实际指令: bool cond:0 = data_5bcd78 == 0
    bool cond:0 = data_5bcd78 == 0
    int64_t var_14 = 0
    
    if (not(cond:0))
        if (data_5bb244.d != 0 || data_5bb264 != 0)
            return var_14.d
        
        void* eax_1 = sub_443fc0()
        
        if (eax_1 == 0 || *(eax_1 + 0x18) != 0)
            var_14.d = &data_5bcd7c
            int32_t result = 0
            int128_t* ebx = nullptr
            int32_t result_1 = 0
            var_14:4.d = 0
            sub_445070(&data_5bcd7c, &var_14:4)
            
            for (int32_t* i = var_14:4.d; i != 0xffffffff; i = var_14:4.d)
                if (*i == 0 && i[0x14c] != 0 && sub_4333a0(i) != 0 && data_5bcca8 != i[0x159])
                    i[0x14c]
                    void var_34
                    int128_t* eax_4 = sub_47a430(&var_34, 0)
                    bool cond:1_1 = *i != 0
                    int128_t var_24 = *eax_4
                    char const* const var_50
                    int32_t var_4c_2
                    char const* const var_48_2
                    char* ecx_7
                    
                    if (not(cond:1_1))
                        void* ecx_2 = data_65aabc
                        
                        if (ecx_2 == 0)
                            var_48_2 = "GetClient"
                            var_4c_2 = 0x74
                            var_50 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                            ecx_7 = "gClient"
                        label_4381c4:
                            sub_44e4d0(eax_4, &data_5559b1, ecx_7, var_50, var_4c_2, var_48_2)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        if (i[2] == *(ecx_2 + 0x648) && i[0x13c] == 0)
                            int32_t eax_6 = i[0x42]
                            
                            if (eax_6 == 1)
                                if (i[0x43] == 0x16)
                                    var_24:0xc.d = var_24:0xc.d + 10000f
                                else if (eax_6 == eax_6 && i[0x43] == 0x12)
                                    var_24:0xc.d = var_24:0xc.d + 10000f
                        
                        goto label_438116
                    
                label_438116:
                    
                    if (sub_4144c0(&var_24, arg1) != 0)
                        int32_t esi = i[0x45]
                        int32_t eax_9 = sub_4338d0(i) << 0x10
                        int32_t ecx_5 = 0
                        
                        if (esi != 0xffffffff)
                            ecx_5 = esi
                        
                        eax_4 = eax_9 | ecx_5
                        
                        if (eax_4 == 0xffffffff)
                            var_48_2 = "ShGfxHitTest"
                            var_4c_2 = 0xe11
                            var_50 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                            ecx_7 = "uiLayer != -1"
                            goto label_4381c4
                        
                        result = result_1
                        
                        if (result == 0 || eax_4 s> ebx)
                            result = i[0x159]
                            ebx = eax_4
                            result_1 = result
                
                sub_445070(var_14.d, &var_14:4)
            
            return result
    
    return var_14.d
}
