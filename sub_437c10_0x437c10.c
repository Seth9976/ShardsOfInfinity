// 函数名称: sub_437c10
// 虚拟地址: 0x437c10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_437c10()
{
    // 第一条实际指令: void* ecx = data_65aabc
    void* ecx = data_65aabc
    char const* const var_4c_1
    int32_t var_48_1
    char const* const var_44_2
    uint32_t result
    char* ecx_1
    
    if (ecx != 0)
        result = *(ecx + 0x434)
        
        if (result == 0)
            return result
        
        if (result == 2)
            int32_t edx_1 = *(ecx + 0x438)
            
            if (edx_1 == 0)
                return result
            
            result = zx.d(edx_1.w)
            
            if (result u>= *(ecx + 0x448))
                return result
            
            result = result * 0x1d0 + *(ecx + 0x444)
            
            if (*(result + 0x1c8) != edx_1)
                return result
        
        void* eax_1 = sub_41ad20()
        result = sub_4379e0()
        int32_t ecx_2 = data_5c2d98
        int32_t var_30
        
        if (ecx_2 != 0)
            int32_t i
            
            do
                if (ecx_2 s<= 0)
                    var_44_2 = "ShEffectPeek"
                    var_48_1 = 0x1c99
                    var_4c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    ecx_1 = "c.numEffects > 0"
                    goto label_437fbe
                
                uint32_t eax_2 = sub_4400e0(ecx_2, &data_5bcd98)
                
                if (eax_2.b == 0)
                    break
                
                sub_4403d0(eax_2, data_5bcd9c, data_5bcd98, data_5bcda0, data_5bcda4, data_5bcda8, 
                    data_5bcdac, 0)
                result = data_5c2d98
                
                if (result s<= 0)
                    var_44_2 = "ShEffectPop"
                    var_48_1 = 0x1c9f
                    var_4c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    ecx_1 = "c.numEffects > 0"
                    goto label_437fbe
                
                var_30.o = data_5bcd98.o
                int64_t var_20_1 = data_5bcda8.q
                result = sub_51dd40(&data_5bcd98, 0x5bcdb0, (result * 3 - 3) << 3)
                i = data_5c2d98
                ecx_2 = i - 1
                data_5c2d98 = ecx_2
            while (i != 1)
        
        int32_t eax_6
        
        if (data_5bb1e4.d != 0x1e)
            eax_6 = 0
            
            if (data_5bb1f0.d == 0x1e)
                eax_6 = data_5bb1f0:4
        else
            eax_6 = data_5bb1e4:4
        
        int32_t eax_7
        int32_t edx_3
        eax_7, edx_3 = sub_41b780(0xe48954, eax_6, "tbl_global_play")
        
        if (data_5bcd68 == 0)
            int32_t var_2c_1 = 0
            var_30 = (*sub_4790a0(&var_30, edx_3, eax_7, &var_30)).d
            sub_4448a0(eax_7, &var_30)
        
        if (data_5bccbc == 0)
            int32_t eax_10
            
            if (data_5bb1e4.d != 0x1e)
                eax_10 = 0
                
                if (data_5bb1f0.d == 0x1e)
                    eax_10 = data_5bb1f0:4
            else
                eax_10 = data_5bb1e4:4
            
            sub_4448a0(sub_41b780(0xe48978, eax_10, "tbl_player_constructs"), &data_571d90)
        
        void* eax_13 = sub_41af80(eax_1 + 8, *(data_5c2e30 + 4))
        int32_t edi_2
        
        if (*(eax_13 + 0x14) == 3)
            edi_2 = 1
            data_5c2e30 =
                sub_436ca0(eax_13, &data_5c2e04, data_5c2e2c, eax_1, data_5c2e30, nullptr, nullptr)
        else
            eax_13 = sub_4297e0(eax_1, *(data_5c2e30 + 4))
            edi_2 = 0
            
            if (*(eax_13 + 0x10) s< *(eax_13 + 0xc))
                edi_2 = 1
                data_5c2e30 =
                    sub_436ca0(eax_13, &data_5c2e04, data_5c2e2c, eax_1, data_5c2e30, nullptr, nullptr)
        
        result = sub_41adc0()
        void* esi_2
        
        if (result.b == 0)
            esi_2 = eax_1 + 8
        else
            void* ecx_11 = data_65aabc
            
            if (ecx_11 == 0)
                goto label_437c25
            
            esi_2 = eax_1 + 8
            int32_t edx_8 = *(data_5c2e30 + 4)
            
            if (*(ecx_11 + 0x648) != edx_8 && *(sub_41af80(esi_2, edx_8) + 0x14) != 3)
                sub_41ae50(*(data_5c2e30 + 4))
        
        int32_t edx_9 = *(data_5c2e30 + 4)
        void* eax_18 = sub_41af80(esi_2, edx_9)
        int32_t ecx_16 = 0
        
        if (*(eax_18 + 0x14) != 3)
            ecx_16 = edi_2
        
        if (ecx_16 != 0)
            eax_18, edx_9 = sub_437100(data_5c2e30)
        
        int32_t ecx_18
        
        if (data_5bb1e4.d != 0x1e)
            ecx_18 = 0
            
            if (data_5bb1f0.d == 0x1e)
                ecx_18 = data_5bb1f0:4
        else
            ecx_18 = data_5bb1e4:4
        
        sub_435650(eax_18, edx_9, ecx_18, data_5c2e2c)
        result = data_5c2e00
        int32_t esi_3 = 0
        
        if (result s<= 0)
            return result
        
        void* i_1 = data_cdf428
        
        while (i_1 != 0)
            int32_t edx_10 = *((esi_3 << 2) + &data_5c2dc0)
            int32_t ecx_19 = *(i_1 + 0x10)
            var_30 = ecx_19
            
            if (edx_10 == 0)
            label_437f84:
                data_5c2e00 = result - 1
                *((esi_3 << 2) + &data_5c2dc0) = *(((result - 1) << 2) + &data_5c2dc0)
                esi_3 -= 1
            else
                uint32_t edi_3 = zx.d(edx_10.w)
                i_1 = data_cdf428
                
                if (edi_3 u>= *(ecx_19 + 4))
                    goto label_437f84
                
                void* ecx_21 = edi_3 * 0x7c + *var_30
                i_1 = data_cdf428
                
                if (*(ecx_21 + 0x78) != edx_10)
                    goto label_437f84
                
                sub_49a150(ecx_21, data_5b0f3c)
                i_1 = data_cdf428
            
            result = data_5c2e00
            esi_3 += 1
            
            if (esi_3 s>= result)
                return result
        
        var_44_2 = "GetGameData"
        var_48_1 = 0x45
        var_4c_1 = "c:\ax2017\engine\game.h"
        ecx_1 = "gpGameData"
    else
    label_437c25:
        var_44_2 = "GetClient"
        var_48_1 = 0x74
        var_4c_1 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    label_437fbe:
    sub_44e4d0(result, &data_5559b1, ecx_1, var_4c_1, var_48_1, var_44_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
