//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80150208.hpp"
#include "fn_8013BEA0.hpp"



void fn_80153D2C(PPC::Runtime::GCContext* context)
{
/*80153D2C 00150B2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80153D30 00150B30*/ PPC::Runtime::ASM::mflr(context->r0);
/*80153D34 00150B34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80153D38 00150B38*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80153D3C 00150B3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80153D40 00150B40*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80153D44 00150B44*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80153D48 00150B48*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80153D4C 00150B4C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80153D50 00150B50*/ PPC::Runtime::ASM::bl(fn_80150208);
/*80153D54 00150B54*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80153D58 00150B58*/ PPC::Runtime::ASM::lis(context->r5, StructValues_90_8_To_1B @ Get_MemoryOffset_HighBit);
/*80153D5C 00150B5C*/ PPC::Runtime::ASM::lis(context->r4, StructValues_91_1C_To_2F @ Get_MemoryOffset_HighBit);
/*80153D60 00150B60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80153D64 00150B64*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80153D68 00150B68*/ PPC::Runtime::ASM::addi(context->r5, context->r5, StructValues_90_8_To_1B @ Get_MemoryOffset_LowBit);
/*80153D6C 00150B6C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, StructValues_91_1C_To_2F @ Get_MemoryOffset_LowBit);
/*80153D70 00150B70*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*80153D74 00150B74*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80153D78 00150B78*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*80153D7C 00150B7C*/ PPC::Runtime::ASM::extsb(context->r4, context->r5);
/*80153D80 00150B80*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*80153D84 00150B84*/ PPC::Runtime::ASM::bl(fn_8013BEA0);
/*80153D88 00150B88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80153D8C 00150B8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80153D90 00150B90*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80153D94 00150B94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80153D98 00150B98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80153D9C 00150B9C*/ PPC::Runtime::ASM::blr();
}