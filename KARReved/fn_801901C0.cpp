//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801901C0(PPC::Runtime::GCContext* context)
{
/*801901C0 0018CFC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801901C4 0018CFC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801901C8 0018CFC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801901CC 0018CFCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801901D0 0018CFD0*/ PPC::Runtime::ASM::bl(fn_HSD_LObjSetCurrentAll?);
/*801901D4 0018CFD4*/ PPC::Runtime::ASM::bl(fn_COBJ_GetCurrent);
/*801901D8 0018CFD8*/ PPC::Runtime::ASM::bl(fn_HSD_LObjSetupInit?);
/*801901DC 0018CFDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801901E0 0018CFE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801901E4 0018CFE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801901E8 0018CFE8*/ PPC::Runtime::ASM::blr();
}