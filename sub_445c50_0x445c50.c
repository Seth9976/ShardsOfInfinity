// 函数名称: sub_445c50
// 虚拟地址: 0x445c50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_445c50(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t var_10
    char const* const ecx_4
    
    if (arg2 u> 0xb)
        char const* const var_c_8 = "GetPileHead"
        var_10 = 0xc4
    label_445db5:
        ecx_4 = "Halt"
    label_445dc4:
        sub_44e4d0(arg3, &data_5559b1, ecx_4, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_10, 
            "GetPileHead")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    switch (arg2)
        case 0
            char const* const var_c = "GetPileHead"
            var_10 = 0x9e
            goto label_445db5
        case 1
            return arg3 + 0x19d8
        case 2
            return arg3 + 0x19f4
        case 3
            return arg3 + 0x19f8
        case 4
            int32_t i = 0
            void* result = arg3 + 0x19dc
            
            do
                if (*result != 0)
                    return result
                
                i += 1
                result += 4
            while (i s< 6)
            
            return arg3 + 0x19dc
        case 5
            if (arg4 s>= 0)
                return sub_445b50(arg3, arg4) + 0x2c
            
            char const* const var_c_1 = "GetPileHead"
            var_10 = 0xae
            ecx_4 = "who >= 0"
            goto label_445dc4
        case 6
            if (arg4 s>= 0)
                return sub_445b50(arg3, arg4) + 0x30
            
            char const* const var_c_3 = "GetPileHead"
            var_10 = 0xb4
            ecx_4 = "who >= 0"
            goto label_445dc4
        case 7
            if (arg4 s>= 0)
                return sub_445b50(arg3, arg4) + 0x28
            
            char const* const var_c_2 = "GetPileHead"
            var_10 = 0xb1
            ecx_4 = "who >= 0"
            goto label_445dc4
        case 8
            if (arg4 s>= 0)
                return sub_445b50(arg3, arg4) + 0x38
            
            char const* const var_c_5 = "GetPileHead"
            var_10 = 0xba
            ecx_4 = "who >= 0"
            goto label_445dc4
        case 9
            if (arg4 s>= 0)
                return sub_445b50(arg3, arg4) + 0x3c
            
            char const* const var_c_6 = "GetPileHead"
            var_10 = 0xbd
            ecx_4 = "who >= 0"
            goto label_445dc4
        case 0xa
            if (arg4 s>= 0)
                return sub_445b50(arg3, arg4) + 0x34
            
            char const* const var_c_4 = "GetPileHead"
            var_10 = 0xb7
            ecx_4 = "who >= 0"
            goto label_445dc4
        case 0xb
            if (arg4 s>= 0)
                return sub_445b50(arg3, arg4) + 0x40
            
            char const* const var_c_7 = "GetPileHead"
            var_10 = 0xc0
            ecx_4 = "who >= 0"
            goto label_445dc4
}
