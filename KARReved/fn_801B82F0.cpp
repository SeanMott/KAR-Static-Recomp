//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"



void fn_801B82F0(PPC::Runtime::GCContext* context)
{
/*801B82F0 001B50F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B82F4 001B50F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B82F8 001B50F8*/ PPC::Runtime::ASM::li(context->r4, 0x2e);
/*801B82FC 001B50FC*/ PPC::Runtime::ASM::li(context->r5, 0x6f);
/*801B8300 001B5100*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B8304 001B5104*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801B8308 001B5108*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6c);
/*801B830C 001B510C*/ PPC::Runtime::ASM::bne(.L_801B8314);
/*801B8310 001B5110*/ PPC::Runtime::ASM::li(context->r5, 0x6d);
RUNTIME_PPC_JUMP_LABEL(.L_801B8314, 0x801B8314) //this is a jump label
/*801B8314 001B5114*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1708 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B8318 001B5118*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801B831C 001B511C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E170C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B8320 001B5120*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801B8324 001B5124*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801B8328 001B5128*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B832C 001B512C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B8330 001B5130*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B8334 001B5134*/ PPC::Runtime::ASM::blr();
}