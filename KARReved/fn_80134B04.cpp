//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015741C.hpp"



void fn_80134B04(PPC::Runtime::GCContext* context)
{
/*80134B04 00131904*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80134B08 00131908*/ PPC::Runtime::ASM::mflr(context->r0);
/*80134B0C 0013190C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134B10 00131910*/ PPC::Runtime::ASM::bl(fn_8015741C);
/*80134B14 00131914*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134B18 00131918*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80134B1C 0013191C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80134B20 00131920*/ PPC::Runtime::ASM::blr();
}