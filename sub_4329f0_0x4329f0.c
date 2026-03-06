// 函数名称: sub_4329f0
// 虚拟地址: 0x4329f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4329f0(int32_t* arg1, char arg2)
{
    // 第一条实际指令: void* result = data_5bcaec
    void* result = data_5bcaec
    
    if (result != arg1[0x159])
        result = sub_443fc0()
        
        if (result == 0 || arg2 != 0)
        label_432a68:
            
            if (*arg1 != 0)
                sub_44e4d0(result, &data_5559b1, "gfx.type == SHGFX_CARD", 
                    "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x1c2, "ShZoomCard")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int128_t xmm0_1 = data_59e690
            arg1[0x13f] = 0
            int32_t var_e4 = 1
            __builtin_memcpy(&arg1[0x28], &arg1[0x42], 0x68)
            int128_t var_e0_1 = xmm0_1
            void var_7c
            __builtin_memcpy(&var_7c, &var_e4, 0x68)
            int32_t var_14_1 = 6
            int32_t var_10_1 = 0
            __builtin_memcpy(&arg1[0x5c], &var_7c, 0x70)
            arg1[0x13c] = 1
            int32_t eax_2 = arg1[0x159]
            *(arg1 + 0x508) = *(arg1 + 0x10c)
            data_5bcaec = eax_2
            
            if (sub_443fc0() != 0 && *(sub_443fc0() + 0x14) == 6 && sub_432960(arg1, 0x27) != 0)
                return sub_443df0(6)
            
            if (sub_443fc0() != 0 && *(sub_443fc0() + 0x14) == 0xe && sub_432960(arg1, 1) != 0)
                return sub_443df0(0xe)
            
            result = sub_443fc0()
            
            if (result != 0)
                result = sub_443fc0()
                
                if (*(result + 0x14) == 0x11)
                    result = sub_432960(arg1, 8)
                    
                    if (result.b != 0)
                        return sub_443df0(0x11)
        else
            int32_t edx
            
            if (*(sub_443fc0() + 0x14) != 6)
                if (*(sub_443fc0() + 0x14) == 0x11)
                    edx = 8
                    goto label_432a5b
                
                result = sub_443fc0()
                
                if (*(result + 0x14) == 0xe)
                    edx = 1
                    goto label_432a5b
            else
                edx = 0x27
            label_432a5b:
                result = sub_432960(arg1, edx)
                
                if (result.b != 0)
                    goto label_432a68
    
    return result
}
