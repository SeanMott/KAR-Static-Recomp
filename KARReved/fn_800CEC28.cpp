//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800CEC28(PPC::Runtime::GCContext* context)
{
/*800CEC28 000CBA28*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CEC2C 000CBA2C*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 6);
/*800CEC30 000CBA30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r4));
/*800CEC34 000CBA34*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800CEC38 000CBA38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*800CEC3C 000CBA3C*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 8, 20);
/*800CEC40 000CBA40*/ PPC::Runtime::ASM::blr();
}