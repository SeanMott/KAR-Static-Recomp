//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_SPEC0_MakeStatus.hpp"
#include "fn_SPEC0_MakeStatus.hpp"
#include "fn_SPEC1_MakeStatus.hpp"
#include "fn_SPEC1_MakeStatus.hpp"
#include "fn_SPEC2_MakeStatus.hpp"
#include "fn_SPEC2_MakeStatus.hpp"



void fn_PADSetSpec(PPC::Runtime::GCContext* context)
{
/*803DCD58 003D9B58*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803DCD5C 003D9B5C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*803DCD60 003D9B60*/ PPC::Runtime::ASM::stw(context->r0, __PADSpec @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DCD64 003D9B64*/ PPC::Runtime::ASM::beq(.L_803DCD94);
/*803DCD68 003D9B68*/ PPC::Runtime::ASM::bge(.L_803DCD78);
/*803DCD6C 003D9B6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803DCD70 003D9B70*/ PPC::Runtime::ASM::bge(.L_803DCD84);
/*803DCD74 003D9B74*/ PPC::Runtime::ASM::b(.L_803DCDB0);
RUNTIME_PPC_JUMP_LABEL(.L_803DCD78, 0x803DCD78) //this is a jump label
/*803DCD78 003D9B78*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x6);
/*803DCD7C 003D9B7C*/ PPC::Runtime::ASM::bge(.L_803DCDB0);
/*803DCD80 003D9B80*/ PPC::Runtime::ASM::b(.L_803DCDA4);
RUNTIME_PPC_JUMP_LABEL(.L_803DCD84, 0x803DCD84) //this is a jump label
/*803DCD84 003D9B84*/ PPC::Runtime::ASM::lis(context->r4, fn_SPEC0_MakeStatus @ Get_MemoryOffset_HighBit);
/*803DCD88 003D9B88*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_SPEC0_MakeStatus @ Get_MemoryOffset_LowBit);
/*803DCD8C 003D9B8C*/ PPC::Runtime::ASM::stw(context->r0, StructWithFuncPtrs_8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DCD90 003D9B90*/ PPC::Runtime::ASM::b(.L_803DCDB0);
RUNTIME_PPC_JUMP_LABEL(.L_803DCD94, 0x803DCD94) //this is a jump label
/*803DCD94 003D9B94*/ PPC::Runtime::ASM::lis(context->r4, fn_SPEC1_MakeStatus @ Get_MemoryOffset_HighBit);
/*803DCD98 003D9B98*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_SPEC1_MakeStatus @ Get_MemoryOffset_LowBit);
/*803DCD9C 003D9B9C*/ PPC::Runtime::ASM::stw(context->r0, StructWithFuncPtrs_8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DCDA0 003D9BA0*/ PPC::Runtime::ASM::b(.L_803DCDB0);
RUNTIME_PPC_JUMP_LABEL(.L_803DCDA4, 0x803DCDA4) //this is a jump label
/*803DCDA4 003D9BA4*/ PPC::Runtime::ASM::lis(context->r4, fn_SPEC2_MakeStatus @ Get_MemoryOffset_HighBit);
/*803DCDA8 003D9BA8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_SPEC2_MakeStatus @ Get_MemoryOffset_LowBit);
/*803DCDAC 003D9BAC*/ PPC::Runtime::ASM::stw(context->r0, StructWithFuncPtrs_8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803DCDB0, 0x803DCDB0) //this is a jump label
/*803DCDB0 003D9BB0*/ PPC::Runtime::ASM::stw(context->r3, StructValues_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DCDB4 003D9BB4*/ PPC::Runtime::ASM::blr();
}