// 函数名称: sub_420200
// 虚拟地址: 0x420200
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_420200(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    void* ecx = data_65aabc
    int32_t edi = data_5bb2c4
    char const* const var_18_1
    int32_t var_14_1
    char const* const __saved_esi
    char* ecx_1
    
    if (ecx != 0)
        if (edi s>= 0)
            if (edi s< *(ecx + 0x424))
                bool cond:0 = *(ecx + 0x18) != 3
                var_8 = *(ecx + edi * 0x10 + 0x24)
                
                if (not(cond:0))
                    int32_t eax_4 = *(ecx + 0x14)
                    void* ecx_2 = data_65acf4
                    
                    if (eax_4 != 0)
                        uint32_t edx_1 = zx.d(eax_4.w)
                        
                        if (edx_1 u< *(ecx_2 + 4))
                            void* esi_2 = edx_1 * 0x4c + *ecx_2
                            
                            if (*(esi_2 + 0x48) == eax_4)
                                int32_t var_14_2 = 0xf42ab
                                sub_450c90(eax_4, 4, esi_2 + 0x3c)
                                sub_450a70(&var_8, 4, esi_2 + 0x3c, &var_8)
                
                return sub_418360(edi)
            
            __saved_esi = "GameClientTrashFriend"
            var_14_1 = 0x685
            ecx_1 = "friendIndex < c.numFriends"
        else
            __saved_esi = "GameClientTrashFriend"
            var_14_1 = 0x684
            ecx_1 = "friendIndex >= 0"
        
        var_18_1 = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
    else
        __saved_esi = "GetClient"
        var_14_1 = 0x74
        var_18_1 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_18_1, var_14_1, __saved_esi)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
