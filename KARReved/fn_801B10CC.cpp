//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"



void fn_801B10CC(PPC::Runtime::GCContext* context)
{
/*801B10CC 001ADECC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B10D0 001ADED0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B10D4 001ADED4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E14D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B10D8 001ADED8*/ PPC::Runtime::ASM::li(context->r4, 0x38);
/*801B10DC 001ADEDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B10E0 001ADEE0*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801B10E4 001ADEE4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801B10E8 001ADEE8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E14DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B10EC 001ADEEC*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*801B10F0 001ADEF0*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801B10F4 001ADEF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B10F8 001ADEF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B10FC 001ADEFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B1100 001ADF00*/ PPC::Runtime::ASM::blr();
}