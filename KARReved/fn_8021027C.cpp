//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF8D8.hpp"



void fn_8021027C(PPC::Runtime::GCContext* context)
{
/*8021027C 0020D07C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80210280 0020D080*/ PPC::Runtime::ASM::mflr(context->r0);
/*80210284 0020D084*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210288 0020D088*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD878 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021028C 0020D08C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r4));
/*80210290 0020D090*/ PPC::Runtime::ASM::bl(fn_801FF8D8);
/*80210294 0020D094*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210298 0020D098*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021029C 0020D09C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802102A0 0020D0A0*/ PPC::Runtime::ASM::blr();
}