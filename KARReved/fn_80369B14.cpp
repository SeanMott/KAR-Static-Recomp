//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80369B14(PPC::Runtime::GCContext* context)
{
/*80369B14 00366914*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4000, context->r3));
/*80369B18 00366918*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 8);
/*80369B1C 0036691C*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*80369B20 00366920*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80369B24 00366924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4000, context->r3));
/*80369B28 00366928*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4004, context->r3));
/*80369B2C 0036692C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80369B30 00366930*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4004, context->r3));
/*80369B34 00366934*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*80369B38 00366938*/ PPC::Runtime::ASM::blr();
}