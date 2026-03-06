// 函数名称: sub_4e9800
// 虚拟地址: 0x4e9800
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_4e9800(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = *(arg3 + 4)
    int32_t var_20 =
        (*(*eax_3 + 0x9c))(eax_3, __security_cookie ^ &var_4, var_14, ExceptionList, var_c, var_8)
    int32_t var_24 = arg4
    sub_44f980(&var_14, "Dx11 device lost: %x reason:")
    int32_t var_8_1 = 0
    char* const edx = &data_5559b1
    char* eax_5 = var_14
    
    if (eax_5 != 0)
        edx = eax_5
    
    sub_44e4d0(eax_5, edx, "HaltMsg", "c:\ax2017\engine\windows\windowsdx11.cpp", 0x5ae, 
        "Dx11GraphicsInterface::HandleDeviceLost")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
