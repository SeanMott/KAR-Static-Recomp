//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80184C3C(PPC::Runtime::GCContext* context)
{
/*80184C3C 00181A3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80184C40 00181A40*/ PPC::Runtime::ASM::mflr(context->r0);
/*80184C44 00181A44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80184C48 00181A48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80184C4C 00181A4C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80184C50 00181A50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80184C54 00181A54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80184C58 00181A58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80184C5C 00181A5C*/ PPC::Runtime::ASM::blr();
}