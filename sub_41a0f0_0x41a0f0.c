// 函数名称: sub_41a0f0
// 虚拟地址: 0x41a0f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (*sub_41a0f0())[0x4]
{
    // 第一条实际指令: void* edi = data_65aabc
    void* edi = data_65aabc
    char const* const var_18
    int32_t var_14
    char const* const var_10
    int32_t* eax
    char* ecx
    
    if (edi == 0)
        var_10 = "GetClient"
        var_14 = 0x74
        var_18 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else if (*(edi + 0x628) == 0)
        uint32_t eax_1 = sub_41b670(0x100)
        *(edi + 0x628) = sub_45cff0(eax_1 << 2)
        eax = eax_1 - 1
        *(edi + 0x62c) = eax
        
        if (*(edi + 0x444) == 0)
            *(edi + 0x444) = sub_45cd70(0x7400)
            *(edi + 0x44c) = 0x40
            *(edi + 0x45c) = "networkGames"
            *(edi + 0x458) = 0xd1d8
            eax = data_65ac30
            
            if (eax != 0)
                float xmm4_1 = eax[1]
                int32_t xmm0_1 = (zx.o(0)).d
                float xmm3_1 = *eax
                int32_t xmm1_1
                
                if (0f <= xmm4_1)
                    xmm1_1 = _mm_min_ss(0x3f800000, xmm4_1)
                else
                    xmm1_1 = (zx.o(0)).d
                
                void* eax_4 = data_cdf448
                *(eax_4 + 0x1c) = xmm1_1
                
                if (not(0f > xmm3_1))
                    xmm0_1 = _mm_min_ss(0x3f800000, xmm3_1)
                
                *(eax_4 + 0x20) = xmm0_1
                void* eax_5 = sub_42aaa0(*(data_65ac38 + 0xb24))
                
                if (*(eax_5 + 0x244) != 1)
                    *(eax_5 + 0x244) = 0
                    sub_415240()
                
                eax = sub_480090()
                
                if (data_5c7980 == 0)
                    if (sub_45cd00() != 1)
                        sub_44e260("Gamecenter Connect fail")
                    else
                        sub_44e260("Gamecenter Connect success")
                        data_5c7980 = 1
                    
                    sub_44e260("Gamecenter complete")
                    eax = data_dfd01c
                    bool cond:2_1 = data_5bb160 == 0
                    data_5c99e4 = eax
                    data_5bb240 = 1
                    data_5bb280 = 0x19
                    
                    if (cond:2_1)
                        void* eax_7 = sub_45cd70(0x18f0)
                        int32_t ecx_4 = data_dfc94c
                        data_5bb160 = eax_7
                        data_5bb168 = 4
                        data_5bb178 = "cardsets"
                        data_5bb174 = 0xd9b4
                        eax = sub_41a000(ecx_4)
                        
                        if (data_5bcd7c == 0)
                            data_5bcd7c = sub_45cd70(0x15a000)
                            data_5bcd84 = 0x400
                            eax = 0xdde8
                            data_5bcd94 = &data_57fde8
                            bool cond:3_1 = data_5c6384 != 0
                            data_5bcd90 = 0xdde8
                            data_5bcb00 = 0xffffffff
                            
                            if (not(cond:3_1))
                                data_5c6384 = sub_45cd70(0x155cc0)
                                data_5c638c = 0x61a8
                                data_5c639c = "log entries"
                                data_5c6398 = 0xde44
                                data_5c2e9c = sub_413310()
                                uint32_t (* result)[0x4] = sub_413310()
                                data_5c2e98 = result
                                data_5c99e8 = &data_5c3920
                                return result
                            
                            var_10 = "DataArray<struct LogEntry2>::DataArrayInitialize"
                        else
                            var_10 = "DataArray<struct ShGfx>::DataArrayInitialize"
                    else
                        var_10 = "DataArray<struct Cardset>::DataArrayInitialize"
                    
                    goto label_41a3be
                
                var_10 = "GameCenterConnect"
                var_14 = 0x1c0
                var_18 = "c:\ax2017\engine\gamecenter.cpp"
                ecx = "gGameCenter.type == GAME_CENTER_NONE"
            else
                var_10 = "GetLocalSettings"
                var_14 = 0x23d
                var_18 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                ecx = "gGameSettings.localSettings"
        else
            var_10 = "DataArray<struct GameSave>::DataArrayInitialize"
        label_41a3be:
            var_14 = 0xce
            ecx = "mpBlock == NULL"
            var_18 = "c:\ax2017\engine\dataarray.h"
    else
        var_10 = "XMap<enum AccountID,struct PresenceInfo>::SetNumBuckets"
        var_14 = 0x72
        var_18 = "c:\ax2017\engine\xmap.h"
        ecx = "mNodeBuckets == NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
