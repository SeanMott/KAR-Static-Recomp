//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800644AC.hpp"



void fn_80183DA8(PPC::Runtime::GCContext* context)
{
/*80183DA8 00180BA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80183DAC 00180BAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80183DB0 00180BB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80183DB4 00180BB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80183DB8 00180BB8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80183DBC 00180BBC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80183DC0 00180BC0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80183DC4 00180BC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1168, context->r3));
/*80183DC8 00180BC8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80183DCC 00180BCC*/ PPC::Runtime::ASM::beq(.L_80183E44);
/*80183DD0 00180BD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80183DD4 00180BD4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80183DD8 00180BD8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80183DDC 00180BDC*/ PPC::Runtime::ASM::bne(.L_80183DF0);
/*80183DE0 00180BE0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E38 @ Get_MemoryOffset_SDA21);
/*80183DE4 00180BE4*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80183DE8 00180BE8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E40 @ Get_MemoryOffset_SDA21);
/*80183DEC 00180BEC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80183DF0, 0x80183DF0) //this is a jump label
/*80183DF0 00180BF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80183DF4 00180BF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80183DF8 00180BF8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80183DFC 00180BFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80183E00 00180C00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80183E04 00180C04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80183E08 00180C08*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80183E0C 00180C0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80183E10 00180C10*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80183E14 00180C14*/ PPC::Runtime::ASM::beq(.L_80183E30);
/*80183E18 00180C18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80183E1C 00180C1C*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*80183E20 00180C20*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80183E24 00180C24*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80183E28 00180C28*/ PPC::Runtime::ASM::bl(fn_800644AC);
/*80183E2C 00180C2C*/ PPC::Runtime::ASM::b(.L_80183E44);
RUNTIME_PPC_JUMP_LABEL(.L_80183E30, 0x80183E30) //this is a jump label
/*80183E30 00180C30*/ PPC::Runtime::ASM::lis(context->r3, String_ "mnlandialogue." Get_MemoryOffset_HighBit);
/*80183E34 00180C34*/ PPC::Runtime::ASM::li(context->r4, 0x4f);
/*80183E38 00180C38*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "mnlandialogue." Get_MemoryOffset_LowBit);
/*80183E3C 00180C3C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E48 @ Get_MemoryOffset_SDA21);
/*80183E40 00180C40*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80183E44, 0x80183E44) //this is a jump label
/*80183E44 00180C44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80183E48 00180C48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80183E4C 00180C4C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80183E50 00180C50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80183E54 00180C54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80183E58 00180C58*/ PPC::Runtime::ASM::blr();
}