// 函数名称: sub_45ba10
// 虚拟地址: 0x45ba10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_45ba10(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542528
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_68 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 == 0)
        sub_44e4d0(arg1, &data_5559b1, "texture", "c:\ax2017\engine\draw3d.cpp", 0xbbb, "Draw3DSkyBox")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* esi = *fsbase->ThreadLocalStoragePointer
    
    if (data_e48e40 s> *(esi + 4))
        __Init_thread_header(&data_e48e40)
        
        if (data_e48e40 == 0xffffffff)
            int32_t var_8_1 = 0
            data_e48e44 = sub_48d5b0("sys/skybox.material", 5)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_e48e40)
    
    uint32_t edx = data_e48e44
    uint32_t var_38 = edx
    
    if (data_e48e48 s> *(esi + 4))
        __Init_thread_header(&data_e48e48)
        
        if (data_e48e48 == 0xffffffff)
            int32_t var_8_3 = 1
            data_e48e4c = sub_48d5b0("sys/skybox.structure", 2)
            int32_t var_8_4 = 0xffffffff
            __Init_thread_footer(&data_e48e48)
        
        edx = var_38
    
    int32_t* eax_9 = data_e48e4c
    int32_t edi = 0
    int32_t* result
    
    for (int128_t* i = &data_65ae5c; i s<= &data_65ae94; )
        result = data_65ae00
        
        if (*(result + 0x27) != 0 || edi == 2)
            if (data_cdf3e9 == 0)
                sub_44e4d0(result, &data_5559b1, "gDraw3DData.submittingRenderItems", 
                    "c:\ax2017\engine\draw3d.cpp", 0x31f, "Draw3DSetDrawEyeMask")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            float var_34 = 10f
            data_65b380 = 1 << edi.b
            int32_t eax_11 = *(i + 0x18)
            int128_t var_5c_1 = *i
            int32_t var_18_1 = eax_11
            int64_t var_20_1 = i[1].q
            int128_t var_30_1 = data_5724f8
            result = sub_459d40(eax_11, &var_34, eax_9, edx, arg1, 0)
        
        edx = var_38
        i += 0x1c
        edi += 1
    
    if (data_cdf3e9 != 0)
        data_65b380 = 7
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    sub_44e4d0(result, &data_5559b1, "gDraw3DData.submittingRenderItems", 
        "c:\ax2017\engine\draw3d.cpp", 0x31f, "Draw3DSetDrawEyeMask")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
