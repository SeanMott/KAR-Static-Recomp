//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800098C0.hpp"
#include "fn_801310C4.hpp"



void fn_80113BE0(PPC::Runtime::GCContext* context)
{
/*80113BE0 001109E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80113BE4 001109E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80113BE8 001109E8*/ PPC::Runtime::ASM::lis(context->r4, lbl_805578B8 @ Get_MemoryOffset_HighBit);
/*80113BEC 001109EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80113BF0 001109F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80113BF4 001109F4*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_805578B8 @ Get_MemoryOffset_LowBit);
/*80113BF8 001109F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80113BFC 001109FC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80113C00 00110A00*/ PPC::Runtime::ASM::bl(fn_800098C0);
/*80113C04 00110A04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80113C08 00110A08*/ PPC::Runtime::ASM::beq(.L_80113C20);
/*80113C0C 00110A0C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r30);
/*80113C10 00110A10*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80113C14 00110A14*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*80113C18 00110A18*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80113C1C 00110A1C*/ PPC::Runtime::ASM::bl(fn_801310C4);
RUNTIME_PPC_JUMP_LABEL(.L_80113C20, 0x80113C20) //this is a jump label
/*80113C20 00110A20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80113C24 00110A24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80113C28 00110A28*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80113C2C 00110A2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80113C30 00110A30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80113C34 00110A34*/ PPC::Runtime::ASM::blr();
}