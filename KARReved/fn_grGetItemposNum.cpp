//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DA474.hpp"
#include "fn_800DA474.hpp"



void fn_grGetItemposNum(PPC::Runtime::GCContext* context)
{
/*800D1090 000CDE90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D1094 000CDE94*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D1098 000CDE98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D109C 000CDE9C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D10A0 000CDEA0*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D10A4 000CDEA4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D10A8 000CDEA8*/ PPC::Runtime::ASM::bl(fn_800DA474);
/*800D10AC 000CDEAC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800D10B0 000CDEB0*/ PPC::Runtime::ASM::beq(.L_800D10C4);
/*800D10B4 000CDEB4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D10B8 000CDEB8*/ PPC::Runtime::ASM::bl(fn_800DA474);
/*800D10BC 000CDEBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D10C0 000CDEC0*/ PPC::Runtime::ASM::b(.L_800D10C8);
RUNTIME_PPC_JUMP_LABEL(.L_800D10C4, 0x800D10C4) //this is a jump label
/*800D10C4 000CDEC4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D10C8, 0x800D10C8) //this is a jump label
/*800D10C8 000CDEC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D10CC 000CDECC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D10D0 000CDED0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D10D4 000CDED4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D10D8 000CDED8*/ PPC::Runtime::ASM::blr();
}