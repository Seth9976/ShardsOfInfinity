// 函数名称: sub_446b90
// 虚拟地址: 0x446b90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_446b90(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, void* arg6, char arg7)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    void* eax_1 = sub_4460d0(&var_8, arg5, arg3, arg6, &var_8)
    void* result = sub_445c50(eax_1, arg2, arg3, arg4)
    uint32_t i = *result
    *eax_1 = i
    *result = 0
    
    if (i != 0)
        void* edi_1 = var_8
        
        do
            uint32_t esi_1 = zx.d(i.w)
            
            if (esi_1 u>= 0xc8)
                sub_44e4d0(result, &data_5559b1, "idNoMimic < MAX_CARDS", 
                    "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x90, "CardGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            uint32_t esi_2 = esi_1 << 5
            *(esi_2 + arg3 + 0x10) = edi_1
            edi_1 += 1
            *(esi_2 + arg3 + 4) = arg5
            result = arg6
            *(esi_2 + arg3 + 8) = result
            *(esi_2 + arg3 + 0x18) = 0
            
            if (arg7 != 0)
                result = sub_445a20(result, 0x16, arg3, result, i, 0, 0, 0)
            
            i = *(esi_2 + arg3 + 0xc)
        while (i != 0)
    
    return result
}
