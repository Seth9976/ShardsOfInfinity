// 函数名称: sub_418a80
// 虚拟地址: 0x418a80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_418a80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    void* ecx = data_65aabc
    void* var_14 = esi
    char const* const var_30_1
    int32_t var_2c_1
    char const* const var_28
    int32_t* result
    char* ecx_1
    
    if (ecx != 0)
        result = sub_41b1b0(ecx + 0x444, arg2)
        int32_t* result_2 = result
        int32_t* result_3 = result_2
        int32_t* result_1 = nullptr
        
        if (*(esi + 0x10) s<= 0)
            return result
        
        int32_t* ebx_1 = nullptr
        int32_t* var_c_1 = nullptr
        
        while (true)
            int32_t esi_1 = *(esi + 8)
            int32_t ecx_3 = *(ebx_1 + esi_1)
            
            if (ecx_3 s< 0)
                var_28 = "LogGet"
                var_2c_1 = 0x2d
                ecx_1 = "who >= 0"
            else
                result = result_2[0x3b]
                
                if (result s>= 5)
                    var_28 = "LogGet"
                    var_2c_1 = 0x2e
                    ecx_1 = "save.setup.numPlayers < MAX_PLAYERS"
                else if (ecx_3 s>= result)
                    var_28 = "LogGet"
                    var_2c_1 = 0x2f
                    ecx_1 = "who < save.setup.numPlayers"
                else
                    void* edi_1 = &result_2[ecx_3 * 5]
                    int32_t ecx_5 = *(ebx_1 + esi_1 + 0x10)
                    void* eax_2 = &result_2[(ecx_3 + 0x1f) * 3]
                    int32_t eax_3 = *(edi_1 + 0x114)
                    
                    if (eax_3 s< ecx_5 || eax_3 == 0)
                        int32_t ebx_2 = ecx_5 * 2
                        result = 0x1000
                        
                        if (ebx_2 s< 0x1000)
                            ebx_2 = 0x1000
                        
                        if (*(edi_1 + 0x110) != 0)
                            var_28 = "AllocateLog"
                            var_2c_1 = 0x70a
                            var_30_1 = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
                            ecx_1 = "log.logBytes == NULL"
                            break
                        
                        void* eax_4 = sub_45cd70(ebx_2)
                        *(edi_1 + 0x114) = ebx_2
                        ebx_1 = var_c_1
                        *(edi_1 + 0x110) = eax_4
                    
                    int32_t ecx_7 = *(ebx_1 + esi_1 + 0x14)
                    
                    if (ecx_7 == 0)
                        *(edi_1 + 0x120) = ecx_7
                        ecx_7 = *(ebx_1 + esi_1 + 0x14)
                    
                    sub_51d5b0(*(edi_1 + 0x110) + ecx_7, *(ebx_1 + esi_1 + 8), *(ebx_1 + esi_1 + 0x10))
                    result = *(ebx_1 + esi_1 + 0x10) + *(ebx_1 + esi_1 + 0x14)
                    *(edi_1 + 0x118) = result
                    *(edi_1 + 0x11c) = result
                    
                    if (*(edi_1 + 0x120) s> result)
                        var_28 = "SetLog"
                        var_2c_1 = 0x730
                        var_30_1 = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
                        ecx_1 = "log.logRead <= log.logSizeWritten"
                        break
                    
                    result_2 = result_3
                    *(eax_2 + 4) = *(ebx_1 + esi_1 + 0x18)
                    int32_t eax_9 = *(ebx_1 + esi_1 + 0x1c)
                    ebx_1 = &ebx_1[8]
                    esi = var_14
                    *(eax_2 + 8) = eax_9
                    result = result_1 + 1
                    var_c_1 = ebx_1
                    result_1 = result
                    
                    if (result s>= *(esi + 0x10))
                        return result
                    
                    continue
            
            var_30_1 = "c:\ax2017\jams\shared\tgggame\code\gamesave.cpp"
            break
    else
        var_28 = "GetClient"
        var_2c_1 = 0x74
        var_30_1 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_30_1, var_2c_1, var_28)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
