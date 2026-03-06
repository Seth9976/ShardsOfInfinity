// 函数名称: sub_4c4d30
// 虚拟地址: 0x4c4d30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscallsub_4c4d30(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    void* esi = arg2
    char* eax
    
    if (esi s>= 0)
        char* eax_1 = *arg1
        
        if (eax_1 == 0 || *eax_1 == 0)
            eax = nullptr
        else
            eax = *(sub_44f000(arg1) + 8)
    
    char const* const var_1c
    int32_t var_18
    char const* const var_14
    char* ecx_1
    
    if (esi s< 0 || esi s>= eax)
        var_14 = "UITextBox::Utf8StringRightOneIndex"
        var_18 = 0x9e
        var_1c = "c:\ax2017\engine\uitextbox.cpp"
        ecx_1 = "index >= 0 && index < mText.Length()"
    else
        eax = *arg1
        char* const ecx = &data_5559b1
        
        if (eax != 0)
            ecx = eax
        
        void* edi_1 = ecx + esi
        ecx.b = *edi_1
        
        if (ecx.b u< 0x80)
        label_4c4da9:
            arg2 = edi_1
            uint32_t eax_3 = sub_4afed0(&arg2)
            
            if (eax_3 s< 0x80)
                return 1 + esi
            
            if (eax_3 s< 0x800)
                return 2 + esi
            
            void* const eax_6
            eax_6.b = eax_3 s>= 0x10000
            return eax_6 + 3 + esi
        
        eax.b = ecx.b
        eax.b &= 0xe0
        
        if (eax.b == 0xc0)
            goto label_4c4da9
        
        eax.b = ecx.b
        eax.b &= 0xf0
        
        if (eax.b == 0xe0)
            goto label_4c4da9
        
        ecx.b &= 0xf8
        
        if (ecx.b == 0xf0)
            goto label_4c4da9
        
        var_14 = "Xutf8_peek_next"
        var_18 = 0x212
        var_1c = "c:\ax2017\engine\xutf8.cpp"
        ecx_1 = "!Xutf8_is_invalid_lead_char(str)"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_1c, var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
