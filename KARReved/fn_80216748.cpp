//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80203458.hpp"



void fn_80216748(PPC::Runtime::GCContext* context)
{
/*80216748 00213548*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021674C 0021354C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80216750 00213550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216754 00213554*/ PPC::Runtime::ASM::bl(fn_80203458);
/*80216758 00213558*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021675C 0021355C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80216760 00213560*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80216764 00213564*/ PPC::Runtime::ASM::blr();
}