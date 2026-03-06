// 函数名称: sub_44e58b
// 虚拟地址: 0x44e58b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_44e58b(int32_t* arg1 @ ebp)
{
    // 第一条实际指令: int32_t esp_27 = arg1[-6]
    int32_t esp_27 = arg1[-6]
    arg1[-1] = 0xfffffffe
    sub_44e2d0("\nStack:\n")
    *(esp_27 - 4) = 0
    *(esp_27 - 8) = &arg1[-0x210]
    *(esp_27 - 0xc) = 8
    *(esp_27 - 0x10) = 2
    RtlCaptureStackBackTrace()
    arg1[-0x211] = 8
    sub_4a3270(&arg1[-0x211])
    int32_t eax_1 = data_65ac4c
    
    if (eax_1 != 0)
        *(esp_27 - 4) = eax_1
        _fclose()
    
    char const* const edi = "Assertion"
    void* eax_2 = data_65ae00
    
    if (eax_2 != 0)
        edi = *(eax_2 + 0xc)
    
    *(esp_27 - 4) = &arg1[-0x107]
    *(esp_27 - 8) = "Oh no! There was an assertion!\n\nThe log.txt file has more information.\n\n%s"
    *(esp_27 - 0xc) = 0x400
    *(esp_27 - 0x10) = &arg1[-0x207]
    sub_44e240()
    HWND esi = GetForegroundWindow()
    *(esp_27 - 4) = &arg1[-0x208]
    *(esp_27 - 8) = esi
    GetWindowThreadProcessId()
    uint32_t eax_7 = GetCurrentProcessId()
    
    if (arg1[-0x208] != eax_7)
        esi = nullptr
    
    *(esp_27 - 4) = 0
    *(esp_27 - 8) = edi
    *(esp_27 - 0xc) = &arg1[-0x207]
    *(esp_27 - 0x10) = esi
    MessageBoxA()
    *(esp_27 - 4) = 0
    *(esp_27 - 8) = GetCurrentProcess()
    int32_t result = TerminateProcess()
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg1[-4]
    *(esp_27 + 4)
    *(esp_27 + 8)
    *(esp_27 + 0xc)
    @__security_check_cookie@4(arg1[-7] ^ arg1)
    *arg1
    return result
}
