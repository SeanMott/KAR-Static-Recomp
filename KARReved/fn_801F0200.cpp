//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"



void fn_801F0200(PPC::Runtime::GCContext* context)
{
/*801F0200 001ED000*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F0204 001ED004*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F0208 001ED008*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1F60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F020C 001ED00C*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*801F0210 001ED010*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0214 001ED014*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801F0218 001ED018*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1F64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F021C 001ED01C*/ PPC::Runtime::ASM::li(context->r6, 0x20);
/*801F0220 001ED020*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801F0224 001ED024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0228 001ED028*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F022C 001ED02C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F0230 001ED030*/ PPC::Runtime::ASM::blr();
}