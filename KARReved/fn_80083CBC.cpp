//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80005D04.hpp"
#include "fn_80005D04.hpp"
#include "fn_gmSetFreezeGameFlag.hpp"



void fn_80083CBC(PPC::Runtime::GCContext* context)
{
/*80083CBC 00080ABC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80083CC0 00080AC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80083CC4 00080AC4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80083CC8 00080AC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80083CCC 00080ACC*/ PPC::Runtime::ASM::bl(fn_80005D04);
/*80083CD0 00080AD0*/ PPC::Runtime::ASM::bl(fn_80005D04);
/*80083CD4 00080AD4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80083CD8 00080AD8*/ PPC::Runtime::ASM::bne(.L_80083CE4);
/*80083CDC 00080ADC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80083CE0 00080AE0*/ PPC::Runtime::ASM::bl(fn_gmSetFreezeGameFlag);
RUNTIME_PPC_JUMP_LABEL(.L_80083CE4, 0x80083CE4) //this is a jump label
/*80083CE4 00080AE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80083CE8 00080AE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80083CEC 00080AEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80083CF0 00080AF0*/ PPC::Runtime::ASM::blr();
}