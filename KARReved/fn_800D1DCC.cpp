//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D1DCC(PPC::Runtime::GCContext* context)
{
/*800D1DCC 000CEBCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D1DD0 000CEBD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D1DD4 000CEBD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D1DD8 000CEBD8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D1DDC 000CEBDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r3));
/*800D1DE0 000CEBE0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800D1DE4 000CEBE4*/ PPC::Runtime::ASM::beq(.L_800D1DF0);
/*800D1DE8 000CEBE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D1DEC 000CEBEC*/ PPC::Runtime::ASM::bl(fn_HSD_FogSet);
RUNTIME_PPC_JUMP_LABEL(.L_800D1DF0, 0x800D1DF0) //this is a jump label
/*800D1DF0 000CEBF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D1DF4 000CEBF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D1DF8 000CEBF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D1DFC 000CEBFC*/ PPC::Runtime::ASM::blr();
}