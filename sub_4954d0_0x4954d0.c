// 函数名称: sub_4954d0
// 虚拟地址: 0x4954d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4954d0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_54398c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_334 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = arg1
    void* var_20 = esi
    int32_t var_18 = 0
    int32_t var_14 = 0
    void* eax_3 = data_cdf428
    
    if (eax_3 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* ebx = esi + 8
    void* edi = *(eax_3 + 0x10)
    
    while (*(esi + 0x10) != 0)
        void* eax_4 = *ebx
        
        if (eax_4 == 0)
            sub_44e4d0(eax_4, &data_5559b1, "mpHead != NULL", "c:\ax2017\engine\xlist.h", 0x53, 
                "XList<struct ParticleEmitter>::GetHead")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* esi_1 = nullptr
        
        while (true)
            if (esi_1 != 0)
                esi_1 = *(esi_1 + 0x2fc)
            else
                esi_1 = *(eax_4 + 0x2d0)
            
            if (esi_1 == 0)
                break
            
            sub_495490(esi_1)
        
        sub_49fa50(eax_4 + 0x2d0)
        void* eax_5 = *(eax_4 + 0x2e4)
        *(eax_5 + 0x14) -= 1
        int32_t var_8_1 = 0
        int32_t* edx_1 = *ebx
        void* eax_6 = edx_1[0xbf]
        *ebx = eax_6
        
        if (eax_6 == 0)
            ebx[1] = 0
        else
            *(eax_6 + 0x300) = 0
        
        void var_324
        __builtin_memcpy(&var_324, edx_1, 0x2fc)
        ebx[2] -= 1
        int32_t esi_4 = var_18 | 1
        int32_t var_14_2 = esi_4
        sub_495690(edx_1)
        sub_45d050(edx_1, 0x304)
        var_18 = esi_4 & 0xfffffffe
        int32_t var_8_2 = 1
        void var_54
        sub_49fa50(&var_54)
        esi = var_20
        int32_t var_8_3 = 0xffffffff
    
    int32_t var_8_4 = 2
    sub_49fa50(ebx)
    uint32_t result = zx.d(*(esi + 0x78))
    int32_t ecx_7 = *(edi + 0xc)
    *(edi + 0xc) = result
    *(esi + 0x78) = ecx_7
    *(edi + 0x10) -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
