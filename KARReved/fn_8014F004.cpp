//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8014F004(PPC::Runtime::GCContext* context)
{
/*8014F004 0014BE04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014F008 0014BE08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014F00C 0014BE0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014F010 0014BE10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8014F014 0014BE14*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8014F018 0014BE18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014F01C 0014BE1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014F020 0014BE20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014F024 0014BE24*/ PPC::Runtime::ASM::blr();
}