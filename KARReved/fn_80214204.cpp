//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE1E0.hpp"



void fn_80214204(PPC::Runtime::GCContext* context)
{
/*80214204 00211004*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80214208 00211008*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021420C 0021100C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214210 00211010*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*80214214 00211014*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80214218 00211018*/ PPC::Runtime::ASM::bl(fn_801FE1E0);
/*8021421C 0021101C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214220 00211020*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80214224 00211024*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80214228 00211028*/ PPC::Runtime::ASM::blr();
}