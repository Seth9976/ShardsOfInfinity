// 函数名称: sub_418420
// 虚拟地址: 0x418420
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_418420(int32_t arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t* edi = data_65aabc
    int32_t* edi = data_65aabc
    char const* const var_24
    int32_t var_20
    char const* const var_1c
    int32_t* i_2
    char* ecx
    
    if (edi != 0)
        edi[0x190] = *edi
        edi[0x191] = edi[1]
        edi[0x18e] = *(arg2 + 8)
        edi[0x18f] = *(arg2 + 0xc)
        i_2 = *arg2
        int32_t* eax_6
        
        if (i_2 != 3)
            if (i_2 != 0)
                int32_t* ecx_3 = ((arg1 s>> 4 | arg1) & edi[0x18b]) << 2
                
                for (int32_t* i = *(ecx_3 + edi[0x18a]); i != 0; i = i[6])
                    if (arg1 == *i)
                        *(i + 8) = *arg2
                        return i
                
                int32_t* eax_14 = sub_45cfa0(0x20)
                eax_14[3] += 1
                int32_t* ecx_4 = *eax_14
                
                if (ecx_4 == 0)
                    sub_45ce30(eax_14)
                    ecx_4 = *eax_14
                
                *eax_14 = *ecx_4
                *ecx_4 = arg1
                *(ecx_4 + 8) = *arg2
                ecx_4[6] = *(ecx_3 + edi[0x18a])
                eax_6 = edi[0x18a]
                *(ecx_3 + eax_6) = ecx_4
                edi[0x18c] += 1
                return eax_6
            
            var_1c = "SetPresence"
            var_20 = 0x6aa
            var_24 = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
            ecx = "presence.status != PRESENCE_NONE"
        else
            int32_t edx = edi[0x18a]
            int32_t ecx_2 = arg1 s>> 4 | arg1
            eax_6 = *(edx + ((edi[0x18b] & ecx_2) << 2))
            
            if (eax_6 == 0)
                return eax_6
            
            while (arg1 != *eax_6)
                eax_6 = eax_6[6]
                
                if (eax_6 == 0)
                    return eax_6
            
            if (eax_6 == 0xfffffff8)
                return &eax_6[2]
            
            i_2 = edi[0x18b] & ecx_2
            int32_t* i_1 = *(edx + (i_2 << 2))
            int32_t** ebx_1 = edx + (i_2 << 2)
            int32_t* i_3 = nullptr
            
            for (; i_1 != 0; i_1 = i_2)
                i_2 = i_1[6]
                
                if (arg1 == *i_1)
                    if (i_3 != 0)
                        i_3[6] = i_2
                    else
                        *ebx_1 = i_2
                    
                    int32_t eax_8 = sub_45d050(i_1, 0x20)
                    edi[0x18c] -= 1
                    return eax_8
                
                i_3 = i_1
            
            var_1c = "XMap<enum AccountID,struct PresenceInfo>::RemoveAt"
            var_20 = 0xd9
            var_24 = "c:\ax2017\engine\xmap.h"
            ecx = "Halt"
    else
        var_1c = "GetClient"
        var_20 = 0x74
        var_24 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_44e4d0(i_2, &data_5559b1, ecx, var_24, var_20, var_1c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
