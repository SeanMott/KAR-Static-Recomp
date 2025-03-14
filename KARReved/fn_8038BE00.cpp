//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memcpy.hpp"



void fn_8038BE00(PPC::Runtime::GCContext* context)
{
/*8038BE00 00388C00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8038BE04 00388C04*/ PPC::Runtime::ASM::mflr(context->r0);
/*8038BE08 00388C08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8038BE0C 00388C0C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8038BE10 00388C10*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*8038BE14 00388C14*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8038BE18 00388C18*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*8038BE1C 00388C1C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038BE20 00388C20*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8038BE24 00388C24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8038BE28 00388C28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8038BE2C 00388C2C*/ PPC::Runtime::ASM::beq(.L_8038BE7C);
/*8038BE30 00388C30*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*8038BE34 00388C34*/ PPC::Runtime::ASM::beq(.L_8038BE74);
/*8038BE38 00388C38*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8038BE3C 00388C3C*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r6);
/*8038BE40 00388C40*/ PPC::Runtime::ASM::bl(memcpy);
/*8038BE44 00388C44*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8038BE48 00388C48*/ PPC::Runtime::ASM::beq(.L_8038BE60);
/*8038BE4C 00388C4C*/ PPC::Runtime::ASM::mr(context->r12, context->r31);
/*8038BE50 00388C50*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8038BE54 00388C54*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8038BE58 00388C58*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8038BE5C 00388C5C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8038BE60, 0x8038BE60) //this is a jump label
/*8038BE60 00388C60*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4D68 @ Get_MemoryOffset_HighBit);
/*8038BE64 00388C64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8038BE68 00388C68*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F4D68 @ Get_MemoryOffset_LowBit);
/*8038BE6C 00388C6C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8038BE70 00388C70*/ PPC::Runtime::ASM::bl(OSReport);
RUNTIME_PPC_JUMP_LABEL(.L_8038BE74, 0x8038BE74) //this is a jump label
/*8038BE74 00388C74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8038BE78 00388C78*/ PPC::Runtime::ASM::b(.L_8038BE98);
RUNTIME_PPC_JUMP_LABEL(.L_8038BE7C, 0x8038BE7C) //this is a jump label
/*8038BE7C 00388C7C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8038BE80 00388C80*/ PPC::Runtime::ASM::beq(.L_8038BE90);
/*8038BE84 00388C84*/ PPC::Runtime::ASM::li(context->r8, 0x2);
/*8038BE88 00388C88*/ PPC::Runtime::ASM::bl(fn_DVDReadAsyncPrio);
/*8038BE8C 00388C8C*/ PPC::Runtime::ASM::b(.L_8038BE98);
RUNTIME_PPC_JUMP_LABEL(.L_8038BE90, 0x8038BE90) //this is a jump label
/*8038BE90 00388C90*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*8038BE94 00388C94*/ PPC::Runtime::ASM::bl(fn_803C563C);
RUNTIME_PPC_JUMP_LABEL(.L_8038BE98, 0x8038BE98) //this is a jump label
/*8038BE98 00388C98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8038BE9C 00388C9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8038BEA0 00388CA0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8038BEA4 00388CA4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038BEA8 00388CA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8038BEAC 00388CAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8038BEB0 00388CB0*/ PPC::Runtime::ASM::blr();
}