//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007E1A0.hpp"



void fn_80083678(PPC::Runtime::GCContext* context)
{
/*80083678 00080478*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8008367C 0008047C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80083680 00080480*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552E40 @ Get_MemoryOffset_HighBit);
/*80083684 00080484*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80083688 00080488*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8008368C 0008048C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80552E40 @ Get_MemoryOffset_LowBit);
/*80083690 00080490*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80083694 00080494*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80083698, 0x80083698) //this is a jump label
/*80083698 00080498*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1c);
/*8008369C 0008049C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*800836A0 000804A0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800836A4 000804A4*/ PPC::Runtime::ASM::beq(.L_800836BC);
/*800836A8 000804A8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x4);
/*800836AC 000804AC*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x10);
/*800836B0 000804B0*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x1c);
/*800836B4 000804B4*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*800836B8 000804B8*/ PPC::Runtime::ASM::bl(fn_8007E1A0);
RUNTIME_PPC_JUMP_LABEL(.L_800836BC, 0x800836BC) //this is a jump label
/*800836BC 000804BC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*800836C0 000804C0*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x28);
/*800836C4 000804C4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*800836C8 000804C8*/ PPC::Runtime::ASM::blt(.L_80083698);
/*800836CC 000804CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800836D0 000804D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800836D4 000804D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800836D8 000804D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800836DC 000804DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800836E0 000804E0*/ PPC::Runtime::ASM::blr();
}