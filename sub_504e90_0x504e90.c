// 函数名称: sub_504e90
// 虚拟地址: 0x504e90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __convention("regparm")sub_504e90(int32_t arg1, int32_t arg2, HWND arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_e47264
    *(eax_2 + 0x28) = arg5 - *(eax_2 + 0x2c)
    void* edx_2 = data_e47264
    enum SET_WINDOW_POS_FLAGS uFlags = 0x16
    HWND hWnd
    int32_t Y
    int32_t cx
    int32_t cy
    
    if (*(edx_2 + 0x10) == 0)
        cy = arg5
        cx = arg4
        Y = 0
        int32_t var_50_1 = 0
        int32_t var_54_1 = 0
        hWnd = *(edx_2 + 0x14)
    else
        SetWindowPos(*(edx_2 + 0x14), nullptr, 0, 0, arg4, *(edx_2 + 0x28) - 2, 0x16)
        void* eax_5 = data_e47264
        uFlags = 0x14
        cy = *(eax_5 + 0x2c)
        cx = arg4
        Y = *(eax_5 + 0x28)
        int32_t var_50 = 0
        int32_t var_54 = 0
        hWnd = *(eax_5 + 0x10)
    
    SetWindowPos(hWnd, nullptr, 0, Y, cx, cy, uFlags)
    void* eax_6 = data_e47264
    
    if (*(eax_6 + 0xc) != 0)
        int32_t lParam = 0x2c
        int128_t var_30 = zx.o(0)
        int128_t var_20
        __builtin_memset(&var_20, 0, 0x18)
        var_30:4.d = *(eax_6 + 0x14)
        var_30:8.d = 0
        GetClientRect(arg3, &var_30:0xc)
        SendMessageA(*(data_e47264 + 0xc), 0x406, 0, &lParam)
        eax_6 = data_e47264
    
    void* ecx = *(eax_6 + 4)
    
    if (ecx != 0 && *(ecx + 0x14) == 8)
        *(ecx + 8) = &data_59cf5c
        eax_6 = data_e47264
    
    LPARAM eax_9 = *(eax_6 + 0x14)
    LRESULT result = SendMessageA(arg3, 0x111, zx.d(GetDlgCtrlID(eax_9)) | 0x10000, eax_9)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
