//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_80236C40.hpp"
#include "fn_80236C40.hpp"



void fn_8018DBA0(PPC::Runtime::GCContext* context)
{
/*8018DBA0 0018A9A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8018DBA4 0018A9A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018DBA8 0018A9A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8018DBAC 0018A9AC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8018DBB0 0018A9B0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8018DBB4 0018A9B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r7));
/*8018DBB8 0018A9B8*/ PPC::Runtime::ASM::lis(context->r7, lbl_804ADB38 @ Get_MemoryOffset_HighBit);
/*8018DBBC 0018A9BC*/ PPC::Runtime::ASM::addi(context->r7, context->r7, lbl_804ADB38 @ Get_MemoryOffset_LowBit);
/*8018DBC0 0018A9C0*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8018DBC4 0018A9C4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 31, 25, 29);
/*8018DBC8 0018A9C8*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8018DBCC 0018A9CC*/ PPC::Runtime::ASM::lwzx(context->r31, context->r7, context->r0);
/*8018DBD0 0018A9D0*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*8018DBD4 0018A9D4*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*8018DBD8 0018A9D8*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*8018DBDC 0018A9DC*/ PPC::Runtime::ASM::beq(.L_8018DC70);
/*8018DBE0 0018A9E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8018DBE4 0018A9E4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8018DBE8 0018A9E8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8018DBEC 0018A9EC*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8018DBF0 0018A9F0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8018DBF4 0018A9F4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*8018DBF8 0018A9F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018DBFC 0018A9FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8018DC00 0018AA00*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f0);
/*8018DC04 0018AA04*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018DC08 0018AA08*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8018DC0C 0018AA0C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8018DC10 0018AA10*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*8018DC14 0018AA14*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018DC18 0018AA18*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8018DC1C 0018AA1C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8018DC20 0018AA20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8018DC24 0018AA24*/ PPC::Runtime::ASM::beq(.L_8018DC4C);
/*8018DC28 0018AA28*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8018DC2C 0018AA2C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8018DC30 0018AA30*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8018DC34 0018AA34*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*8018DC38 0018AA38*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*8018DC3C 0018AA3C*/ PPC::Runtime::ASM::li(context->r6, 0xd7);
/*8018DC40 0018AA40*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8018DC44 0018AA44*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*8018DC48 0018AA48*/ PPC::Runtime::ASM::b(.L_8018DC70);
RUNTIME_PPC_JUMP_LABEL(.L_8018DC4C, 0x8018DC4C) //this is a jump label
/*8018DC4C 0018AA4C*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*8018DC50 0018AA50*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8018DC54 0018AA54*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8018DC58 0018AA58*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*8018DC5C 0018AA5C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x5a6e);
/*8018DC60 0018AA60*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*8018DC64 0018AA64*/ PPC::Runtime::ASM::li(context->r6, 0xd7);
/*8018DC68 0018AA68*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8018DC6C 0018AA6C*/ PPC::Runtime::ASM::bl(fn_80236C40);
RUNTIME_PPC_JUMP_LABEL(.L_8018DC70, 0x8018DC70) //this is a jump label
/*8018DC70 0018AA70*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8018DC74 0018AA74*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8018DC78 0018AA78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8018DC7C 0018AA7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018DC80 0018AA80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8018DC84 0018AA84*/ PPC::Runtime::ASM::blr();
}