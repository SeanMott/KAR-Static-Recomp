//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces.hpp"
#include "fn_80007E8C.hpp"
#include "fn_80049E24.hpp"



void fn_8000C17C(PPC::Runtime::GCContext* context)
{
/*8000C17C 00008F7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000C180 00008F80*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000C184 00008F84*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8000C188 00008F88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000C18C 00008F8C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x3);
/*8000C190 00008F90*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x13);
/*8000C194 00008F94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000C198 00008F98*/ PPC::Runtime::ASM::bgt(.L_8000C1E4);
/*8000C19C 00008F9C*/ PPC::Runtime::ASM::lis(context->r3, jumptable_80495948 @ Get_MemoryOffset_HighBit);
/*8000C1A0 00008FA0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8000C1A4 00008FA4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_80495948 @ Get_MemoryOffset_LowBit);
/*8000C1A8 00008FA8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8000C1AC 00008FAC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8000C1B0 00008FB0*/ PPC::Runtime::ASM::bctr();
/*8000C1B4 00008FB4*/ PPC::Runtime::ASM::li(context->r31, 0x25);
/*8000C1B8 00008FB8*/ PPC::Runtime::ASM::b(.L_8000C1EC);
/*8000C1BC 00008FBC*/ PPC::Runtime::ASM::li(context->r31, 0x26);
/*8000C1C0 00008FC0*/ PPC::Runtime::ASM::b(.L_8000C1EC);
/*8000C1C4 00008FC4*/ PPC::Runtime::ASM::li(context->r31, 0x27);
/*8000C1C8 00008FC8*/ PPC::Runtime::ASM::b(.L_8000C1EC);
/*8000C1CC 00008FCC*/ PPC::Runtime::ASM::li(context->r31, 0x28);
/*8000C1D0 00008FD0*/ PPC::Runtime::ASM::b(.L_8000C1EC);
/*8000C1D4 00008FD4*/ PPC::Runtime::ASM::li(context->r31, 0x29);
/*8000C1D8 00008FD8*/ PPC::Runtime::ASM::b(.L_8000C1EC);
/*8000C1DC 00008FDC*/ PPC::Runtime::ASM::li(context->r31, 0x2a);
/*8000C1E0 00008FE0*/ PPC::Runtime::ASM::b(.L_8000C1EC);
RUNTIME_PPC_JUMP_LABEL(.L_8000C1E4, 0x8000C1E4) //this is a jump label
/*8000C1E4 00008FE4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8000C1E8 00008FE8*/ PPC::Runtime::ASM::b(.L_8000C214);
RUNTIME_PPC_JUMP_LABEL(.L_8000C1EC, 0x8000C1EC) //this is a jump label
/*8000C1EC 00008FEC*/ PPC::Runtime::ASM::bl(fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces);
/*8000C1F0 00008FF0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8000C1F4 00008FF4*/ PPC::Runtime::ASM::beq(.L_8000C204);
/*8000C1F8 00008FF8*/ PPC::Runtime::ASM::extsb(context->r3, context->r31);
/*8000C1FC 00008FFC*/ PPC::Runtime::ASM::bl(fn_80007E8C);
/*8000C200 00009000*/ PPC::Runtime::ASM::b(.L_8000C214);
RUNTIME_PPC_JUMP_LABEL(.L_8000C204, 0x8000C204) //this is a jump label
/*8000C204 00009004*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r31, 24);
/*8000C208 00009008*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8000C20C 0000900C*/ PPC::Runtime::ASM::bl(fn_80049E24);
/*8000C210 00009010*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8000C214, 0x8000C214) //this is a jump label
/*8000C214 00009014*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000C218 00009018*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000C21C 0000901C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000C220 00009020*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000C224 00009024*/ PPC::Runtime::ASM::blr();
}