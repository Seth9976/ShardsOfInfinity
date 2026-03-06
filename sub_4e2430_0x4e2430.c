// 函数名称: sub_4e2430
// 虚拟地址: 0x4e2430
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4e2430(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545cb9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    char* esi = *arg2
    
    while (true)
        char i = *esi
        
        if (i != 0xd && i != 0xa)
            char* ecx = esi
            
            while (i != 0xa)
                if (i == 0)
                    break
                
                i = esi[1]
                esi = &esi[1]
                
                if (i == 0xd)
                    break
            
            *arg2 = esi
            *arg1 = &data_5559b1
            int32_t var_8_2 = 0
            int32_t var_14_1 = 1
            sub_44f690(arg1, ecx, esi - ecx)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        esi = &esi[1]
}
