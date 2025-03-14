//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_IFRingIn.hpp"



void fn_TCPSendIn(PPC::Runtime::GCContext* context)
{
/*80473FD4 00470DD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80473FD8 00470DD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80473FDC 00470DDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80473FE0 00470DE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80473FE4 00470DE4*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x0);
/*80473FE8 00470DE8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80473FEC 00470DEC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80473FF0 00470DF0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80473FF4 00470DF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r3));
/*80473FF8 00470DF8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80473FFC 00470DFC*/ PPC::Runtime::ASM::beq(.L_8047400C);
/*80474000 00470E00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r30));
/*80474004 00470E04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80474008 00470E08*/ PPC::Runtime::ASM::bgt(.L_80474014);
RUNTIME_PPC_JUMP_LABEL(.L_8047400C, 0x8047400C) //this is a jump label
/*8047400C 00470E0C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80474010 00470E10*/ PPC::Runtime::ASM::b(.L_804740CC);
RUNTIME_PPC_JUMP_LABEL(.L_80474014, 0x80474014) //this is a jump label
/*80474014 00470E14*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80474018 00470E18*/ PPC::Runtime::ASM::bne(.L_8047403C);
/*8047401C 00470E1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r30));
/*80474020 00470E20*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80474024 00470E24*/ PPC::Runtime::ASM::bne(.L_8047403C);
/*80474028 00470E28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r30));
/*8047402C 00470E2C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*80474030 00470E30*/ PPC::Runtime::ASM::bge(.L_8047403C);
/*80474034 00470E34*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80474038 00470E38*/ PPC::Runtime::ASM::b(.L_8047405C);
RUNTIME_PPC_JUMP_LABEL(.L_8047403C, 0x8047403C) //this is a jump label
/*8047403C 00470E3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r30));
/*80474040 00470E40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r30));
/*80474044 00470E44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r30));
/*80474048 00470E48*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*8047404C 00470E4C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*80474050 00470E50*/ PPC::Runtime::ASM::bge(.L_80474058);
/*80474054 00470E54*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80474058, 0x80474058) //this is a jump label
/*80474058 00470E58*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_8047405C, 0x8047405C) //this is a jump label
/*8047405C 00470E5C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*80474060 00470E60*/ PPC::Runtime::ASM::ble(.L_804740B4);
/*80474064 00470E64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r30));
/*80474068 00470E68*/ PPC::Runtime::ASM::mr(context->r8, context->r29);
/*8047406C 00470E6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r30));
/*80474070 00470E70*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r30));
/*80474074 00470E74*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r30));
/*80474078 00470E78*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r30));
/*8047407C 00470E7C*/ PPC::Runtime::ASM::bl(fn_IFRingIn);
/*80474080 00470E80*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r30));
/*80474084 00470E84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r30));
/*80474088 00470E88*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r29);
/*8047408C 00470E8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r30));
/*80474090 00470E90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r30));
/*80474094 00470E94*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r29);
/*80474098 00470E98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r30));
/*8047409C 00470E9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r30));
/*804740A0 00470EA0*/ PPC::Runtime::ASM::subf(context->r0, context->r29, context->r0);
/*804740A4 00470EA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r30));
/*804740A8 00470EA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r30));
/*804740AC 00470EAC*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r29);
/*804740B0 00470EB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_804740B4, 0x804740B4) //this is a jump label
/*804740B4 00470EB4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*804740B8 00470EB8*/ PPC::Runtime::ASM::beq(.L_804740C8);
/*804740BC 00470EBC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804740C0 00470EC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r30));
/*804740C4 00470EC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_804740C8, 0x804740C8) //this is a jump label
/*804740C8 00470EC8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_804740CC, 0x804740CC) //this is a jump label
/*804740CC 00470ECC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804740D0 00470ED0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804740D4 00470ED4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804740D8 00470ED8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804740DC 00470EDC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804740E0 00470EE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804740E4 00470EE4*/ PPC::Runtime::ASM::blr();
}