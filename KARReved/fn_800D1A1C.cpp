//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D1A1C(PPC::Runtime::GCContext* context)
{
/*800D1A1C 000CE81C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D1A20 000CE820*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 6);
/*800D1A24 000CE824*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r4));
/*800D1A28 000CE828*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800D1A2C 000CE82C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*800D1A30 000CE830*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 9);
/*800D1A34 000CE834*/ PPC::Runtime::ASM::blr();
}