//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __init_cpp(PPC::Runtime::GCContext* context)
{
/*803DB9B4 003D87B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DB9B8 003D87B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DB9BC 003D87BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803DB9C0 003D87C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803DB9C4 003D87C4*/ PPC::Runtime::ASM::lis(context->r3, _ctors @ Get_MemoryOffset_HighBit);
/*803DB9C8 003D87C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, _ctors @ Get_MemoryOffset_LowBit);
/*803DB9CC 003D87CC*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*803DB9D0 003D87D0*/ PPC::Runtime::ASM::b(.L_803DB9D4);
RUNTIME_PPC_JUMP_LABEL(.L_803DB9D4, 0x803DB9D4) //this is a jump label
/*803DB9D4 003D87D4*/ PPC::Runtime::ASM::b(.L_803DB9D8);
RUNTIME_PPC_JUMP_LABEL(.L_803DB9D8, 0x803DB9D8) //this is a jump label
/*803DB9D8 003D87D8*/ PPC::Runtime::ASM::b(.L_803DB9E8);
RUNTIME_PPC_JUMP_LABEL(.L_803DB9DC, 0x803DB9DC) //this is a jump label
/*803DB9DC 003D87DC*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 803DB9E0 003D87E0  4E 80 00 21 */ blrl
/*803DB9E4 003D87E4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_803DB9E8, 0x803DB9E8) //this is a jump label
/*803DB9E8 003D87E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803DB9EC 003D87EC*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803DB9F0 003D87F0*/ PPC::Runtime::ASM::bne(.L_803DB9DC);
/*803DB9F4 003D87F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DB9F8 003D87F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803DB9FC 003D87FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803DBA00 003D8800*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DBA04 003D8804*/ PPC::Runtime::ASM::blr();
}