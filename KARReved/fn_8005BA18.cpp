//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005BA18(PPC::Runtime::GCContext* context)
{
/*8005BA18 00058818*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005BA1C 0005881C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005BA20 00058820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005BA24 00058824*/ PPC::Runtime::ASM::bl(fn_804484C8);
/*8005BA28 00058828*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005BA2C 0005882C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005BA30 00058830*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005BA34 00058834*/ PPC::Runtime::ASM::blr();
}