//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C25B4.hpp"
#include "fn_801C40FC.hpp"
#include "fn_801C339C.hpp"
#include "fn_801C303C.hpp"



void fn_801C27B4(PPC::Runtime::GCContext* context)
{
/*801C27B4 001BF5B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C27B8 001BF5B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C27BC 001BF5BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C27C0 001BF5C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C27C4 001BF5C4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C27C8 001BF5C8*/ PPC::Runtime::ASM::bl(fn_801C25B4);
/*801C27CC 001BF5CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C27D0 001BF5D0*/ PPC::Runtime::ASM::bl(fn_801C40FC);
/*801C27D4 001BF5D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C27D8 001BF5D8*/ PPC::Runtime::ASM::bne(.L_801C27F8);
/*801C27DC 001BF5DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C27E0 001BF5E0*/ PPC::Runtime::ASM::bl(fn_801C339C);
/*801C27E4 001BF5E4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C27E8 001BF5E8*/ PPC::Runtime::ASM::bne(.L_801C27F8);
/*801C27EC 001BF5EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C27F0 001BF5F0*/ PPC::Runtime::ASM::bl(fn_801C303C);
/*801C27F4 001BF5F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801C27F8, 0x801C27F8) //this is a jump label
/*801C27F8 001BF5F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C27FC 001BF5FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C2800 001BF600*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C2804 001BF604*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C2808 001BF608*/ PPC::Runtime::ASM::blr();
}