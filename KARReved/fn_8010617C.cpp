//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801061B0.hpp"



void fn_8010617C(PPC::Runtime::GCContext* context)
{
/*8010617C 00102F7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80106180 00102F80*/ PPC::Runtime::ASM::mflr(context->r0);
/*80106184 00102F84*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFA38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80106188 00102F88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010618C 00102F8C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80106190 00102F90*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80106194 00102F94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r4));
/*80106198 00102F98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r4));
/*8010619C 00102F9C*/ PPC::Runtime::ASM::bl(fn_801061B0);
/*801061A0 00102FA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801061A4 00102FA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801061A8 00102FA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801061AC 00102FAC*/ PPC::Runtime::ASM::blr();
}