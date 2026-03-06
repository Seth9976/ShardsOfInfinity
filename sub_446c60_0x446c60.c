// 函数名称: sub_446c60
// 虚拟地址: 0x446c60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_446c60(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    void* result = sub_446460(eax, 2, arg1, 0xffffffff)
    
    if (result == 0)
        result = sub_446460(sub_446b90(result, result + 3, arg1, 0xffffffff, 2, 0xffffffff, result.b), 
            2, arg1, 0xffffffff)
        
        if (result == 0)
            return result
    
    int32_t ebx_1 = *(arg1 + 0x216c)
    int32_t edi_1 = 0
    int32_t var_3c_1
    char const* const var_38_4
    char* ecx_6
    
    if (ebx_1 != 0)
        result = *(arg1 + 0x2170)
        int32_t ebx_2 = *(ebx_1 + (result << 2) + 0x4e74)
        
        if (ebx_2 != 0)
            uint128_t var_28
            sub_445fb0(&var_28, arg1, 2, 0xffffffff)
            uint128_t xmm1_1 = var_28
            uint128_t var_18 = xmm1_1
            sub_4460c0(&var_28)
            result = _mm_bsrli_si128(xmm1_1, 4)
            
            if (result != var_28:4.d)
                void** i = var_18:4.d
                
                do
                    if (i == 0)
                        var_38_4 = "Cards::CardIt::operator *"
                        var_3c_1 = 0x132
                        ecx_6 = &data_580cbc
                        goto label_446dbc
                    
                    result = *i
                    
                    if (result != var_18:8.d)
                        var_38_4 = "Cards::CardIt::operator *"
                        var_3c_1 = 0x133
                        ecx_6 = "c->where == where"
                        goto label_446dbc
                    
                    result = i[4]
                    
                    if (*result == ebx_2)
                        break
                    
                    edi_1 += 1
                    result = sub_445ed0(&var_18)
                    i = var_18:4.d
                while (i != var_28:4.d)
            
            *(arg1 + 0x2170) += 1
    
    int32_t* eax_2 = sub_446a60(result, 2, arg1, 0xffffffff, edi_1)
    uint32_t edi_2 = eax_2
    sub_446260(eax_2, edi_2, arg1, arg2)
    result = zx.d(edi_2.w)
    
    if (result u< 0xc8)
        uint32_t var_38_5 = edi_2
        void* eax_4 = *((result << 5) + arg1 + 0x14)
        int32_t var_3c_2 = *(eax_4 + 0x24)
        char const* const var_40_3 = "%s (%d) is added to center row."
        void* var_44_1 = arg1
        return sub_445a20(eax_4, 4, arg1, 0xffffffff, edi_2, arg2, 0, 0)
    
    var_38_4 = "CardGet"
    var_3c_1 = 0x90
    ecx_6 = "idNoMimic < MAX_CARDS"
    label_446dbc:
    sub_44e4d0(result, &data_5559b1, ecx_6, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_3c_1, 
        var_38_4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
