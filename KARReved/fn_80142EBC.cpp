//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80142EBC(PPC::Runtime::GCContext* context)
{
/*80142EBC 0013FCBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80142EC0 0013FCC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80142EC4 0013FCC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80142EC8 0013FCC8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80142ECC 0013FCCC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80142ED0 0013FCD0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80142ED4 0013FCD4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80142ED8 0013FCD8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80142EDC 0013FCDC*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80142EE0 0013FCE0*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x28);
/*80142EE4 0013FCE4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80142EE8 0013FCE8*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r0);
/*80142EEC 0013FCEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80142EF0 0013FCF0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80142EF4 0013FCF4*/ PPC::Runtime::ASM::beq(.L_80142F04);
/*80142EF8 0013FCF8*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*80142EFC 0013FCFC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80142F00 0013FD00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80142F04, 0x80142F04) //this is a jump label
/*80142F04 0013FD04*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80142F08 0013FD08*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80142F0C 0013FD0C*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r0);
/*80142F10 0013FD10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80142F14 0013FD14*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80142F18 0013FD18*/ PPC::Runtime::ASM::beq(.L_80142F28);
/*80142F1C 0013FD1C*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*80142F20 0013FD20*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80142F24 0013FD24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80142F28, 0x80142F28) //this is a jump label
/*80142F28 0013FD28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80142F2C 0013FD2C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80142F30 0013FD30*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80142F34 0013FD34*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80142F38 0013FD38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80142F3C 0013FD3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80142F40 0013FD40*/ PPC::Runtime::ASM::blr();
}