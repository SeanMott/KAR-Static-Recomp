//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802763A8(PPC::Runtime::GCContext* context)
{
/*802763A8 002731A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802763AC 002731AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802763B0 002731B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802763B4 002731B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802763B8 002731B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802763BC 002731BC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802763C0 002731C0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B7F30 @ Get_MemoryOffset_HighBit);
/*802763C4 002731C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802763C8 002731C8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804B7F30 @ Get_MemoryOffset_LowBit);
/*802763CC 002731CC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*802763D0 002731D0*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x14);
/*802763D4 002731D4*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*802763D8 002731D8*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*802763DC 002731DC*/ PPC::Runtime::ASM::beq(.L_802763F0);
/*802763E0 002731E0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xcbc);
/*802763E4 002731E4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xcc8);
/*802763E8 002731E8*/ PPC::Runtime::ASM::li(context->r4, 0x216);
/*802763EC 002731EC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802763F0, 0x802763F0) //this is a jump label
/*802763F0 002731F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802763F4 002731F4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*802763F8 002731F8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*802763FC 002731FC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80276400 00273200*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80276404 00273204*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80276408 00273208*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8027640C 0027320C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80276410 00273210*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80276414 00273214*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80276418 00273218*/ PPC::Runtime::ASM::blr();
}