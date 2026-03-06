// 函数名称: sub_4d4c90
// 虚拟地址: 0x4d4c90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_4d4c90(int32_t* arg1))[0x4]
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545878
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg1
    sub_4d5050(arg1)
    int32_t eax_3 = esi[1]
    
    if (eax_3 != 0x19)
        if (eax_3 == 0x12)
            data_ce26f8 = 2
            uint32_t (* eax_5)[0x4] = _memset(&data_ce2700, 0, 0x9c)
            int32_t xmm0_2 = data_5b0f3c
            data_ce271c = 0x43c80000
            data_ce2720 = 0x44160000
            data_ce2754 = 0x3f800000
            data_ce2758 = esi
            data_ce2794 = xmm0_2
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_5
        
        if (eax_3 != 0x18)
            if (eax_3 != 2)
                if (eax_3 == 0x1e)
                    sub_4f4ab0(esi)
                    sub_4d13f0()
                    esi[7] -= 1
                    sub_48dc00(esi)
                    sub_42d300(esi)
                    int32_t eax_6 = sub_4fb550(esi)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_6
                
                if (eax_3 != 0x1d)
                    if (eax_3 == 0x22)
                        sub_4f4ab0(esi)
                        sub_4d13f0()
                        esi[7] -= 1
                        sub_48dc00(esi)
                        sub_42d300(esi)
                        int32_t eax_13 = sub_478c90(esi)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_13
                    
                    if (eax_3 != 0x20)
                        sub_44e4d0(eax_3, &data_5559b1, "Halt", "c:\ax2017\engine\editor\editmode.cpp", 
                            0x81c, "HolodeckView")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    sub_4f48b0(esi)
                    sub_4d13f0()
                    esi[7] -= 1
                    sub_48dc00(esi)
                    sub_42d300(esi)
                    int32_t eax_14 = sub_4f4ea0(esi)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_14
                
                sub_4f4ab0(esi)
                sub_4d13f0()
                esi[7] -= 1
                sub_48dc00(esi)
                sub_42d300(esi)
                void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                data_dfc4cc = esi
                void* esi_1 = *ThreadLocalStoragePointer
                
                if (data_e4ab94 s> *(esi_1 + 4))
                    __Init_thread_header(&data_e4ab94)
                    
                    if (data_e4ab94 == 0xffffffff)
                        int32_t var_8_1 = 0
                        data_e4ab98 = sub_48d5b0("sys/material_editor.ui", 0x1e)
                        int32_t var_8_2 = 0xffffffff
                        __Init_thread_footer(&data_e4ab94)
                
                data_dfc4d0 = sub_4869c0(data_e4ab98)
                void* eax_10 = data_e4ab9c
                
                if (eax_10 s> *(esi_1 + 4))
                    eax_10 = __Init_thread_header(&data_e4ab9c)
                    
                    if (data_e4ab9c == 0xffffffff)
                        int32_t var_8_3 = 1
                        data_e4aba0 = sub_4856d0(data_e4ab98, "tblLayers")
                        int32_t var_8_4 = 0xffffffff
                        eax_10 = __Init_thread_footer(&data_e4ab9c)
                
                int32_t eax_12 = sub_4c68c0(sub_489f50(eax_10, data_e4aba0, data_dfc4d0, sub_507d50))
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_12
            
            sub_4f48b0(esi)
        else
            sub_4f4ab0(esi)
    else
        data_ce26f8 = 2
        _memset(&data_ce2700, 0, 0x9c)
        int32_t xmm0_1 = data_5b0f3c
        data_ce271c = 0x43c80000
        data_ce2720 = 0x44160000
        data_ce2754 = 0x3f800000
        data_ce2758 = esi
        data_ce2794 = xmm0_1
        sub_4d13f0()
    
    void* eax_4 = sub_4f4180()
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4
}
