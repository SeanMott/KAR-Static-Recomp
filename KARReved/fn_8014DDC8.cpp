//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8014DDC8(PPC::Runtime::GCContext* context)
{
/*8014DDC8 0014ABC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014DDCC 0014ABCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014DDD0 0014ABD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014DDD4 0014ABD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8014DDD8 0014ABD8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8014DDDC 0014ABDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014DDE0 0014ABE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014DDE4 0014ABE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014DDE8 0014ABE8*/ PPC::Runtime::ASM::blr();
}