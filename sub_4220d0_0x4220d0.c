// 函数名称: sub_4220d0
// 虚拟地址: 0x4220d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4220d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    void* eax = sub_41bbf0(arg1)
    int32_t esi = arg1[0x3f]
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x10624dd3, sub_45ccc0(arg1))
    int32_t edx_2 = edx_1 s>> 6
    int32_t eax_5 = (edx_2 u>> 0x1f) + edx_2
    int32_t ecx_2 = arg1[0x41] - eax_5
    int32_t var_1c
    char const* const var_18
    
    if (eax == 0)
        switch (esi)
            case 0
                int32_t eax_22
                eax_22.b = ecx_2 s< 0
                return (eax_22 << 2) + 1
            case 1
                return 0xe
            case 2
                return esi + 0x10
            case 0x3e8
                return 0xa
            case 0x3e9
                return 7
            case 0x3ea
                return esi - 0x3dd
        
        var_18 = "GetMultiplayerGameState"
        var_1c = 0xbe9
    else
        if (esi == 0x3e9)
            int32_t edx_3 = arg1[0x39]
            int32_t ecx_4 = 0
            
            if (edx_3 s> 0)
                void* eax_18 = &arg1[0xa]
                
                while (*eax_18 != 0x3eb)
                    ecx_4 += 1
                    eax_18 += 0x2c
                    
                    if (ecx_4 s>= edx_3)
                        break
            
            return 7
        
        if (esi == 0x3ea)
            eax_5 = *(eax + 0x20)
            bool cond:4_1
            
            if (eax_5 s> 0x3ea)
                cond:4_1 = eax_5 == 0x3ec
            label_422206:
                
                if (cond:4_1)
                    return 8
            else
                if (eax_5 == 0x3ea)
                    return 0xc
                
                if (eax_5 s>= 3)
                    if (eax_5 s<= 4)
                        return 0xc
                    
                    cond:4_1 = eax_5 == 0x3e9
                    goto label_422206
            var_18 = "LocalPlayerForfetied"
            var_1c = 0xba5
        else
            var_18 = "GetMultiplayerGameState"
            var_1c = 0xbd0
        
        if (esi == 0x3e8)
            int32_t eax_14
            eax_14.b = *(eax + 0x20) != 0x3ec
            return eax_14 + 8
        
        if (esi == 0)
            void* ecx_3
            ecx_3.b = sub_422080(eax)
            
            if (ecx_2 s< 0)
                int32_t eax_12
                eax_12.b = ecx_3.b != 0
                return eax_12 + 3
            
            if (ecx_3.b != 0)
                return 2
            
            return 0
        
        if (esi == 1)
            int32_t eax_7 = *(eax + 0x20)
            
            if (eax_7 == 3)
                return 0x10
            
            eax_5 = eax_7 - 4
            
            if (eax_7 == 4)
                return 0xf
            
            var_18 = "LocalPlayerWaiting"
            var_1c = 0xb94
        else
            if (esi == 2)
                return esi + 0xf
            
            var_18 = "GetMultiplayerGameState"
            var_1c = 0xbd0
    
    sub_44e4d0(eax_5, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
        var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
