// 函数名称: sub_4188a0
// 虚拟地址: 0x4188a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4188a0(int32_t* arg1)
{
    // 第一条实际指令: void* eax = data_65aabc
    void* eax = data_65aabc
    char const* const var_23c
    int32_t var_238
    char const* const var_234
    char* ecx
    
    if (eax != 0)
        int32_t* esi_1 = eax + 0x444
        int32_t* i_1 = nullptr
        int32_t edx_1 = sub_412b20(esi_1, &i_1)
        int32_t* i = i_1
        void var_218
        void var_110
        
        if (i != 0xffffffff)
            int32_t edi_1 = *arg1
            
            do
                if (*i == edi_1)
                    __builtin_memcpy(&var_218, sub_418790(&var_110, edx_1, arg1, &var_110), 0x108)
                    __builtin_memcpy(&i[2], &var_218, 0x108)
                    int32_t eax_6 = arg1[1]
                    i[0x6c] = eax_6
                    return eax_6
                
                edx_1 = sub_412b20(esi_1, &i_1)
                i = i_1
            while (i != 0xffffffff)
        
        if (*(data_65aabc + 0x454) == 0x20)
            return sub_44e260("reached network game count limit, dropping game desc")
        
        eax = esi_1[4]
        
        if (eax u< esi_1[2])
            eax = esi_1[3]
            void* edi_3 = esi_1[1]
            
            if (eax u<= edi_3)
                int32_t ecx_4 = *esi_1
                void* eax_7
                
                if (eax != edi_3)
                    edi_3 = eax
                    eax_7 = *(eax * 0x1d0 + ecx_4 + 0x1c8)
                else
                    eax_7 = edi_3 + 1
                    esi_1[1] = eax_7
                
                void* var_234_5 = 0x1c8
                char var_238_1 = 0
                esi_1[3] = eax_7
                int32_t* ebx_2 = edi_3 * 0x1d0 + ecx_4
                int32_t edx_2 = _memset(ebx_2, var_238_1, var_234_5)
                ebx_2[0x72] = esi_1[5] << 0x10 | edi_3
                esi_1[5] += 1
                
                if (esi_1[5] == 0x10000)
                    esi_1[5] = 1
                
                esi_1[4] += 1
                *ebx_2 = *arg1
                int32_t* eax_14 = sub_418790(&var_110, edx_2, arg1, &var_110)
                __builtin_memcpy(&var_218, eax_14, 0x108)
                __builtin_memcpy(&ebx_2[2], &var_218, 0x108)
                return eax_14
            
            var_234 = "DataArray<struct GameSave>::DataArrayAlloc"
            var_238 = 0xf5
            ecx = "mFreeListHead <= mMaxUsedCount"
        else
            var_234 = "DataArray<struct GameSave>::DataArrayAlloc"
            var_238 = 0xf4
            ecx = "mUsedCount < mMaxSize"
        
        var_23c = "c:\ax2017\engine\dataarray.h"
    else
        var_234 = "GetClient"
        var_238 = 0x74
        var_23c = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_23c, var_238, var_234)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
