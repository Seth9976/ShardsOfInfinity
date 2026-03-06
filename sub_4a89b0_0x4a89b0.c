// 函数名称: sub_4a89b0
// 虚拟地址: 0x4a89b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4a89b0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5416d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t i_1 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_cdf454
    
    if (esi != 0)
        int32_t i = 0
        int32_t* ecx = *esi
        int32_t i_8
        
        do
            i_8 = *ecx
            
            if (i_8 != 0)
                break
            
            i += 1
            ecx = &ecx[1]
        while (i u<= esi[1])
        
        i_1 = i_8
        
        if (i_8 != 0)
            do
                sub_48d240(sub_48e8d0(&i_1)[1])
            while (i_1 != 0)
            
            esi = data_cdf454
        
        sub_48e760(esi)
        int32_t* ecx_3 = data_cdf454
        int32_t* i_5 = ecx_3[4]
        void* edi_2 = &ecx_3[3]
        
        if (i_5 != 0)
            int32_t* i_2
            
            do
                i_2 = *i_5
                _aligned_free_base(i_5)
                i_5 = i_2
            while (i_2 != 0)
            ecx_3 = data_cdf454
        
        *(edi_2 + 4) = 0
        *(edi_2 + 0xc) = 0
        
        if (ecx_3 != 0)
            int32_t var_8_1 = 0
            sub_48e760(ecx_3)
            int32_t var_8_2 = 0xffffffff
            sub_45d050(data_cdf454, 0x20)
            data_cdf454 = 0
    
    void* ecx_5 = data_cdf47c
    int32_t* i_6 = *(ecx_5 + 0x14)
    void* edi_3 = ecx_5 + 0x10
    
    if (i_6 != 0)
        int32_t* i_3
        
        do
            i_3 = *i_6
            _aligned_free_base(i_6)
            i_6 = i_3
        while (i_3 != 0)
        ecx_5 = data_cdf47c
    
    *(edi_3 + 4) = 0
    *(edi_3 + 0xc) = 0
    void* edi_4 = ecx_5
    int32_t* i_7 = *(edi_4 + 4)
    
    if (i_7 != 0)
        int32_t* i_4
        
        do
            i_4 = *i_7
            _aligned_free_base(i_7)
            i_7 = i_4
        while (i_4 != 0)
        ecx_5 = data_cdf47c
    
    *(edi_4 + 4) = 0
    *(edi_4 + 0xc) = 0
    
    if (ecx_5 != 0)
        _aligned_free_base(ecx_5)
    
    int32_t ecx_6 = data_ce1af8
    int32_t esi_1 = 0
    
    if (ecx_6 s> 0)
        do
            void* edi_5 = *((esi_1 << 2) + &data_ce1b08)
            int32_t eax_4 = *(edi_5 + 0xc)
            
            if (eax_4 != 0)
                _aligned_free_base(eax_4)
                ecx_6 = data_ce1af8
            
            esi_1 += 1
            *(edi_5 + 0xc) = 0
        while (esi_1 s< ecx_6)
    
    int32_t result = data_cdf880
    
    if (result != 0)
        result = _aligned_free_base(result)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
