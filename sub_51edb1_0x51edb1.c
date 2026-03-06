// 函数名称: sub_51edb1
// 虚拟地址: 0x51edb1
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_51edb1(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t esp_14 = *(arg1 - 0x18)
    int32_t esp_14 = *(arg1 - 0x18)
    *(sub_51e354() + 0x20) = 0
    void* edi = *(arg1 + 0x14)
    *(arg1 - 0x28) = *(edi + 8)
    *(esp_14 - 4) = edi
    *(esp_14 - 8) = *(arg1 + 0x18)
    int32_t ebx = *(arg1 + 0xc)
    *(esp_14 - 0xc) = ebx
    int32_t eax_2 = __FrameHandler3::GetCurrentState()
    *(arg1 - 0x20) = eax_2
    int32_t edx = *(edi + 0x10)
    int32_t i = 0
    *(arg1 - 0x2c) = 0
    
    if (*(edi + 0xc) u> 0)
        do
            int32_t ebx_1 = i * 0x14
            *(arg1 - 0x24) = ebx_1
            ebx = *(arg1 + 0xc)
            
            if (eax_2 s> *(ebx_1 + edx + 4))
                edi = *(arg1 + 0x14)
                
                if (eax_2 s<= *(*(arg1 - 0x24) + edx + 8))
                    int32_t eax_5 = *(i * 0x14 + edx + 4) + 1
                    *(arg1 - 0x20) = eax_5
                    eax_2 = *(*(arg1 - 0x28) + (eax_5 << 3))
                    *(arg1 - 0x20) = eax_2
                    break
            
            i += 1
            *(arg1 - 0x2c) = i
        while (i u< *(edi + 0xc))
    
    *(esp_14 - 4) = eax_2
    *(esp_14 - 8) = edi
    *(esp_14 - 0xc) = 0
    *(esp_14 - 0x10) = ebx
    __FrameHandler3::FrameUnwindToState()
    *(arg1 - 0x1c) = 0
    *(arg1 - 4) = 0
    int32_t* edi_2 = *(arg1 + 8)
    *(arg1 - 4) = 0xfffffffe
    *(arg1 - 0x44) = 0
    $LN14(arg1, edi_2)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *(arg1 - 0x10)
    *esp_14
    *(esp_14 + 4)
    *(esp_14 + 8)
    *(esp_14 + 0xc)
    *arg1
    return 0
}
